/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Copyright (c) 2017 - 2018 Fraunhofer IOSB (Author: Jan Hermes)
 */

#include <open62541/plugin/pubsub_udp.h>
#include <open62541/plugin/securitypolicy_default.h>
#include <open62541/server_config_default.h>
#include <open62541/server_pubsub.h>

#include "open62541/types_generated_encoding_binary.h"

#include "ua_pubsub.h"
#include "ua_server_internal.h"

#include <check.h>
#include <ctype.h>

#include <mbedtls/aes.h>
#include <mbedtls/ctr_drbg.h>
#include <mbedtls/entropy.h>
#include <mbedtls/entropy_poll.h>
#include <mbedtls/error.h>
#include <mbedtls/md.h>
#include <mbedtls/sha1.h>
#include <mbedtls/version.h>
#include <mbedtls/x509_crt.h>

#define UA_AES128CTR_SIGNING_KEY_LENGTH 16
#define UA_AES128CTR_KEY_LENGTH 16
#define UA_AES128CTR_KEYNONCE_LENGTH 4

UA_Byte signingKey[UA_AES128CTR_SIGNING_KEY_LENGTH] = {0};
UA_Byte encryptingKey[UA_AES128CTR_KEY_LENGTH] = {0};
UA_Byte keyNonce[UA_AES128CTR_KEYNONCE_LENGTH] = {0};
UA_Server *server = NULL;
UA_NodeId readerGroupId, connectionId;

UA_Logger *logger = NULL;

static void
setup(void) {
    server = UA_Server_new();
    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setDefault(config);
    UA_ServerConfig_addPubSubTransportLayer(config, UA_PubSubTransportLayerUDPMP());

    config->pubSubConfig.securityPolicies =
        (UA_PubSubSecurityPolicy *)UA_malloc(sizeof(UA_PubSubSecurityPolicy));
    config->pubSubConfig.securityPoliciesSize = 1;
    UA_PubSubSecurityPolicy_Aes128Ctr(config->pubSubConfig.securityPolicies,
                                      &config->logger);

    UA_Server_run_startup(server);
    // add 2 connections
    UA_PubSubConnectionConfig connectionConfig;
    memset(&connectionConfig, 0, sizeof(UA_PubSubConnectionConfig));
    connectionConfig.name = UA_STRING("UADP Connection");
    UA_NetworkAddressUrlDataType networkAddressUrl = {
        UA_STRING_NULL, UA_STRING("opc.udp://224.0.0.22:4840/")};
    UA_Variant_setScalar(&connectionConfig.address, &networkAddressUrl,
                         &UA_TYPES[UA_TYPES_NETWORKADDRESSURLDATATYPE]);
    connectionConfig.transportProfileUri =
        UA_STRING("http://opcfoundation.org/UA-Profile/Transport/pubsub-udp-uadp");
    UA_Server_addPubSubConnection(server, &connectionConfig, &connectionId);

    logger = &server->config.logger;
}

static void
teardown(void) {
    UA_Server_run_shutdown(server);
    UA_Server_delete(server);
}

/*
static
void dump_hex_pkg(UA_Byte* buffer, size_t bufferLen) {
    printf("--------------- HEX Package Start ---------------\n");
    char ascii[17];
    memset(ascii,0,17);
    for (size_t i = 0; i < bufferLen; i++)
    {
        if (i == 0)
            printf("%08zx ", i);
        else if (i%16 == 0)
            printf(" |%s|\n%08zx ", ascii, i);
        if (isprint((int)(buffer[i])))
            ascii[i%16] = (char)buffer[i];
        else
            ascii[i%16] = '.';
        if (i%8==0)
            printf(" ");
        printf("%02X ", (unsigned char)buffer[i]);

    }
    size_t fillPos = bufferLen %16;
    ascii[fillPos] = 0;
    for (size_t i=fillPos; i<16; i++) {
        if (i%8==0)
            printf(" ");
        printf("   ");
    }
    printf(" |%s|\n%08zx\n", ascii, bufferLen);
    printf("--------------- HEX Package END ---------------\n");
}
*/
static UA_Byte *
hexstr_to_char(const char *hexstr) {
    size_t len = strlen(hexstr);
    if(len % 2 != 0)
        return NULL;
    size_t final_len = len / 2;
    UA_Byte *chrs = (UA_Byte *)malloc((final_len + 1) * sizeof(*chrs));
    for(size_t i = 0, j = 0; j < final_len; i += 2, j++)
        chrs[j] =
            (UA_Byte)((hexstr[i] % 32 + 9) % 25 * 16 + (hexstr[i + 1] % 32 + 9) % 25);
    chrs[final_len] = '\0';
    return chrs;
}

#define MSG_LENGTH_ENCRYPTED 85
#define MSG_LENGTH_DECRYPTED 39
#define MSG_HEADER "f111ba08016400014df4030100000008b02d012e01000000"
#define MSG_HEADER_NO_SEC "f101ba08016400014df4"
#define MSG_PAYLOAD_ENC "da434ce02ee19922c6e916c8154123baa25f67288e3378d613f3203909"
#define MSG_PAYLOAD_DEC "e1101054c2949f3ad701b4205f69841e5f6901000d7657c2949F3ad701"
#define MSG_SIG "6e08a9ff14b83ea2247792eeffc757c85ac99c0ffa79e4fbe5629783dc77b403"
#define MSG_SIG_INVALID "5e08a9ff14b83ea2247792eeffc757c85ac99c0ffa79e4fbe5629783dc77b403"

/*
static UA_ReaderGroup*
newReaderGroupWithoutSecurity(void) {
    UA_ServerConfig *config = UA_Server_getConfig(server);

    UA_ReaderGroupConfig readerGroupConfigWithoutSecurity;
    memset(&readerGroupConfigWithoutSecurity, 0, sizeof(readerGroupConfigWithoutSecurity));
    readerGroupConfigWithoutSecurity.name = UA_STRING("ReaderGroup");

    readerGroupConfigWithoutSecurity.securityMode = UA_MESSAGESECURITYMODE_NONE;
    readerGroupConfigWithoutSecurity.securityPolicy = &config->pubSubConfig.securityPolicies[0];

    UA_ReaderGroup *rgWithoutSecurity = (UA_ReaderGroup *)UA_calloc(1, sizeof(UA_ReaderGroup));
    UA_ReaderGroupConfig_copy(&readerGroupConfigWithoutSecurity, &rgWithoutSecurity->config);
    return rgWithoutSecurity;
} */

static UA_ReaderGroup*
newReaderGroupWithSecurity(UA_MessageSecurityMode mode) {
    UA_ServerConfig *config = UA_Server_getConfig(server);

    UA_ReaderGroupConfig readerGroupConfig;
    memset(&readerGroupConfig, 0, sizeof(readerGroupConfig));
    readerGroupConfig.name = UA_STRING("ReaderGroup");

    readerGroupConfig.securityMode = mode;
    readerGroupConfig.securityPolicy = &config->pubSubConfig.securityPolicies[0];

    UA_ByteString sk = {UA_AES128CTR_SIGNING_KEY_LENGTH, signingKey};
    UA_ByteString ek = {UA_AES128CTR_KEY_LENGTH, encryptingKey};
    UA_ByteString kn = {UA_AES128CTR_KEYNONCE_LENGTH, keyNonce};

    UA_ReaderGroup *rgWithSecurity = (UA_ReaderGroup *)UA_calloc(1, sizeof(UA_ReaderGroup));
    UA_ReaderGroupConfig_copy(&readerGroupConfig, &rgWithSecurity->config);
    rgWithSecurity->config.securityPolicy->
        newContext(rgWithSecurity->config.securityPolicy->policyContext,
                   &sk, &ek, &kn,
                   &rgWithSecurity->securityPolicyContext);

    return rgWithSecurity;
}

// hexstr_to_char("f111ba08016400014df4030100000008b02d012e01000000da434ce02ee19922c"
//                "6e916c8154123baa25f67288e3378d613f32039096e08a9ff14b83ea2247792ee"
//                "ffc757c85ac99c0ffa79e4fbe5629783dc77b403");

UA_UInt16 dsw[1] = { 0 };
UA_UInt16 sizes[1] = { 1 };

/*
START_TEST(EncodeDecodeNetworkMessage) {
    UA_NetworkMessage msg;

    UA_DataSetMessageHeader dsmHeader;
    dsmHeader.picoSecondsIncluded = false;
    dsmHeader.configVersionMajorVersionEnabled = false;
    dsmHeader.configVersionMinorVersionEnabled = false;
    dsmHeader.picoSecondsIncluded = false;
    dsmHeader.dataSetMessageSequenceNrEnabled = false;
    UA_DataSetMessage dsm;
    // dsm.
    // UA_PublisherIdDatatype publisherIdType;

    msg.version = 0;
    msg.messageIdEnabled = false;

    msg.publisherIdEnabled = 0;
    msg.groupHeaderEnabled = 0;
    msg.payloadHeaderEnabled = 1;
    msg.dataSetClassIdEnabled = false;
    msg.securityEnabled = true;
    msg.timestampEnabled = false;
    msg.picosecondsEnabled = false;
    msg.chunkMessage = false;
    msg.promotedFieldsEnabled = false;
    msg.networkMessageType = UA_NETWORKMESSAGE_DATASET;

    msg.promotedFields = NULL;

    UA_NetworkMessageSecurityHeader securityHeader;
    UA_NetworkMessageGroupHeader groupHeader;
    UA_DataSetPayloadHeader payloadHeader;

    payloadHeader.count = 1;
    payloadHeader.dataSetWriterIds = dsw;

    securityHeader.networkMessageEncrypted = true;
    securityHeader.networkMessageSigned = true;
    securityHeader.securityFooterEnabled = false;
    securityHeader.forceKeyReset = false;
    securityHeader.messageNonce = UA_STRING("\0\0\0\0\0\0\0\0");
    securityHeader.securityTokenId = 0;

    UA_DataSetPayload payload;
    payload.sizes = sizes;
    // payload.dataSetMessages = dsms;

    msg.securityHeader = securityHeader;
    // msg.payloadHeader = payloadHeader;
}
END_TEST
*/
START_TEST(DecodeAndVerifyEncryptedNetworkMessage) {

    UA_ReaderGroup *rgWithSecurity = newReaderGroupWithSecurity(
        UA_MESSAGESECURITYMODE_SIGNANDENCRYPT);

    const char * msg_enc = MSG_HEADER MSG_PAYLOAD_ENC MSG_SIG;

    UA_ByteString buffer;

    buffer.length = MSG_LENGTH_ENCRYPTED;
    buffer.data = hexstr_to_char(msg_enc);

    UA_NetworkMessage msg;
    memset(&msg, 0, sizeof(UA_NetworkMessage));

    size_t currentPosition = 0;
    UA_StatusCode rv = decodeNetworkMessage(
        logger, &buffer, &currentPosition, &msg, rgWithSecurity);
    ck_assert(rv == UA_STATUSCODE_GOOD);

    const char * msg_dec_exp = MSG_HEADER MSG_PAYLOAD_DEC;
    UA_Byte *expectedData = hexstr_to_char(msg_dec_exp);

    ck_assert(memcmp(buffer.data, expectedData, buffer.length) == 0);

    free(expectedData);
    free(buffer.data);
}
END_TEST

START_TEST(InvalidSignature) {
    UA_ReaderGroup *rgWithSecurity = newReaderGroupWithSecurity(
        UA_MESSAGESECURITYMODE_SIGNANDENCRYPT);
    const char * msg_enc = MSG_HEADER MSG_PAYLOAD_ENC MSG_SIG_INVALID;

    UA_ByteString buffer;
    buffer.length = MSG_LENGTH_ENCRYPTED;
    buffer.data = hexstr_to_char(msg_enc);

    UA_NetworkMessage msg;
    memset(&msg, 0, sizeof(UA_NetworkMessage));

    size_t currentPosition = 0;

    UA_StatusCode rv = decodeNetworkMessage(logger, &buffer, &currentPosition, &msg, rgWithSecurity);
    ck_assert(rv == UA_STATUSCODE_BADSECURITYCHECKSFAILED);
}
END_TEST

START_TEST(InvalidSecurityModeInsufficientSig) {
        UA_ReaderGroup *rgWithoutSecurity = newReaderGroupWithSecurity(
            UA_MESSAGESECURITYMODE_NONE);
        const char * msg_enc = MSG_HEADER MSG_PAYLOAD_ENC MSG_SIG;

        UA_ByteString buffer;
        buffer.length = MSG_LENGTH_ENCRYPTED;
        buffer.data = hexstr_to_char(msg_enc);

        UA_NetworkMessage msg;
        memset(&msg, 0, sizeof(UA_NetworkMessage));

        size_t currentPosition = 0;

        UA_StatusCode rv = decodeNetworkMessage(logger, &buffer, &currentPosition, &msg, rgWithoutSecurity);
        ck_assert(rv == UA_STATUSCODE_BADSECURITYMODEINSUFFICIENT);
    }
END_TEST

START_TEST(InvalidSecurityModeRejectedSig) {
    UA_ReaderGroup *rgWithSecurity = newReaderGroupWithSecurity(
        UA_MESSAGESECURITYMODE_SIGNANDENCRYPT);
    const char * msg_unenc = MSG_HEADER_NO_SEC MSG_PAYLOAD_DEC;

    UA_ByteString buffer;
    buffer.length = MSG_LENGTH_DECRYPTED;
    buffer.data = hexstr_to_char(msg_unenc);

    UA_NetworkMessage msg;
    memset(&msg, 0, sizeof(UA_NetworkMessage));

    size_t currentPosition = 0;

    UA_StatusCode rv = decodeNetworkMessage(logger, &buffer, &currentPosition, &msg, rgWithSecurity);
    ck_assert(rv == UA_STATUSCODE_BADSECURITYMODEREJECTED);
}
END_TEST

// START_TEST(InvalidSecurityModeInsufficient) {
//         UA_ReaderGroup *rgWithSecurity = newReaderGroupWithSecurity(UA_MESSAGESECURITYMODE_SIGN);
//         const char * msg_unenc = MSG_HEADER_NO_SEC MSG_PAYLOAD_DEC;
//
//         UA_ByteString buffer;
//         buffer.length = MSG_LENGTH_DECRYPTED;
//         buffer.data = hexstr_to_char(msg_unenc);
//
//         UA_NetworkMessage msg;
//         memset(&msg, 0, sizeof(UA_NetworkMessage));
//
//         size_t currentPosition = 0;
//
//         UA_StatusCode rv = decodeNetworkMessage(logger, &buffer, &currentPosition, &msg, rgWithSecurity);
//         ck_assert(rv == UA_STATUSCODE_BADSECURITYMODEREJECTED);
//     }
// END_TEST

int
main(void) {
    TCase *tc_pubsub_subscribe_encrypted = tcase_create("PubSub Subscribe Security Enabled");
    tcase_add_checked_fixture(tc_pubsub_subscribe_encrypted, setup, teardown);
    tcase_add_test(tc_pubsub_subscribe_encrypted, DecodeAndVerifyEncryptedNetworkMessage);

    TCase *tc_pubsub_subscribe_invalid_sig = tcase_create("PubSub Subscribe Invalid Signature");
    tcase_add_checked_fixture(tc_pubsub_subscribe_invalid_sig, setup, teardown);
    tcase_add_test(tc_pubsub_subscribe_invalid_sig, InvalidSignature);

    TCase *tc_pubsub_subscribe_invalid_securitymode =
        tcase_create("PubSub Subscribe Invalid SecurityMode");
    tcase_add_checked_fixture(tc_pubsub_subscribe_invalid_securitymode, setup, teardown);
    tcase_add_test(tc_pubsub_subscribe_invalid_securitymode, InvalidSecurityModeInsufficientSig);
    tcase_add_test(tc_pubsub_subscribe_invalid_securitymode, InvalidSecurityModeRejectedSig);

    Suite *s = suite_create("PubSub Subscriber decryption");
    suite_add_tcase(s, tc_pubsub_subscribe_encrypted);
    suite_add_tcase(s, tc_pubsub_subscribe_invalid_sig);
    suite_add_tcase(s, tc_pubsub_subscribe_invalid_securitymode);

    SRunner *sr = srunner_create(s);
    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);
    int number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}