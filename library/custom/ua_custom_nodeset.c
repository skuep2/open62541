/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "ua_custom_nodeset.h"


/* ExecutionModeEnum - ns=3;i=1158 */

static UA_StatusCode function_UA_Custom_Nodeset_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ExecutionModeEnum");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[3], 1158LU),
UA_NODEID_NUMERIC(ns[0], 29LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "ExecutionModeEnum"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1158LU)
);
}

/* EnumValues - ns=3;i=1159 */

static UA_StatusCode function_UA_Custom_Nodeset_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7594LU);
UA_EnumValueType variablenode_ns_3_i_1159_variant_DataContents[2];

UA_init(&variablenode_ns_3_i_1159_variant_DataContents[0], &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
variablenode_ns_3_i_1159_variant_DataContents[0].value = (UA_Int64) 2;
variablenode_ns_3_i_1159_variant_DataContents[0].displayName = UA_LOCALIZEDTEXT("", "Start");

UA_init(&variablenode_ns_3_i_1159_variant_DataContents[1], &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
variablenode_ns_3_i_1159_variant_DataContents[1].value = (UA_Int64) 255;
variablenode_ns_3_i_1159_variant_DataContents[1].displayName = UA_LOCALIZEDTEXT("", "Abort");
UA_Variant_setArray(&attr.value, &variablenode_ns_3_i_1159_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValues");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1159LU),
UA_NODEID_NUMERIC(ns[3], 1158LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EnumValues"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1159LU)
);
}

/* ResetModeEnum - ns=3;i=1156 */

static UA_StatusCode function_UA_Custom_Nodeset_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ResetModeEnum");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[3], 1156LU),
UA_NODEID_NUMERIC(ns[0], 29LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "ResetModeEnum"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1156LU)
);
}

/* EnumValues - ns=3;i=1157 */

static UA_StatusCode function_UA_Custom_Nodeset_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7594LU);
UA_EnumValueType variablenode_ns_3_i_1157_variant_DataContents[3];

UA_init(&variablenode_ns_3_i_1157_variant_DataContents[0], &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
variablenode_ns_3_i_1157_variant_DataContents[0].value = (UA_Int64) 1;
variablenode_ns_3_i_1157_variant_DataContents[0].displayName = UA_LOCALIZEDTEXT("", "Application");

UA_init(&variablenode_ns_3_i_1157_variant_DataContents[1], &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
variablenode_ns_3_i_1157_variant_DataContents[1].value = (UA_Int64) 2712;
variablenode_ns_3_i_1157_variant_DataContents[1].displayName = UA_LOCALIZEDTEXT("", "Communication");

UA_init(&variablenode_ns_3_i_1157_variant_DataContents[2], &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
variablenode_ns_3_i_1157_variant_DataContents[2].value = (UA_Int64) 2713;
variablenode_ns_3_i_1157_variant_DataContents[2].displayName = UA_LOCALIZEDTEXT("", "Factory");
UA_Variant_setArray(&attr.value, &variablenode_ns_3_i_1157_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ENUMVALUETYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumValues");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1157LU),
UA_NODEID_NUMERIC(ns[3], 1156LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EnumValues"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);



return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1157LU)
);
}

/* UpdateBehavior - ns=1;i=333 */

static UA_StatusCode function_UA_Custom_Nodeset_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UpdateBehavior");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 333LU),
UA_NODEID_NUMERIC(ns[0], 7LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "UpdateBehavior"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 333LU)
);
}

/* OptionSetValues - ns=1;i=388 */

static UA_StatusCode function_UA_Custom_Nodeset_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 5;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_1_i_388_variant_DataContents[5];
variablenode_ns_1_i_388_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "KeepsParameters");
variablenode_ns_1_i_388_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "WillDisconnect");
variablenode_ns_1_i_388_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "RequiresPowerCycle");
variablenode_ns_1_i_388_variant_DataContents[3] = UA_LOCALIZEDTEXT("", "WillReboot");
variablenode_ns_1_i_388_variant_DataContents[4] = UA_LOCALIZEDTEXT("", "NeedsPreparation");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_388_variant_DataContents, (UA_Int32) 5, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OptionSetValues");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 388LU),
UA_NODEID_NUMERIC(ns[1], 333LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OptionSetValues"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 388LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 388LU)
);
}

/* SoftwareVersionFileType - ns=1;i=331 */

static UA_StatusCode function_UA_Custom_Nodeset_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareVersionFileType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 331LU),
UA_NODEID_NUMERIC(ns[0], 29LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareVersionFileType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 331LU)
);
}

/* EnumStrings - ns=1;i=332 */

static UA_StatusCode function_UA_Custom_Nodeset_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_1_i_332_variant_DataContents[3];
variablenode_ns_1_i_332_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "Current");
variablenode_ns_1_i_332_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "Pending");
variablenode_ns_1_i_332_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "Fallback");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_332_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 332LU),
UA_NODEID_NUMERIC(ns[1], 331LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 332LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 332LU)
);
}

/* ParameterResultDataType - ns=1;i=6525 */

static UA_StatusCode function_UA_Custom_Nodeset_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterResultDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 6525LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "ParameterResultDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6525LU)
);
}

/* Default Binary - ns=1;i=6554 */

static UA_StatusCode function_UA_Custom_Nodeset_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6554LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6554LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 6525LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6554LU)
);
}

/* Default XML - ns=1;i=6538 */

static UA_StatusCode function_UA_Custom_Nodeset_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6538LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6538LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 6525LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6538LU)
);
}

/* Default JSON - ns=1;i=15912 */

static UA_StatusCode function_UA_Custom_Nodeset_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default JSON");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15912LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default JSON"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15912LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 6525LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15912LU)
);
}

/* FetchResultDataType - ns=1;i=6522 */

static UA_StatusCode function_UA_Custom_Nodeset_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "FetchResultDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 6522LU),
UA_NODEID_NUMERIC(ns[0], 22LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "FetchResultDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6522LU)
);
}

/* Default Binary - ns=1;i=6551 */

static UA_StatusCode function_UA_Custom_Nodeset_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6551LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6551LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 6522LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6551LU)
);
}

/* Default XML - ns=1;i=6535 */

static UA_StatusCode function_UA_Custom_Nodeset_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6535LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6535LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 6522LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6535LU)
);
}

/* Default JSON - ns=1;i=15909 */

static UA_StatusCode function_UA_Custom_Nodeset_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default JSON");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15909LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default JSON"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15909LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 6522LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15909LU)
);
}

/* TransferResultDataDataType - ns=1;i=15889 */

static UA_StatusCode function_UA_Custom_Nodeset_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TransferResultDataDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 15889LU),
UA_NODEID_NUMERIC(ns[1], 6522LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "TransferResultDataDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15889LU)
);
}

/* Default JSON - ns=1;i=15911 */

static UA_StatusCode function_UA_Custom_Nodeset_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default JSON");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15911LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default JSON"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15911LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15889LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15911LU)
);
}

/* Default XML - ns=1;i=15901 */

static UA_StatusCode function_UA_Custom_Nodeset_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15901LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15901LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15889LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15901LU)
);
}

/* Default Binary - ns=1;i=15892 */

static UA_StatusCode function_UA_Custom_Nodeset_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15892LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15892LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15889LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15892LU)
);
}

/* TransferResultErrorDataType - ns=1;i=15888 */

static UA_StatusCode function_UA_Custom_Nodeset_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TransferResultErrorDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 15888LU),
UA_NODEID_NUMERIC(ns[1], 6522LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "TransferResultErrorDataType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15888LU)
);
}

/* Default JSON - ns=1;i=15910 */

static UA_StatusCode function_UA_Custom_Nodeset_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default JSON");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15910LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default JSON"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15910LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15888LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15910LU)
);
}

/* Default XML - ns=1;i=15900 */

static UA_StatusCode function_UA_Custom_Nodeset_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default XML");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15900LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default XML"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15900LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15888LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15900LU)
);
}

/* Default Binary - ns=1;i=15891 */

static UA_StatusCode function_UA_Custom_Nodeset_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Default Binary");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15891LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_NODEID_NUMERIC(ns[0], 0LU),
UA_QUALIFIEDNAME(ns[0], "Default Binary"),
UA_NODEID_NUMERIC(ns[0], 76LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15891LU), UA_NODEID_NUMERIC(ns[0], 38LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15888LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15891LU)
);
}

/* DeviceHealthEnumeration - ns=1;i=6244 */

static UA_StatusCode function_UA_Custom_Nodeset_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceHealthEnumeration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_DATATYPE,
UA_NODEID_NUMERIC(ns[1], 6244LU),
UA_NODEID_NUMERIC(ns[0], 29LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "DeviceHealthEnumeration"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6244LU)
);
}

/* EnumStrings - ns=1;i=6450 */

static UA_StatusCode function_UA_Custom_Nodeset_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 5;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
UA_LocalizedText variablenode_ns_1_i_6450_variant_DataContents[5];
variablenode_ns_1_i_6450_variant_DataContents[0] = UA_LOCALIZEDTEXT("", "NORMAL");
variablenode_ns_1_i_6450_variant_DataContents[1] = UA_LOCALIZEDTEXT("", "FAILURE");
variablenode_ns_1_i_6450_variant_DataContents[2] = UA_LOCALIZEDTEXT("", "CHECK_FUNCTION");
variablenode_ns_1_i_6450_variant_DataContents[3] = UA_LOCALIZEDTEXT("", "OFF_SPEC");
variablenode_ns_1_i_6450_variant_DataContents[4] = UA_LOCALIZEDTEXT("", "MAINTENANCE_REQUIRED");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6450_variant_DataContents, (UA_Int32) 5, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
attr.displayName = UA_LOCALIZEDTEXT("", "EnumStrings");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6450LU),
UA_NODEID_NUMERIC(ns[1], 6244LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EnumStrings"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6450LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6450LU)
);
}

/* IsOnline - ns=1;i=6031 */

static UA_StatusCode function_UA_Custom_Nodeset_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "OnlineOf");
attr.displayName = UA_LOCALIZEDTEXT("", "IsOnline");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Used to bind the offline representation of a Device to the online representation.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 6031LU),
UA_NODEID_NUMERIC(ns[0], 44LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "IsOnline"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6031LU)
);
}

/* ConnectsTo - ns=1;i=6030 */

static UA_StatusCode function_UA_Custom_Nodeset_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.symmetric  = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ConnectsTo");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Used to indicate that source and target Node have a topological connection.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 6030LU),
UA_NODEID_NUMERIC(ns[0], 33LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "ConnectsTo"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6030LU)
);
}

/* ConnectsToParent - ns=1;i=6467 */

static UA_StatusCode function_UA_Custom_Nodeset_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.symmetric  = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ConnectsToParent");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Defines the parent (i.e. the communication Device) of a Network.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[1], 6467LU),
UA_NODEID_NUMERIC(ns[1], 6030LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "ConnectsToParent"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6467LU)
);
}

/* SignalType - ns=3;i=1008 */

static UA_StatusCode function_UA_Custom_Nodeset_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SignalType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 1008LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "SignalType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1008LU)
);
}

/* MultiStateDiscreteSignalType - ns=3;i=1038 */

static UA_StatusCode function_UA_Custom_Nodeset_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MultiStateDiscreteSignalType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 1038LU),
UA_NODEID_NUMERIC(ns[3], 1008LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "MultiStateDiscreteSignalType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1038LU)
);
}

/* TwoStateDiscreteSignalType - ns=3;i=1037 */

static UA_StatusCode function_UA_Custom_Nodeset_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TwoStateDiscreteSignalType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 1037LU),
UA_NODEID_NUMERIC(ns[3], 1008LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "TwoStateDiscreteSignalType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1037LU)
);
}

/* DiscreteSignalType - ns=3;i=1036 */

static UA_StatusCode function_UA_Custom_Nodeset_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DiscreteSignalType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 1036LU),
UA_NODEID_NUMERIC(ns[3], 1008LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "DiscreteSignalType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1036LU)
);
}

/* Tag - ns=3;i=1035 */

static UA_StatusCode function_UA_Custom_Nodeset_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Tag");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1035LU),
UA_NODEID_NUMERIC(ns[3], 1008LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "SignalTag"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1035LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1035LU)
);
}

/* ControlSignalType - ns=3;i=1023 */

static UA_StatusCode function_UA_Custom_Nodeset_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ControlSignalType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 1023LU),
UA_NODEID_NUMERIC(ns[3], 1008LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "ControlSignalType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1023LU)
);
}

/* Autoadjust - ns=3;i=1116 */

static UA_StatusCode function_UA_Custom_Nodeset_35_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Autoadjust");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 1116LU),
UA_NODEID_NUMERIC(ns[3], 1023LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "AutoAdjustPositioner"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1116LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_35_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1116LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=3;i=1119 */

static UA_StatusCode function_UA_Custom_Nodeset_36_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_3_i_1119_variant_DataContents[1];

UA_init(&variablenode_ns_3_i_1119_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_3_i_1119_variant_DataContents[0].name = UA_STRING("ExecutionMode");
variablenode_ns_3_i_1119_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[3], 1158LU);
variablenode_ns_3_i_1119_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_3_i_1119_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1119LU),
UA_NODEID_NUMERIC(ns[3], 1116LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1119LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_36_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1119LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* AnalogSignalType - ns=3;i=1022 */

static UA_StatusCode function_UA_Custom_Nodeset_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AnalogSignalType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 1022LU),
UA_NODEID_NUMERIC(ns[3], 1008LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "AnalogSignalType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1022LU)
);
}

/* Zero point adjustment - ns=3;i=1109 */

static UA_StatusCode function_UA_Custom_Nodeset_38_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Zero point adjustment");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 1109LU),
UA_NODEID_NUMERIC(ns[3], 1022LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "ZeroPointAdjustment"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1109LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_38_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1109LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* DiscreteSignalVariableType - ns=3;i=1143 */

static UA_StatusCode function_UA_Custom_Nodeset_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DiscreteSignalVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[3], 1143LU),
UA_NODEID_NUMERIC(ns[0], 2372LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "DiscreteSignalVariableType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1143LU)
);
}

/* Simulation state - ns=3;i=1155 */

static UA_StatusCode function_UA_Custom_Nodeset_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Simulation state");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1155LU),
UA_NODEID_NUMERIC(ns[3], 1143LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "SimulationState"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1155LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1155LU)
);
}

/* Simulation value - ns=3;i=1153 */

static UA_StatusCode function_UA_Custom_Nodeset_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Simulation value");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1153LU),
UA_NODEID_NUMERIC(ns[3], 1143LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "SimulationValue"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1153LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1153LU)
);
}

/* Actual value - ns=3;i=1152 */

static UA_StatusCode function_UA_Custom_Nodeset_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Actual value");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1152LU),
UA_NODEID_NUMERIC(ns[3], 1143LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "ActualValue"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1152LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1152LU)
);
}

/* DiscreteSignal - ns=3;i=1039 */

static UA_StatusCode function_UA_Custom_Nodeset_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DiscreteSignal");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1039LU),
UA_NODEID_NUMERIC(ns[3], 1036LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "DiscreteSignal"),
UA_NODEID_NUMERIC(ns[3], 1143LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1039LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1039LU)
);
}

/* MultiStateDiscreteSignalVariableType - ns=3;i=1142 */

static UA_StatusCode function_UA_Custom_Nodeset_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MultiStateDiscreteSignalVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[3], 1142LU),
UA_NODEID_NUMERIC(ns[0], 19077LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "MultiStateDiscreteSignalVariableType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1142LU)
);
}

/* Simulation state - ns=3;i=1151 */

static UA_StatusCode function_UA_Custom_Nodeset_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Simulation state");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1151LU),
UA_NODEID_NUMERIC(ns[3], 1142LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "SimulationState"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1151LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1151LU)
);
}

/* SimulationValue - ns=3;i=1149 */

static UA_StatusCode function_UA_Custom_Nodeset_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SimulationValue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1149LU),
UA_NODEID_NUMERIC(ns[3], 1142LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "SimulationValue"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1149LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1149LU)
);
}

/* ActualValue - ns=3;i=1148 */

static UA_StatusCode function_UA_Custom_Nodeset_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualValue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1148LU),
UA_NODEID_NUMERIC(ns[3], 1142LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "ActualValue"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1148LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1148LU)
);
}

/* MultiStateDiscreteSignal - ns=3;i=1041 */

static UA_StatusCode function_UA_Custom_Nodeset_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MultiStateDiscreteSignal");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1041LU),
UA_NODEID_NUMERIC(ns[3], 1038LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "MultiStateDiscreteSignal"),
UA_NODEID_NUMERIC(ns[3], 1142LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1041LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1041LU)
);
}

/* TwoStateDiscreteSignalVariableType - ns=3;i=1141 */

static UA_StatusCode function_UA_Custom_Nodeset_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TwoStateDiscreteSignalVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[3], 1141LU),
UA_NODEID_NUMERIC(ns[0], 2373LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "TwoStateDiscreteSignalVariableType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1141LU)
);
}

/* Simulation state - ns=3;i=1147 */

static UA_StatusCode function_UA_Custom_Nodeset_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Simulation state");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1147LU),
UA_NODEID_NUMERIC(ns[3], 1141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "SimulationState"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1147LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1147LU)
);
}

/* SimulationValue - ns=3;i=1145 */

static UA_StatusCode function_UA_Custom_Nodeset_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SimulationValue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1145LU),
UA_NODEID_NUMERIC(ns[3], 1141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "SimulationValue"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1145LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1145LU)
);
}

/* ActualValue - ns=3;i=1144 */

static UA_StatusCode function_UA_Custom_Nodeset_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualValue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1144LU),
UA_NODEID_NUMERIC(ns[3], 1141LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "ActualValue"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1144LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1144LU)
);
}

/* TwoStateDiscreteSignal - ns=3;i=1040 */

static UA_StatusCode function_UA_Custom_Nodeset_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TwoStateDiscreteSignal");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1040LU),
UA_NODEID_NUMERIC(ns[3], 1037LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "TwoStateDiscreteSignal"),
UA_NODEID_NUMERIC(ns[3], 1141LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1040LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1040LU)
);
}

/* AnalogSignalVariableType - ns=3;i=1111 */

static UA_StatusCode function_UA_Custom_Nodeset_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 26LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AnalogSignalVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[3], 1111LU),
UA_NODEID_NUMERIC(ns[0], 17570LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "AnalogSignalVariableType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1111LU)
);
}

/* AnalyticalMeasurementVariableType - ns=3;i=1127 */

static UA_StatusCode function_UA_Custom_Nodeset_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AnalyticalMeasurementVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[3], 1127LU),
UA_NODEID_NUMERIC(ns[3], 1111LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "AnalyticalMeasurementVariableType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1127LU)
);
}

/* TotalizerVariableType - ns=3;i=1126 */

static UA_StatusCode function_UA_Custom_Nodeset_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 26LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TotalizerVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[3], 1126LU),
UA_NODEID_NUMERIC(ns[3], 1111LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "TotalizerVariableType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1126LU)
);
}

/* Pulse width - ns=3;i=1140 */

static UA_StatusCode function_UA_Custom_Nodeset_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Pulse width");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1140LU),
UA_NODEID_NUMERIC(ns[3], 1126LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "PulseWidth"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1140LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1140LU)
);
}

/* Pulse value - ns=3;i=1139 */

static UA_StatusCode function_UA_Custom_Nodeset_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 26LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Pulse value");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1139LU),
UA_NODEID_NUMERIC(ns[3], 1126LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "PulseValue"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1139LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1139LU)
);
}

/* ControlVariableType - ns=3;i=1125 */

static UA_StatusCode function_UA_Custom_Nodeset_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ControlVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[3], 1125LU),
UA_NODEID_NUMERIC(ns[3], 1111LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "ControlVariableType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1125LU)
);
}

/* Actuator type - ns=3;i=1138 */

static UA_StatusCode function_UA_Custom_Nodeset_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Actuator type");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1138LU),
UA_NODEID_NUMERIC(ns[3], 1125LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "ActuatorType"),
UA_NODEID_NUMERIC(ns[0], 19084LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1138LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1138LU)
);
}

/* Operating direction - ns=3;i=1137 */

static UA_StatusCode function_UA_Custom_Nodeset_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Operating direction");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1137LU),
UA_NODEID_NUMERIC(ns[3], 1125LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "OperatingDirection"),
UA_NODEID_NUMERIC(ns[0], 19084LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1137LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1137LU)
);
}

/* Setpoint - ns=3;i=1136 */

static UA_StatusCode function_UA_Custom_Nodeset_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Setpoint");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1136LU),
UA_NODEID_NUMERIC(ns[3], 1125LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Setpoint"),
UA_NODEID_NUMERIC(ns[0], 15318LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1136LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1136LU)
);
}

/* ControlSignal - ns=3;i=1031 */

static UA_StatusCode function_UA_Custom_Nodeset_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ControlSignal");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1031LU),
UA_NODEID_NUMERIC(ns[3], 1023LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "ControlSignal"),
UA_NODEID_NUMERIC(ns[3], 1125LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1031LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1031LU)
);
}

/* ActualDensityVariableType - ns=3;i=1124 */

static UA_StatusCode function_UA_Custom_Nodeset_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualDensityVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[3], 1124LU),
UA_NODEID_NUMERIC(ns[3], 1111LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "ActualDensityVariableType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1124LU)
);
}

/* LevelMeasurementVariableType - ns=3;i=1123 */

static UA_StatusCode function_UA_Custom_Nodeset_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LevelMeasurementVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[3], 1123LU),
UA_NODEID_NUMERIC(ns[3], 1111LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "LevelMeasurementVariableType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1123LU)
);
}

/* FlowMeasurementVariableType - ns=3;i=1122 */

static UA_StatusCode function_UA_Custom_Nodeset_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "FlowMeasurementVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[3], 1122LU),
UA_NODEID_NUMERIC(ns[3], 1111LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "FlowMeasurementVariableType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1122LU)
);
}

/* NormalizedVolumeFlowRateVariableType - ns=3;i=1135 */

static UA_StatusCode function_UA_Custom_Nodeset_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "NormalizedVolumeFlowRateVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[3], 1135LU),
UA_NODEID_NUMERIC(ns[3], 1122LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "NormalizedVolumeFlowRateVariableType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1135LU)
);
}

/* ActualVolumeFlowRateVariableType - ns=3;i=1134 */

static UA_StatusCode function_UA_Custom_Nodeset_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualVolumeFlowRateVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[3], 1134LU),
UA_NODEID_NUMERIC(ns[3], 1122LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "ActualVolumeFlowRateVariableType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1134LU)
);
}

/* MassFlowRateVariableType - ns=3;i=1133 */

static UA_StatusCode function_UA_Custom_Nodeset_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MassFlowRateVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[3], 1133LU),
UA_NODEID_NUMERIC(ns[3], 1122LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "MassFlowRateVariableType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1133LU)
);
}

/* Flow direction - ns=3;i=1132 */

static UA_StatusCode function_UA_Custom_Nodeset_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Flow direction");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1132LU),
UA_NODEID_NUMERIC(ns[3], 1122LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "FlowDirection"),
UA_NODEID_NUMERIC(ns[0], 19084LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1132LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1132LU)
);
}

/* Low flow cut off - ns=3;i=1131 */

static UA_StatusCode function_UA_Custom_Nodeset_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Low flow cut off");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1131LU),
UA_NODEID_NUMERIC(ns[3], 1122LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "LowFlowCutOff"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1131LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1131LU)
);
}

/* PressureMeasurementVariableType - ns=3;i=1121 */

static UA_StatusCode function_UA_Custom_Nodeset_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PressureMeasurementVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[3], 1121LU),
UA_NODEID_NUMERIC(ns[3], 1111LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "PressureMeasurementVariableType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1121LU)
);
}

/* TemperatureMeasurementVariableType - ns=3;i=1120 */

static UA_StatusCode function_UA_Custom_Nodeset_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TemperatureMeasurementVariableType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[3], 1120LU),
UA_NODEID_NUMERIC(ns[3], 1111LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "TemperatureMeasurementVariableType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1120LU)
);
}

/* TC-Sensor reference - ns=3;i=1130 */

static UA_StatusCode function_UA_Custom_Nodeset_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TC-Sensor reference");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1130LU),
UA_NODEID_NUMERIC(ns[3], 1120LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "SensorReference"),
UA_NODEID_NUMERIC(ns[0], 19084LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1130LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1130LU)
);
}

/* RTD-Sensor connection - ns=3;i=1129 */

static UA_StatusCode function_UA_Custom_Nodeset_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RTD-Sensor connection");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1129LU),
UA_NODEID_NUMERIC(ns[3], 1120LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "SensorConnection"),
UA_NODEID_NUMERIC(ns[0], 19084LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1129LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1129LU)
);
}

/* Sensor type - ns=3;i=1128 */

static UA_StatusCode function_UA_Custom_Nodeset_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Sensor type");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1128LU),
UA_NODEID_NUMERIC(ns[3], 1120LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "SensorType"),
UA_NODEID_NUMERIC(ns[0], 19084LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1128LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1128LU)
);
}

/* Damping - ns=3;i=1118 */

static UA_StatusCode function_UA_Custom_Nodeset_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Damping");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1118LU),
UA_NODEID_NUMERIC(ns[3], 1111LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "Damping"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1118LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1118LU)
);
}

/* Simulation value - ns=3;i=1117 */

static UA_StatusCode function_UA_Custom_Nodeset_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 26LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Simulation value");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1117LU),
UA_NODEID_NUMERIC(ns[3], 1111LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "SimulationValue"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1117LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1117LU)
);
}

/* Actual value - ns=3;i=1115 */

static UA_StatusCode function_UA_Custom_Nodeset_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 26LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Actual value");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1115LU),
UA_NODEID_NUMERIC(ns[3], 1111LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "ActualValue"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1115LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1115LU)
);
}

/* Simulation state - ns=3;i=1113 */

static UA_StatusCode function_UA_Custom_Nodeset_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Simulation state");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1113LU),
UA_NODEID_NUMERIC(ns[3], 1111LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "SimulationState"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1113LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1113LU)
);
}

/* AnalogSignal - ns=3;i=1027 */

static UA_StatusCode function_UA_Custom_Nodeset_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 26LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AnalogSignal");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1027LU),
UA_NODEID_NUMERIC(ns[3], 1022LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "AnalogSignal"),
UA_NODEID_NUMERIC(ns[3], 1111LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1027LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1027LU)
);
}

/* ISignalSetType - ns=3;i=1052 */

static UA_StatusCode function_UA_Custom_Nodeset_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ISignalSetType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 1052LU),
UA_NODEID_NUMERIC(ns[0], 17602LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "ISignalSetType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1052LU)
);
}

/* IAdministrationType - ns=3;i=1050 */

static UA_StatusCode function_UA_Custom_Nodeset_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "IAdministrationType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 1050LU),
UA_NODEID_NUMERIC(ns[0], 17602LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "IAdministrationType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1050LU)
);
}

/* Factory reset - ns=3;i=1072 */

static UA_StatusCode function_UA_Custom_Nodeset_84_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Factory reset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 1072LU),
UA_NODEID_NUMERIC(ns[3], 1050LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "FactoryReset"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1072LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_84_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1072LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=3;i=1080 */

static UA_StatusCode function_UA_Custom_Nodeset_85_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_3_i_1080_variant_DataContents[1];

UA_init(&variablenode_ns_3_i_1080_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_3_i_1080_variant_DataContents[0].name = UA_STRING("ResetMode");
variablenode_ns_3_i_1080_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[3], 1156LU);
variablenode_ns_3_i_1080_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_3_i_1080_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1080LU),
UA_NODEID_NUMERIC(ns[3], 1072LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1080LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_85_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1080LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Date of last change - ns=3;i=1070 */

static UA_StatusCode function_UA_Custom_Nodeset_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Date of last change");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1070LU),
UA_NODEID_NUMERIC(ns[3], 1050LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "DateOfLastChange"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1070LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1070LU)
);
}

/* Display language - ns=3;i=1068 */

static UA_StatusCode function_UA_Custom_Nodeset_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 295LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Display language");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1068LU),
UA_NODEID_NUMERIC(ns[3], 1050LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "DisplayLanguage"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1068LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1068LU)
);
}

/* SignalSetType - ns=3;i=1021 */

static UA_StatusCode function_UA_Custom_Nodeset_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SignalSetType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 1021LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "SignalSetType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1021LU)
);
}

/* SignalSet - ns=3;i=1074 */

static UA_StatusCode function_UA_Custom_Nodeset_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SignalSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 1074LU),
UA_NODEID_NUMERIC(ns[3], 1052LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "SignalSet"),
UA_NODEID_NUMERIC(ns[3], 1021LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1074LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1074LU)
);
}

/* <SignalIdentifier> - ns=3;i=1024 */

static UA_StatusCode function_UA_Custom_Nodeset_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<SignalIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 1024LU),
UA_NODEID_NUMERIC(ns[3], 1021LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "<SignalIdentifier>"),
UA_NODEID_NUMERIC(ns[3], 1008LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1024LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1024LU)
);
}

/* http://opcfoundation.org/UA/PADIM/ - ns=3;i=1000 */

static UA_StatusCode function_UA_Custom_Nodeset_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://opcfoundation.org/UA/PADIM/");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 1000LU),
UA_NODEID_NUMERIC(ns[0], 11715LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "http://opcfoundation.org/UA/PADIM/"),
UA_NODEID_NUMERIC(ns[0], 11616LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1000LU)
);
}

/* StaticStringNodeIdPattern - ns=3;i=1007 */

static UA_StatusCode function_UA_Custom_Nodeset_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticStringNodeIdPattern");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A regular expression which matches string node ids are the same in every server that exposes them.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1007LU),
UA_NODEID_NUMERIC(ns[3], 1000LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticStringNodeIdPattern"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1007LU)
);
}

/* StaticNumericNodeIdRange - ns=3;i=1006 */

static UA_StatusCode function_UA_Custom_Nodeset_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 291LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNumericNodeIdRange");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A list of ranges for numeric node ids which are the same in every server that exposes them.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1006LU),
UA_NODEID_NUMERIC(ns[3], 1000LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNumericNodeIdRange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1006LU)
);
}

/* StaticNodeIdTypes - ns=3;i=1005 */

static UA_StatusCode function_UA_Custom_Nodeset_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 256LU);
UA_Int32 variablenode_ns_3_i_1005_variant_DataContents[1];
variablenode_ns_3_i_1005_variant_DataContents[0] = (UA_Int32) 0;
UA_Variant_setArray(&attr.value, &variablenode_ns_3_i_1005_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_IDTYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNodeIdTypes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A list of IdTypes for nodes which are the same in every server that exposes them.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1005LU),
UA_NODEID_NUMERIC(ns[3], 1000LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNodeIdTypes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1005LU)
);
}

/* NamespaceVersion - ns=3;i=1004 */

static UA_StatusCode function_UA_Custom_Nodeset_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_3_i_1004_variant_DataContents =  UA_String_new();
if (!variablenode_ns_3_i_1004_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_3_i_1004_variant_DataContents);
*variablenode_ns_3_i_1004_variant_DataContents = UA_STRING_ALLOC("1.0.2");
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_1004_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceVersion");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The human readable string representing version of the namespace.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1004LU),
UA_NODEID_NUMERIC(ns[3], 1000LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceVersion"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_3_i_1004_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1004LU)
);
}

/* NamespaceUri - ns=3;i=1003 */

static UA_StatusCode function_UA_Custom_Nodeset_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_3_i_1003_variant_DataContents =  UA_String_new();
if (!variablenode_ns_3_i_1003_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_3_i_1003_variant_DataContents);
*variablenode_ns_3_i_1003_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/PADIM/");
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_1003_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The URI of the namespace.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1003LU),
UA_NODEID_NUMERIC(ns[3], 1000LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_3_i_1003_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1003LU)
);
}

/* NamespacePublicationDate - ns=3;i=1002 */

static UA_StatusCode function_UA_Custom_Nodeset_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13LU);
UA_DateTime *variablenode_ns_3_i_1002_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_3_i_1002_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_3_i_1002_variant_DataContents);
*variablenode_ns_3_i_1002_variant_DataContents = ( (UA_DateTime)(1626825600000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_1002_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespacePublicationDate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The publication date for the namespace.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1002LU),
UA_NODEID_NUMERIC(ns[3], 1000LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespacePublicationDate"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_3_i_1002_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1002LU)
);
}

/* IsNamespaceSubset - ns=3;i=1001 */

static UA_StatusCode function_UA_Custom_Nodeset_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_3_i_1001_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_3_i_1001_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_3_i_1001_variant_DataContents);
*variablenode_ns_3_i_1001_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_1001_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsNamespaceSubset");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "If TRUE then the server only supports a subset of the namespace.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1001LU),
UA_NODEID_NUMERIC(ns[3], 1000LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IsNamespaceSubset"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_3_i_1001_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1001LU)
);
}

/* UnitOfMeasure - ns=2;s=0112/2///61987#ABA968#002 */

static UA_StatusCode function_UA_Custom_Nodeset_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "UnitOfMeasure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA968#002"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABA968#002"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA968#002")
);
}

/* Device diagnostic status - ns=2;s=0112/2///61987#ABN972#001 */

static UA_StatusCode function_UA_Custom_Nodeset_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Device diagnostic status");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN972#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN972#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN972#001")
);
}

/* Volume - ns=2;s=0112/2///61987#ABH328#001 */

static UA_StatusCode function_UA_Custom_Nodeset_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Volume");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABH328#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABH328#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABH328#001")
);
}

/* Mass - ns=2;s=0112/2///61987#ABH327#001 */

static UA_StatusCode function_UA_Custom_Nodeset_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Mass");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABH327#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABH327#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABH327#001")
);
}

/* ControlReadback - ns=2;s=0112/2///61987#ABJ683#001 */

static UA_StatusCode function_UA_Custom_Nodeset_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ControlReadback");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABJ683#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABJ683#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABJ683#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1125LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABJ683#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1031LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABJ683#001")
);
}

/* Density - ns=2;s=0112/2///61987#ABA946#004 */

static UA_StatusCode function_UA_Custom_Nodeset_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Density");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA946#004"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABA946#004"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABA946#004"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1124LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA946#004")
);
}

/* Normalized volume flow rate - ns=2;s=0112/2///61987#ABB292#005 */

static UA_StatusCode function_UA_Custom_Nodeset_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Normalized volume flow rate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB292#005"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABB292#005"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABB292#005"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1135LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB292#005")
);
}

/* Volume flow rate - ns=2;s=0112/2///61987#ABB291#005 */

static UA_StatusCode function_UA_Custom_Nodeset_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Volume flow rate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB291#005"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABB291#005"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABB291#005"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1134LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB291#005")
);
}

/* Mass flow rate - ns=2;s=0112/2///61987#ABB290#005 */

static UA_StatusCode function_UA_Custom_Nodeset_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Mass flow rate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB290#005"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABB290#005"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABB290#005"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1133LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB290#005")
);
}

/* Level - ns=2;s=0112/2///61987#ABH329#002 */

static UA_StatusCode function_UA_Custom_Nodeset_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Level");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABH329#002"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABH329#002"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABH329#002"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1123LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABH329#002")
);
}

/* Pressure - ns=2;s=0112/2///61987#ABN616#001 */

static UA_StatusCode function_UA_Custom_Nodeset_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Pressure");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN616#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN616#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN616#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1121LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN616#001")
);
}

/* Temperature - ns=2;s=0112/2///61987#ABA927#005 */

static UA_StatusCode function_UA_Custom_Nodeset_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA927#005"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABA927#005"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABA927#005"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1120LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA927#005")
);
}

/* TwoStateSimulationValue - ns=2;s=0112/2///61987#ABN632#001 */

static UA_StatusCode function_UA_Custom_Nodeset_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TwoStateSimulationValue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN632#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN632#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN632#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1145LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN632#001")
);
}

/* TwoStateActualValue - ns=2;s=0112/2///61987#ABN645#001 */

static UA_StatusCode function_UA_Custom_Nodeset_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TwoStateActualValue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN645#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN645#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN645#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1144LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN645#001")
);
}

/* TwoStateValue - ns=2;s=0112/2///61987#ABN635#001 */

static UA_StatusCode function_UA_Custom_Nodeset_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TwoStateValue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN635#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN635#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN635#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1141LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN635#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1040LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN635#001")
);
}

/* MultiStateSimulationValue - ns=2;s=0112/2///61987#ABN637#001 */

static UA_StatusCode function_UA_Custom_Nodeset_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MultiStateSimulationValue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN637#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN637#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN637#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1149LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN637#001")
);
}

/* MultiStateActualValue - ns=2;s=0112/2///61987#ABN646#001 */

static UA_StatusCode function_UA_Custom_Nodeset_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MultiStateActualValue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN646#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN646#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN646#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1148LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN646#001")
);
}

/* MultiStateValue - ns=2;s=0112/2///61987#ABN636#001 */

static UA_StatusCode function_UA_Custom_Nodeset_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MultiStateValue");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN636#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN636#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN636#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1142LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN636#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1041LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN636#001")
);
}

/* Pulse width - ns=2;s=0112/2///61987#ABA635#002 */

static UA_StatusCode function_UA_Custom_Nodeset_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Pulse width");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA635#002"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABA635#002"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABA635#002"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1140LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA635#002")
);
}

/* Pulse value - ns=2;s=0112/2///61987#ABE882#001 */

static UA_StatusCode function_UA_Custom_Nodeset_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Pulse value");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABE882#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABE882#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABE882#001")
);
}

/* Pulse value - ns=2;s=0112/2///61987#ABA418#001 */

static UA_StatusCode function_UA_Custom_Nodeset_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Pulse value");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA418#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABA418#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA418#001")
);
}

/* Autoadjust - ns=2;s=0112/2///61987#ABN726#001 */

static UA_StatusCode function_UA_Custom_Nodeset_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Autoadjust");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN726#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN726#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN726#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1116LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN726#001")
);
}

/* Actuator type - ns=2;s=0112/2///61987#ABD742#002 */

static UA_StatusCode function_UA_Custom_Nodeset_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Actuator type");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABD742#002"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABD742#002"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABD742#002"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1138LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABD742#002")
);
}

/* Operating direction - ns=2;s=0112/2///61987#ABD740#002 */

static UA_StatusCode function_UA_Custom_Nodeset_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Operating direction");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABD740#002"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABD740#002"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABD740#002"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1137LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABD740#002")
);
}

/* Setpoint - ns=2;s=0112/2///61987#ABN607#001 */

static UA_StatusCode function_UA_Custom_Nodeset_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Setpoint");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN607#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN607#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN607#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1136LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN607#001")
);
}

/* Flow direction - ns=2;s=0112/2///61987#ABN594#002 */

static UA_StatusCode function_UA_Custom_Nodeset_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Flow direction");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN594#002"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN594#002"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN594#002"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1132LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN594#002")
);
}

/* Low flow cut off - ns=2;s=0112/2///61987#ABJ724#002 */

static UA_StatusCode function_UA_Custom_Nodeset_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Low flow cut off");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABJ724#002"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABJ724#002"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABJ724#002"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1131LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABJ724#002")
);
}

/* TC-Sensor reference - ns=2;s=0112/2///61987#ABB093#002 */

static UA_StatusCode function_UA_Custom_Nodeset_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TC-Sensor reference");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB093#002"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABB093#002"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABB093#002"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1130LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB093#002")
);
}

/* RTD-Sensor connection - ns=2;s=0112/2///61987#ABB091#002 */

static UA_StatusCode function_UA_Custom_Nodeset_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RTD-Sensor connection");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB091#002"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABB091#002"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABB091#002"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1129LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB091#002")
);
}

/* Sensor type - ns=2;s=0112/2///61987#ABB092#002 */

static UA_StatusCode function_UA_Custom_Nodeset_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Sensor type");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB092#002"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABB092#002"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB092#002")
);
}

/* Sensor type - ns=2;s=0112/2///61987#ABB088#002 */

static UA_StatusCode function_UA_Custom_Nodeset_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Sensor type");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB088#002"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABB088#002"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB088#002")
);
}

/* Zero point adjustment - ns=2;s=0112/2///61987#ABN614#001 */

static UA_StatusCode function_UA_Custom_Nodeset_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Zero point adjustment");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN614#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN614#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN614#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1109LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN614#001")
);
}

/* Damping - ns=2;s=0112/2///61987#ABH526#002 */

static UA_StatusCode function_UA_Custom_Nodeset_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Damping");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABH526#002"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABH526#002"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABH526#002"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1118LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABH526#002")
);
}

/* Simulation value - ns=2;s=0112/2///61987#ABN613#001 */

static UA_StatusCode function_UA_Custom_Nodeset_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Simulation value");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN613#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN613#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN613#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1117LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN613#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1153LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN613#001")
);
}

/* Actual value - ns=2;s=0112/2///61987#ABN644#001 */

static UA_StatusCode function_UA_Custom_Nodeset_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Actual value");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN644#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN644#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN644#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1115LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN644#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1152LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN644#001")
);
}

/* Value - ns=2;s=0112/2///61987#ABN634#001 */

static UA_StatusCode function_UA_Custom_Nodeset_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Value");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN634#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN634#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN634#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1039LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN634#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1111LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN634#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1027LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN634#001")
);
}

/* Simulation state - ns=2;s=0112/2///61987#ABN611#001 */

static UA_StatusCode function_UA_Custom_Nodeset_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Simulation state");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN611#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN611#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN611#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1147LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN611#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1155LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN611#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1151LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN611#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1113LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN611#001")
);
}

/* Tag - ns=2;s=0112/2///61987#ABB271#007 */

static UA_StatusCode function_UA_Custom_Nodeset_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Tag");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB271#007"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABB271#007"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABB271#007"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1035LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABB271#007")
);
}

/* Factory reset - ns=2;s=0112/2///61987#ABN609#001 */

static UA_StatusCode function_UA_Custom_Nodeset_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Factory reset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN609#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN609#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN609#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1072LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN609#001")
);
}

/* Date of last change - ns=2;s=0112/2///61987#ABN604#001 */

static UA_StatusCode function_UA_Custom_Nodeset_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Date of last change");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN604#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN604#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN604#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1070LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN604#001")
);
}

/* Asset ID - ns=2;s=0112/2///61987#ABA038#003 */

static UA_StatusCode function_UA_Custom_Nodeset_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Asset ID");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA038#003"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABA038#003"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA038#003")
);
}

/* URI of Product instance - ns=2;s=0112/2///61987#ABN590#001 */

static UA_StatusCode function_UA_Custom_Nodeset_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "URI of Product instance");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN590#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN590#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN590#001")
);
}

/* Revision counter - ns=2;s=0112/2///61987#ABN603#001 */

static UA_StatusCode function_UA_Custom_Nodeset_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Revision counter");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN603#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN603#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN603#001")
);
}

/* URI of Manufacturer - ns=2;s=0112/2///61987#ABN591#001 */

static UA_StatusCode function_UA_Custom_Nodeset_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "URI of Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN591#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN591#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN591#001")
);
}

/* Serial number - ns=2;s=0112/2///61987#ABA951#007 */

static UA_StatusCode function_UA_Custom_Nodeset_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Serial number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA951#007"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABA951#007"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA951#007")
);
}

/* Hardware revision - ns=2;s=0112/2///61987#ABA926#006 */

static UA_StatusCode function_UA_Custom_Nodeset_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Hardware revision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA926#006"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABA926#006"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA926#006")
);
}

/* Software revision - ns=2;s=0112/2///61987#ABA601#006 */

static UA_StatusCode function_UA_Custom_Nodeset_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Software revision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA601#006"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABA601#006"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA601#006")
);
}

/* Model - ns=2;s=0112/2///61987#ABA567#007 */

static UA_StatusCode function_UA_Custom_Nodeset_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA567#007"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABA567#007"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA567#007")
);
}

/* Product code - ns=2;s=0112/2///61987#ABA300#006 */

static UA_StatusCode function_UA_Custom_Nodeset_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Product code");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA300#006"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABA300#006"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA300#006")
);
}

/* Display language - ns=2;s=0112/2///61987#ABN597#001 */

static UA_StatusCode function_UA_Custom_Nodeset_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Display language");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN597#001"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABN597#001"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_STRING(ns[2], "0112/2///61987#ABN597#001"), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1068LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABN597#001")
);
}

/* Manufacturer - ns=2;s=0112/2///61987#ABA565#007 */

static UA_StatusCode function_UA_Custom_Nodeset_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA565#007"),
UA_NODEID_NUMERIC(ns[0], 17594LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "0112/2///61987#ABA565#007"),
UA_NODEID_NUMERIC(ns[0], 17598LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[2], "0112/2///61987#ABA565#007")
);
}

/* http://opcfoundation.org/UA/Dictionary/IRDI - ns=2;i=1000 */

static UA_StatusCode function_UA_Custom_Nodeset_150_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://opcfoundation.org/UA/Dictionary/IRDI");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[2], 1000LU),
UA_NODEID_NUMERIC(ns[0], 11715LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "http://opcfoundation.org/UA/Dictionary/IRDI"),
UA_NODEID_NUMERIC(ns[0], 11616LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1000LU)
);
}

/* StaticStringNodeIdPattern - ns=2;i=1007 */

static UA_StatusCode function_UA_Custom_Nodeset_151_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticStringNodeIdPattern");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A regular expression which matches string node ids are the same in every server that exposes them.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 1007LU),
UA_NODEID_NUMERIC(ns[2], 1000LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticStringNodeIdPattern"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1007LU)
);
}

/* StaticNumericNodeIdRange - ns=2;i=1006 */

static UA_StatusCode function_UA_Custom_Nodeset_152_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 291LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNumericNodeIdRange");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A list of ranges for numeric node ids which are the same in every server that exposes them.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 1006LU),
UA_NODEID_NUMERIC(ns[2], 1000LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNumericNodeIdRange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1006LU)
);
}

/* StaticNodeIdTypes - ns=2;i=1005 */

static UA_StatusCode function_UA_Custom_Nodeset_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 256LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNodeIdTypes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A list of IdTypes for nodes which are the same in every server that exposes them.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 1005LU),
UA_NODEID_NUMERIC(ns[2], 1000LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNodeIdTypes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1005LU)
);
}

/* NamespaceVersion - ns=2;i=1004 */

static UA_StatusCode function_UA_Custom_Nodeset_154_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_1004_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_1004_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_1004_variant_DataContents);
*variablenode_ns_2_i_1004_variant_DataContents = UA_STRING_ALLOC("1.00");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_1004_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceVersion");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The human readable string representing version of the namespace.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 1004LU),
UA_NODEID_NUMERIC(ns[2], 1000LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceVersion"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_1004_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1004LU)
);
}

/* NamespaceUri - ns=2;i=1003 */

static UA_StatusCode function_UA_Custom_Nodeset_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_2_i_1003_variant_DataContents =  UA_String_new();
if (!variablenode_ns_2_i_1003_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_2_i_1003_variant_DataContents);
*variablenode_ns_2_i_1003_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/Dictionary/IRDI");
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_1003_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The URI of the namespace.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 1003LU),
UA_NODEID_NUMERIC(ns[2], 1000LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_2_i_1003_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1003LU)
);
}

/* NamespacePublicationDate - ns=2;i=1002 */

static UA_StatusCode function_UA_Custom_Nodeset_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13LU);
UA_DateTime *variablenode_ns_2_i_1002_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_2_i_1002_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_2_i_1002_variant_DataContents);
*variablenode_ns_2_i_1002_variant_DataContents = ( (UA_DateTime)(1580774400000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_2_i_1002_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespacePublicationDate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The publication date for the namespace.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 1002LU),
UA_NODEID_NUMERIC(ns[2], 1000LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespacePublicationDate"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_2_i_1002_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1002LU)
);
}

/* IsNamespaceSubset - ns=2;i=1001 */

static UA_StatusCode function_UA_Custom_Nodeset_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "IsNamespaceSubset");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "If TRUE then the server only supports a subset of the namespace.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[2], 1001LU),
UA_NODEID_NUMERIC(ns[2], 1000LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IsNamespaceSubset"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[2], 1001LU)
);
}

/* Opc.Ua.Di - ns=1;i=6423 */
static const UA_Byte variablenode_ns_1_i_6423_variant_DataContents_byteArray[5771] = {60, 120, 115, 58, 115, 99, 104, 101, 109, 97, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 120, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 50, 48, 48, 49, 47, 88, 77, 76, 83, 99, 104, 101, 109, 97, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 117, 97, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 48, 56, 47, 48, 50, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 116, 110, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 68, 73, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 13, 10, 32, 32, 116, 97, 114, 103, 101, 116, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 68, 73, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 13, 10, 32, 32, 101, 108, 101, 109, 101, 110, 116, 70, 111, 114, 109, 68, 101, 102, 97, 117, 108, 116, 61, 34, 113, 117, 97, 108, 105, 102, 105, 101, 100, 34, 13, 10, 62, 13, 10, 32, 32, 60, 120, 115, 58, 105, 109, 112, 111, 114, 116, 32, 110, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 50, 48, 48, 56, 47, 48, 50, 47, 84, 121, 112, 101, 115, 46, 120, 115, 100, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 32, 110, 97, 109, 101, 61, 34, 68, 101, 118, 105, 99, 101, 72, 101, 97, 108, 116, 104, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 78, 79, 82, 77, 65, 76, 95, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 70, 65, 73, 76, 85, 82, 69, 95, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 67, 72, 69, 67, 75, 95, 70, 85, 78, 67, 84, 73, 79, 78, 95, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 79, 70, 70, 95, 83, 80, 69, 67, 95, 51, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 77, 65, 73, 78, 84, 69, 78, 65, 78, 67, 69, 95, 82, 69, 81, 85, 73, 82, 69, 68, 95, 52, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 68, 101, 118, 105, 99, 101, 72, 101, 97, 108, 116, 104, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 68, 101, 118, 105, 99, 101, 72, 101, 97, 108, 116, 104, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 68, 101, 118, 105, 99, 101, 72, 101, 97, 108, 116, 104, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 68, 101, 118, 105, 99, 101, 72, 101, 97, 108, 116, 104, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 68, 101, 118, 105, 99, 101, 72, 101, 97, 108, 116, 104, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 68, 101, 118, 105, 99, 101, 72, 101, 97, 108, 116, 104, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 68, 101, 118, 105, 99, 101, 72, 101, 97, 108, 116, 104, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 70, 101, 116, 99, 104, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 70, 101, 116, 99, 104, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 70, 101, 116, 99, 104, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 70, 101, 116, 99, 104, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 70, 101, 116, 99, 104, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 70, 101, 116, 99, 104, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 70, 101, 116, 99, 104, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 70, 101, 116, 99, 104, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 69, 114, 114, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 67, 111, 110, 116, 101, 110, 116, 32, 109, 105, 120, 101, 100, 61, 34, 102, 97, 108, 115, 101, 34, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 120, 116, 101, 110, 115, 105, 111, 110, 32, 98, 97, 115, 101, 61, 34, 116, 110, 115, 58, 70, 101, 116, 99, 104, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 83, 116, 97, 116, 117, 115, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 68, 105, 97, 103, 110, 111, 115, 116, 105, 99, 115, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 68, 105, 97, 103, 110, 111, 115, 116, 105, 99, 73, 110, 102, 111, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 47, 120, 115, 58, 101, 120, 116, 101, 110, 115, 105, 111, 110, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 67, 111, 110, 116, 101, 110, 116, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 69, 114, 114, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 69, 114, 114, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 69, 114, 114, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 69, 114, 114, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 69, 114, 114, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 69, 114, 114, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 69, 114, 114, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 67, 111, 110, 116, 101, 110, 116, 32, 109, 105, 120, 101, 100, 61, 34, 102, 97, 108, 115, 101, 34, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 120, 116, 101, 110, 115, 105, 111, 110, 32, 98, 97, 115, 101, 61, 34, 116, 110, 115, 58, 70, 101, 116, 99, 104, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 83, 101, 113, 117, 101, 110, 99, 101, 78, 117, 109, 98, 101, 114, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 105, 110, 116, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 69, 110, 100, 79, 102, 82, 101, 115, 117, 108, 116, 115, 34, 32, 116, 121, 112, 101, 61, 34, 120, 115, 58, 98, 111, 111, 108, 101, 97, 110, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 80, 97, 114, 97, 109, 101, 116, 101, 114, 68, 101, 102, 115, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 80, 97, 114, 97, 109, 101, 116, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 47, 120, 115, 58, 101, 120, 116, 101, 110, 115, 105, 111, 110, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 67, 111, 110, 116, 101, 110, 116, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 80, 97, 114, 97, 109, 101, 116, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 78, 111, 100, 101, 80, 97, 116, 104, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 76, 105, 115, 116, 79, 102, 81, 117, 97, 108, 105, 102, 105, 101, 100, 78, 97, 109, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 83, 116, 97, 116, 117, 115, 67, 111, 100, 101, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 83, 116, 97, 116, 117, 115, 67, 111, 100, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 68, 105, 97, 103, 110, 111, 115, 116, 105, 99, 115, 34, 32, 116, 121, 112, 101, 61, 34, 117, 97, 58, 68, 105, 97, 103, 110, 111, 115, 116, 105, 99, 73, 110, 102, 111, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 80, 97, 114, 97, 109, 101, 116, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 97, 114, 97, 109, 101, 116, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 97, 114, 97, 109, 101, 116, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 80, 97, 114, 97, 109, 101, 116, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 80, 97, 114, 97, 109, 101, 116, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 80, 97, 114, 97, 109, 101, 116, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 80, 97, 114, 97, 109, 101, 116, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 32, 110, 97, 109, 101, 61, 34, 83, 111, 102, 116, 119, 97, 114, 101, 86, 101, 114, 115, 105, 111, 110, 70, 105, 108, 101, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 34, 120, 115, 58, 115, 116, 114, 105, 110, 103, 34, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 67, 117, 114, 114, 101, 110, 116, 95, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 80, 101, 110, 100, 105, 110, 103, 95, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 32, 118, 97, 108, 117, 101, 61, 34, 70, 97, 108, 108, 98, 97, 99, 107, 95, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 83, 111, 102, 116, 119, 97, 114, 101, 86, 101, 114, 115, 105, 111, 110, 70, 105, 108, 101, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 83, 111, 102, 116, 119, 97, 114, 101, 86, 101, 114, 115, 105, 111, 110, 70, 105, 108, 101, 84, 121, 112, 101, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 83, 111, 102, 116, 119, 97, 114, 101, 86, 101, 114, 115, 105, 111, 110, 70, 105, 108, 101, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 83, 111, 102, 116, 119, 97, 114, 101, 86, 101, 114, 115, 105, 111, 110, 70, 105, 108, 101, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 83, 111, 102, 116, 119, 97, 114, 101, 86, 101, 114, 115, 105, 111, 110, 70, 105, 108, 101, 84, 121, 112, 101, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 83, 111, 102, 116, 119, 97, 114, 101, 86, 101, 114, 115, 105, 111, 110, 70, 105, 108, 101, 84, 121, 112, 101, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 83, 111, 102, 116, 119, 97, 114, 101, 86, 101, 114, 115, 105, 111, 110, 70, 105, 108, 101, 84, 121, 112, 101, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 32, 32, 110, 97, 109, 101, 61, 34, 85, 112, 100, 97, 116, 101, 66, 101, 104, 97, 118, 105, 111, 114, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 32, 98, 97, 115, 101, 61, 34, 120, 115, 58, 117, 110, 115, 105, 103, 110, 101, 100, 73, 110, 116, 34, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 114, 101, 115, 116, 114, 105, 99, 116, 105, 111, 110, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 115, 105, 109, 112, 108, 101, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 85, 112, 100, 97, 116, 101, 66, 101, 104, 97, 118, 105, 111, 114, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 85, 112, 100, 97, 116, 101, 66, 101, 104, 97, 118, 105, 111, 114, 34, 32, 47, 62, 13, 10, 13, 10, 32, 32, 60, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 85, 112, 100, 97, 116, 101, 66, 101, 104, 97, 118, 105, 111, 114, 34, 62, 13, 10, 32, 32, 32, 32, 60, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 32, 32, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 85, 112, 100, 97, 116, 101, 66, 101, 104, 97, 118, 105, 111, 114, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 85, 112, 100, 97, 116, 101, 66, 101, 104, 97, 118, 105, 111, 114, 34, 32, 109, 105, 110, 79, 99, 99, 117, 114, 115, 61, 34, 48, 34, 32, 109, 97, 120, 79, 99, 99, 117, 114, 115, 61, 34, 117, 110, 98, 111, 117, 110, 100, 101, 100, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 47, 120, 115, 58, 115, 101, 113, 117, 101, 110, 99, 101, 62, 13, 10, 32, 32, 60, 47, 120, 115, 58, 99, 111, 109, 112, 108, 101, 120, 84, 121, 112, 101, 62, 13, 10, 32, 32, 60, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 32, 110, 97, 109, 101, 61, 34, 76, 105, 115, 116, 79, 102, 85, 112, 100, 97, 116, 101, 66, 101, 104, 97, 118, 105, 111, 114, 34, 32, 116, 121, 112, 101, 61, 34, 116, 110, 115, 58, 76, 105, 115, 116, 79, 102, 85, 112, 100, 97, 116, 101, 66, 101, 104, 97, 118, 105, 111, 114, 34, 32, 110, 105, 108, 108, 97, 98, 108, 101, 61, 34, 116, 114, 117, 101, 34, 62, 60, 47, 120, 115, 58, 101, 108, 101, 109, 101, 110, 116, 62, 13, 10, 13, 10, 60, 47, 120, 115, 58, 115, 99, 104, 101, 109, 97, 62};



static UA_StatusCode function_UA_Custom_Nodeset_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
UA_ByteString *variablenode_ns_1_i_6423_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_1_i_6423_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_1_i_6423_variant_DataContents);
variablenode_ns_1_i_6423_variant_DataContents->length = 5771;
variablenode_ns_1_i_6423_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_1_i_6423_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6423_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Opc.Ua.Di");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6423LU),
UA_NODEID_NUMERIC(ns[0], 92LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Opc.Ua.Di"),
UA_NODEID_NUMERIC(ns[0], 72LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_1_i_6423_variant_DataContents->data = NULL;
variablenode_ns_1_i_6423_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_1_i_6423_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6423LU)
);
}

/* ParameterResultDataType - ns=1;i=6548 */

static UA_StatusCode function_UA_Custom_Nodeset_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_6548_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_6548_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_6548_variant_DataContents);
*variablenode_ns_1_i_6548_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='ParameterResultDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6548_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterResultDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6548LU),
UA_NODEID_NUMERIC(ns[1], 6423LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterResultDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6548_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6548LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 6538LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6548LU)
);
}

/* FetchResultDataType - ns=1;i=6539 */

static UA_StatusCode function_UA_Custom_Nodeset_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_6539_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_6539_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_6539_variant_DataContents);
*variablenode_ns_1_i_6539_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='FetchResultDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6539_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FetchResultDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6539LU),
UA_NODEID_NUMERIC(ns[1], 6423LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FetchResultDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6539_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6539LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 6535LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6539LU)
);
}

/* NamespaceUri - ns=1;i=6425 */

static UA_StatusCode function_UA_Custom_Nodeset_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_6425_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_6425_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_6425_variant_DataContents);
*variablenode_ns_1_i_6425_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/DI/Types.xsd");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6425_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6425LU),
UA_NODEID_NUMERIC(ns[1], 6423LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6425_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6425LU)
);
}

/* TransferResultDataDataType - ns=1;i=15906 */

static UA_StatusCode function_UA_Custom_Nodeset_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_15906_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_15906_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_15906_variant_DataContents);
*variablenode_ns_1_i_15906_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='TransferResultDataDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_15906_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransferResultDataDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15906LU),
UA_NODEID_NUMERIC(ns[1], 6423LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TransferResultDataDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_15906_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15906LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15901LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15906LU)
);
}

/* TransferResultErrorDataType - ns=1;i=15903 */

static UA_StatusCode function_UA_Custom_Nodeset_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_15903_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_15903_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_15903_variant_DataContents);
*variablenode_ns_1_i_15903_variant_DataContents = UA_STRING_ALLOC("//xs:element[@name='TransferResultErrorDataType']");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_15903_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransferResultErrorDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15903LU),
UA_NODEID_NUMERIC(ns[1], 6423LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TransferResultErrorDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_15903_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15903LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15900LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15903LU)
);
}

/* Deprecated - ns=1;i=15902 */

static UA_StatusCode function_UA_Custom_Nodeset_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_1_i_15902_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_1_i_15902_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_1_i_15902_variant_DataContents);
*variablenode_ns_1_i_15902_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_15902_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Deprecated");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15902LU),
UA_NODEID_NUMERIC(ns[1], 6423LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Deprecated"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_15902_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15902LU)
);
}

/* Opc.Ua.Di - ns=1;i=6435 */
static const UA_Byte variablenode_ns_1_i_6435_variant_DataContents_byteArray[2713] = {60, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 111, 112, 99, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 66, 105, 110, 97, 114, 121, 83, 99, 104, 101, 109, 97, 47, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 120, 115, 105, 61, 34, 104, 116, 116, 112, 58, 47, 47, 119, 119, 119, 46, 119, 51, 46, 111, 114, 103, 47, 50, 48, 48, 49, 47, 88, 77, 76, 83, 99, 104, 101, 109, 97, 45, 105, 110, 115, 116, 97, 110, 99, 101, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 117, 97, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 34, 13, 10, 32, 32, 120, 109, 108, 110, 115, 58, 116, 110, 115, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 68, 73, 47, 34, 13, 10, 32, 32, 68, 101, 102, 97, 117, 108, 116, 66, 121, 116, 101, 79, 114, 100, 101, 114, 61, 34, 76, 105, 116, 116, 108, 101, 69, 110, 100, 105, 97, 110, 34, 13, 10, 32, 32, 84, 97, 114, 103, 101, 116, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 68, 73, 47, 34, 13, 10, 62, 13, 10, 32, 32, 60, 111, 112, 99, 58, 73, 109, 112, 111, 114, 116, 32, 78, 97, 109, 101, 115, 112, 97, 99, 101, 61, 34, 104, 116, 116, 112, 58, 47, 47, 111, 112, 99, 102, 111, 117, 110, 100, 97, 116, 105, 111, 110, 46, 111, 114, 103, 47, 85, 65, 47, 34, 32, 76, 111, 99, 97, 116, 105, 111, 110, 61, 34, 79, 112, 99, 46, 85, 97, 46, 66, 105, 110, 97, 114, 121, 83, 99, 104, 101, 109, 97, 46, 98, 115, 100, 34, 47, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 68, 101, 118, 105, 99, 101, 72, 101, 97, 108, 116, 104, 69, 110, 117, 109, 101, 114, 97, 116, 105, 111, 110, 34, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 34, 51, 50, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 78, 79, 82, 77, 65, 76, 34, 32, 86, 97, 108, 117, 101, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 70, 65, 73, 76, 85, 82, 69, 34, 32, 86, 97, 108, 117, 101, 61, 34, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 67, 72, 69, 67, 75, 95, 70, 85, 78, 67, 84, 73, 79, 78, 34, 32, 86, 97, 108, 117, 101, 61, 34, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 79, 70, 70, 95, 83, 80, 69, 67, 34, 32, 86, 97, 108, 117, 101, 61, 34, 51, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 77, 65, 73, 78, 84, 69, 78, 65, 78, 67, 69, 95, 82, 69, 81, 85, 73, 82, 69, 68, 34, 32, 86, 97, 108, 117, 101, 61, 34, 52, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 70, 101, 116, 99, 104, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 69, 114, 114, 111, 114, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 116, 110, 115, 58, 70, 101, 116, 99, 104, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 83, 116, 97, 116, 117, 115, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 68, 105, 97, 103, 110, 111, 115, 116, 105, 99, 115, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 68, 105, 97, 103, 110, 111, 115, 116, 105, 99, 73, 110, 102, 111, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 84, 114, 97, 110, 115, 102, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 116, 110, 115, 58, 70, 101, 116, 99, 104, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 83, 101, 113, 117, 101, 110, 99, 101, 78, 117, 109, 98, 101, 114, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 69, 110, 100, 79, 102, 82, 101, 115, 117, 108, 116, 115, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 66, 111, 111, 108, 101, 97, 110, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 78, 111, 79, 102, 80, 97, 114, 97, 109, 101, 116, 101, 114, 68, 101, 102, 115, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 80, 97, 114, 97, 109, 101, 116, 101, 114, 68, 101, 102, 115, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 116, 110, 115, 58, 80, 97, 114, 97, 109, 101, 116, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 76, 101, 110, 103, 116, 104, 70, 105, 101, 108, 100, 61, 34, 78, 111, 79, 102, 80, 97, 114, 97, 109, 101, 116, 101, 114, 68, 101, 102, 115, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 80, 97, 114, 97, 109, 101, 116, 101, 114, 82, 101, 115, 117, 108, 116, 68, 97, 116, 97, 84, 121, 112, 101, 34, 32, 66, 97, 115, 101, 84, 121, 112, 101, 61, 34, 117, 97, 58, 69, 120, 116, 101, 110, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 78, 111, 79, 102, 78, 111, 100, 101, 80, 97, 116, 104, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 111, 112, 99, 58, 73, 110, 116, 51, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 78, 111, 100, 101, 80, 97, 116, 104, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 81, 117, 97, 108, 105, 102, 105, 101, 100, 78, 97, 109, 101, 34, 32, 76, 101, 110, 103, 116, 104, 70, 105, 101, 108, 100, 61, 34, 78, 111, 79, 102, 78, 111, 100, 101, 80, 97, 116, 104, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 83, 116, 97, 116, 117, 115, 67, 111, 100, 101, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 83, 116, 97, 116, 117, 115, 67, 111, 100, 101, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 70, 105, 101, 108, 100, 32, 78, 97, 109, 101, 61, 34, 68, 105, 97, 103, 110, 111, 115, 116, 105, 99, 115, 34, 32, 84, 121, 112, 101, 78, 97, 109, 101, 61, 34, 117, 97, 58, 68, 105, 97, 103, 110, 111, 115, 116, 105, 99, 73, 110, 102, 111, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 83, 116, 114, 117, 99, 116, 117, 114, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 83, 111, 102, 116, 119, 97, 114, 101, 86, 101, 114, 115, 105, 111, 110, 70, 105, 108, 101, 84, 121, 112, 101, 34, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 34, 51, 50, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 67, 117, 114, 114, 101, 110, 116, 34, 32, 86, 97, 108, 117, 101, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 80, 101, 110, 100, 105, 110, 103, 34, 32, 86, 97, 108, 117, 101, 61, 34, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 70, 97, 108, 108, 98, 97, 99, 107, 34, 32, 86, 97, 108, 117, 101, 61, 34, 50, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 32, 78, 97, 109, 101, 61, 34, 85, 112, 100, 97, 116, 101, 66, 101, 104, 97, 118, 105, 111, 114, 34, 32, 76, 101, 110, 103, 116, 104, 73, 110, 66, 105, 116, 115, 61, 34, 51, 50, 34, 32, 73, 115, 79, 112, 116, 105, 111, 110, 83, 101, 116, 61, 34, 116, 114, 117, 101, 34, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 78, 111, 110, 101, 34, 32, 86, 97, 108, 117, 101, 61, 34, 48, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 75, 101, 101, 112, 115, 80, 97, 114, 97, 109, 101, 116, 101, 114, 115, 34, 32, 86, 97, 108, 117, 101, 61, 34, 49, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 87, 105, 108, 108, 68, 105, 115, 99, 111, 110, 110, 101, 99, 116, 34, 32, 86, 97, 108, 117, 101, 61, 34, 50, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 82, 101, 113, 117, 105, 114, 101, 115, 80, 111, 119, 101, 114, 67, 121, 99, 108, 101, 34, 32, 86, 97, 108, 117, 101, 61, 34, 52, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 87, 105, 108, 108, 82, 101, 98, 111, 111, 116, 34, 32, 86, 97, 108, 117, 101, 61, 34, 56, 34, 32, 47, 62, 13, 10, 32, 32, 32, 32, 60, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 86, 97, 108, 117, 101, 32, 78, 97, 109, 101, 61, 34, 78, 101, 101, 100, 115, 80, 114, 101, 112, 97, 114, 97, 116, 105, 111, 110, 34, 32, 86, 97, 108, 117, 101, 61, 34, 49, 54, 34, 32, 47, 62, 13, 10, 32, 32, 60, 47, 111, 112, 99, 58, 69, 110, 117, 109, 101, 114, 97, 116, 101, 100, 84, 121, 112, 101, 62, 13, 10, 13, 10, 60, 47, 111, 112, 99, 58, 84, 121, 112, 101, 68, 105, 99, 116, 105, 111, 110, 97, 114, 121, 62};



static UA_StatusCode function_UA_Custom_Nodeset_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
UA_ByteString *variablenode_ns_1_i_6435_variant_DataContents =  UA_ByteString_new();
if (!variablenode_ns_1_i_6435_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_ByteString_init(variablenode_ns_1_i_6435_variant_DataContents);
variablenode_ns_1_i_6435_variant_DataContents->length = 2713;
variablenode_ns_1_i_6435_variant_DataContents->data = (UA_Byte *)(void*)(uintptr_t)variablenode_ns_1_i_6435_variant_DataContents_byteArray;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6435_variant_DataContents, &UA_TYPES[UA_TYPES_BYTESTRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Opc.Ua.Di");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6435LU),
UA_NODEID_NUMERIC(ns[0], 93LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Opc.Ua.Di"),
UA_NODEID_NUMERIC(ns[0], 72LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
variablenode_ns_1_i_6435_variant_DataContents->data = NULL;
variablenode_ns_1_i_6435_variant_DataContents->length = 0;
UA_ByteString_delete(variablenode_ns_1_i_6435_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6435LU)
);
}

/* ParameterResultDataType - ns=1;i=6564 */

static UA_StatusCode function_UA_Custom_Nodeset_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_6564_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_6564_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_6564_variant_DataContents);
*variablenode_ns_1_i_6564_variant_DataContents = UA_STRING_ALLOC("ParameterResultDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6564_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterResultDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6564LU),
UA_NODEID_NUMERIC(ns[1], 6435LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterResultDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6564_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6564LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 6554LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6564LU)
);
}

/* FetchResultDataType - ns=1;i=6555 */

static UA_StatusCode function_UA_Custom_Nodeset_167_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_6555_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_6555_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_6555_variant_DataContents);
*variablenode_ns_1_i_6555_variant_DataContents = UA_STRING_ALLOC("FetchResultDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6555_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "FetchResultDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6555LU),
UA_NODEID_NUMERIC(ns[1], 6435LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FetchResultDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6555_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6555LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 6551LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6555LU)
);
}

/* NamespaceUri - ns=1;i=6437 */

static UA_StatusCode function_UA_Custom_Nodeset_168_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_6437_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_6437_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_6437_variant_DataContents);
*variablenode_ns_1_i_6437_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/DI/");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6437_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6437LU),
UA_NODEID_NUMERIC(ns[1], 6435LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6437_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6437LU)
);
}

/* TransferResultDataDataType - ns=1;i=15897 */

static UA_StatusCode function_UA_Custom_Nodeset_169_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_15897_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_15897_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_15897_variant_DataContents);
*variablenode_ns_1_i_15897_variant_DataContents = UA_STRING_ALLOC("TransferResultDataDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_15897_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransferResultDataDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15897LU),
UA_NODEID_NUMERIC(ns[1], 6435LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TransferResultDataDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_15897_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15897LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15892LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15897LU)
);
}

/* TransferResultErrorDataType - ns=1;i=15894 */

static UA_StatusCode function_UA_Custom_Nodeset_170_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_15894_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_15894_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_15894_variant_DataContents);
*variablenode_ns_1_i_15894_variant_DataContents = UA_STRING_ALLOC("TransferResultErrorDataType");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_15894_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransferResultErrorDataType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15894LU),
UA_NODEID_NUMERIC(ns[1], 6435LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TransferResultErrorDataType"),
UA_NODEID_NUMERIC(ns[0], 69LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_15894_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15894LU), UA_NODEID_NUMERIC(ns[0], 39LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15891LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15894LU)
);
}

/* Deprecated - ns=1;i=15893 */

static UA_StatusCode function_UA_Custom_Nodeset_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_1_i_15893_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_1_i_15893_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_1_i_15893_variant_DataContents);
*variablenode_ns_1_i_15893_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_15893_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Deprecated");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15893LU),
UA_NODEID_NUMERIC(ns[1], 6435LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Deprecated"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_15893_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15893LU)
);
}

/* ConfirmationStateMachineType - ns=1;i=307 */

static UA_StatusCode function_UA_Custom_Nodeset_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ConfirmationStateMachineType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 307LU),
UA_NODEID_NUMERIC(ns[0], 2771LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "ConfirmationStateMachineType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 307LU)
);
}

/* WaitingForConfirmToNotWaitingForConfirm - ns=1;i=329 */

static UA_StatusCode function_UA_Custom_Nodeset_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "WaitingForConfirmToNotWaitingForConfirm");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 329LU),
UA_NODEID_NUMERIC(ns[1], 307LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WaitingForConfirmToNotWaitingForConfirm"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 329LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2311LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 329LU)
);
}

/* TransitionNumber - ns=1;i=330 */

static UA_StatusCode function_UA_Custom_Nodeset_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_330_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_330_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_330_variant_DataContents);
*variablenode_ns_1_i_330_variant_DataContents = (UA_UInt32) 21;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_330_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 330LU),
UA_NODEID_NUMERIC(ns[1], 329LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_330_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 330LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 330LU)
);
}

/* NotWaitingForConfirmToWaitingForConfirm - ns=1;i=327 */

static UA_StatusCode function_UA_Custom_Nodeset_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NotWaitingForConfirmToWaitingForConfirm");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 327LU),
UA_NODEID_NUMERIC(ns[1], 307LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "NotWaitingForConfirmToWaitingForConfirm"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 327LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2311LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 327LU)
);
}

/* TransitionNumber - ns=1;i=328 */

static UA_StatusCode function_UA_Custom_Nodeset_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_328_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_328_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_328_variant_DataContents);
*variablenode_ns_1_i_328_variant_DataContents = (UA_UInt32) 12;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_328_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 328LU),
UA_NODEID_NUMERIC(ns[1], 327LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_328_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 328LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 328LU)
);
}

/* WaitingForConfirm - ns=1;i=325 */

static UA_StatusCode function_UA_Custom_Nodeset_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "WaitingForConfirm");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 325LU),
UA_NODEID_NUMERIC(ns[1], 307LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WaitingForConfirm"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 325LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 327LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 325LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 329LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 325LU)
);
}

/* StateNumber - ns=1;i=326 */

static UA_StatusCode function_UA_Custom_Nodeset_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_326_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_326_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_326_variant_DataContents);
*variablenode_ns_1_i_326_variant_DataContents = (UA_UInt32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_326_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 326LU),
UA_NODEID_NUMERIC(ns[1], 325LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_326_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 326LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 326LU)
);
}

/* NotWaitingForConfirm - ns=1;i=323 */

static UA_StatusCode function_UA_Custom_Nodeset_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NotWaitingForConfirm");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 323LU),
UA_NODEID_NUMERIC(ns[1], 307LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "NotWaitingForConfirm"),
UA_NODEID_NUMERIC(ns[0], 2309LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 323LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 329LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 323LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 327LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 323LU)
);
}

/* StateNumber - ns=1;i=324 */

static UA_StatusCode function_UA_Custom_Nodeset_180_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_324_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_324_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_324_variant_DataContents);
*variablenode_ns_1_i_324_variant_DataContents = (UA_UInt32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_324_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 324LU),
UA_NODEID_NUMERIC(ns[1], 323LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_324_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 324LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 324LU)
);
}

/* ConfirmationTimeout - ns=1;i=322 */

static UA_StatusCode function_UA_Custom_Nodeset_181_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ConfirmationTimeout");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 322LU),
UA_NODEID_NUMERIC(ns[1], 307LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ConfirmationTimeout"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 322LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_181_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 322LU)
);
}

/* Confirm - ns=1;i=321 */

static UA_StatusCode function_UA_Custom_Nodeset_182_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Confirm");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 321LU),
UA_NODEID_NUMERIC(ns[1], 307LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Confirm"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 321LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_182_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 321LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* PowerCycleStateMachineType - ns=1;i=285 */

static UA_StatusCode function_UA_Custom_Nodeset_183_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerCycleStateMachineType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 285LU),
UA_NODEID_NUMERIC(ns[0], 2771LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "PowerCycleStateMachineType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_183_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 285LU)
);
}

/* WaitingForPowerCycleToNotWaitingForPowerCycle - ns=1;i=305 */

static UA_StatusCode function_UA_Custom_Nodeset_184_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "WaitingForPowerCycleToNotWaitingForPowerCycle");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 305LU),
UA_NODEID_NUMERIC(ns[1], 285LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WaitingForPowerCycleToNotWaitingForPowerCycle"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 305LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2311LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 305LU)
);
}

/* TransitionNumber - ns=1;i=306 */

static UA_StatusCode function_UA_Custom_Nodeset_185_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_306_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_306_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_306_variant_DataContents);
*variablenode_ns_1_i_306_variant_DataContents = (UA_UInt32) 21;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_306_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 306LU),
UA_NODEID_NUMERIC(ns[1], 305LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_306_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 306LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_185_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 306LU)
);
}

/* NotWaitingForPowerCycleToWaitingForPowerCycle - ns=1;i=303 */

static UA_StatusCode function_UA_Custom_Nodeset_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NotWaitingForPowerCycleToWaitingForPowerCycle");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 303LU),
UA_NODEID_NUMERIC(ns[1], 285LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "NotWaitingForPowerCycleToWaitingForPowerCycle"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 303LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2311LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 303LU)
);
}

/* TransitionNumber - ns=1;i=304 */

static UA_StatusCode function_UA_Custom_Nodeset_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_304_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_304_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_304_variant_DataContents);
*variablenode_ns_1_i_304_variant_DataContents = (UA_UInt32) 12;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_304_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 304LU),
UA_NODEID_NUMERIC(ns[1], 303LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_304_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 304LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 304LU)
);
}

/* WaitingForPowerCycle - ns=1;i=301 */

static UA_StatusCode function_UA_Custom_Nodeset_188_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "WaitingForPowerCycle");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 301LU),
UA_NODEID_NUMERIC(ns[1], 285LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WaitingForPowerCycle"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 301LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 305LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 301LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 303LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_188_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 301LU)
);
}

/* StateNumber - ns=1;i=302 */

static UA_StatusCode function_UA_Custom_Nodeset_189_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_302_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_302_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_302_variant_DataContents);
*variablenode_ns_1_i_302_variant_DataContents = (UA_UInt32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_302_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 302LU),
UA_NODEID_NUMERIC(ns[1], 301LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_302_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 302LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 302LU)
);
}

/* NotWaitingForPowerCycle - ns=1;i=299 */

static UA_StatusCode function_UA_Custom_Nodeset_190_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NotWaitingForPowerCycle");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 299LU),
UA_NODEID_NUMERIC(ns[1], 285LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "NotWaitingForPowerCycle"),
UA_NODEID_NUMERIC(ns[0], 2309LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 299LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 305LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 299LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 303LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_190_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 299LU)
);
}

/* StateNumber - ns=1;i=300 */

static UA_StatusCode function_UA_Custom_Nodeset_191_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_300_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_300_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_300_variant_DataContents);
*variablenode_ns_1_i_300_variant_DataContents = (UA_UInt32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_300_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 300LU),
UA_NODEID_NUMERIC(ns[1], 299LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_300_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 300LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_191_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 300LU)
);
}

/* InstallationStateMachineType - ns=1;i=249 */

static UA_StatusCode function_UA_Custom_Nodeset_192_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InstallationStateMachineType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 249LU),
UA_NODEID_NUMERIC(ns[0], 2771LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "InstallationStateMachineType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 249LU)
);
}

/* ErrorToIdle - ns=1;i=283 */

static UA_StatusCode function_UA_Custom_Nodeset_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ErrorToIdle");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 283LU),
UA_NODEID_NUMERIC(ns[1], 249LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ErrorToIdle"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 283LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2311LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 283LU)
);
}

/* TransitionNumber - ns=1;i=284 */

static UA_StatusCode function_UA_Custom_Nodeset_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_284_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_284_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_284_variant_DataContents);
*variablenode_ns_1_i_284_variant_DataContents = (UA_UInt32) 31;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_284_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 284LU),
UA_NODEID_NUMERIC(ns[1], 283LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_284_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 284LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 284LU)
);
}

/* InstallingToError - ns=1;i=281 */

static UA_StatusCode function_UA_Custom_Nodeset_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InstallingToError");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 281LU),
UA_NODEID_NUMERIC(ns[1], 249LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "InstallingToError"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 281LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2311LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 281LU)
);
}

/* TransitionNumber - ns=1;i=282 */

static UA_StatusCode function_UA_Custom_Nodeset_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_282_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_282_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_282_variant_DataContents);
*variablenode_ns_1_i_282_variant_DataContents = (UA_UInt32) 23;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_282_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 282LU),
UA_NODEID_NUMERIC(ns[1], 281LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_282_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 282LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 282LU)
);
}

/* InstallingToIdle - ns=1;i=279 */

static UA_StatusCode function_UA_Custom_Nodeset_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "InstallingToIdle");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 279LU),
UA_NODEID_NUMERIC(ns[1], 249LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "InstallingToIdle"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 279LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2311LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 279LU)
);
}

/* TransitionNumber - ns=1;i=280 */

static UA_StatusCode function_UA_Custom_Nodeset_198_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_280_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_280_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_280_variant_DataContents);
*variablenode_ns_1_i_280_variant_DataContents = (UA_UInt32) 21;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_280_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 280LU),
UA_NODEID_NUMERIC(ns[1], 279LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_280_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 280LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 280LU)
);
}

/* IdleToInstalling - ns=1;i=277 */

static UA_StatusCode function_UA_Custom_Nodeset_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "IdleToInstalling");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 277LU),
UA_NODEID_NUMERIC(ns[1], 249LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "IdleToInstalling"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 277LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2311LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 277LU)
);
}

/* TransitionNumber - ns=1;i=387 */

static UA_StatusCode function_UA_Custom_Nodeset_200_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_387_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_387_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_387_variant_DataContents);
*variablenode_ns_1_i_387_variant_DataContents = (UA_UInt32) 12;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_387_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 387LU),
UA_NODEID_NUMERIC(ns[1], 277LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_387_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 387LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 387LU)
);
}

/* Error - ns=1;i=275 */

static UA_StatusCode function_UA_Custom_Nodeset_201_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Error");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 275LU),
UA_NODEID_NUMERIC(ns[1], 249LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Error"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 275LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 283LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 275LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 281LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 275LU)
);
}

/* StateNumber - ns=1;i=276 */

static UA_StatusCode function_UA_Custom_Nodeset_202_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_276_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_276_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_276_variant_DataContents);
*variablenode_ns_1_i_276_variant_DataContents = (UA_UInt32) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_276_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 276LU),
UA_NODEID_NUMERIC(ns[1], 275LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_276_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 276LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 276LU)
);
}

/* Installing - ns=1;i=273 */

static UA_StatusCode function_UA_Custom_Nodeset_203_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Installing");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 273LU),
UA_NODEID_NUMERIC(ns[1], 249LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Installing"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 273LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 279LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 273LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 281LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 273LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 277LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 273LU)
);
}

/* StateNumber - ns=1;i=274 */

static UA_StatusCode function_UA_Custom_Nodeset_204_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_274_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_274_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_274_variant_DataContents);
*variablenode_ns_1_i_274_variant_DataContents = (UA_UInt32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_274_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 274LU),
UA_NODEID_NUMERIC(ns[1], 273LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_274_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 274LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 274LU)
);
}

/* Idle - ns=1;i=271 */

static UA_StatusCode function_UA_Custom_Nodeset_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Idle");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 271LU),
UA_NODEID_NUMERIC(ns[1], 249LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Idle"),
UA_NODEID_NUMERIC(ns[0], 2309LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 271LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 283LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 271LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 277LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 271LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 279LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 271LU)
);
}

/* StateNumber - ns=1;i=272 */

static UA_StatusCode function_UA_Custom_Nodeset_206_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_272_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_272_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_272_variant_DataContents);
*variablenode_ns_1_i_272_variant_DataContents = (UA_UInt32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_272_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 272LU),
UA_NODEID_NUMERIC(ns[1], 271LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_272_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 272LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 272LU)
);
}

/* Resume - ns=1;i=270 */

static UA_StatusCode function_UA_Custom_Nodeset_207_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Resume");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 270LU),
UA_NODEID_NUMERIC(ns[1], 249LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Resume"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 270LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_207_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 270LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InstallFiles - ns=1;i=268 */

static UA_StatusCode function_UA_Custom_Nodeset_208_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "InstallFiles");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 268LU),
UA_NODEID_NUMERIC(ns[1], 249LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "InstallFiles"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 268LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_208_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 268LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=269 */

static UA_StatusCode function_UA_Custom_Nodeset_209_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_269_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_269_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_269_variant_DataContents[0].name = UA_STRING("NodeIds");
variablenode_ns_1_i_269_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_269_variant_DataContents[0].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_269_variant_DataContents0_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_269_variant_DataContents0_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_269_variant_DataContents0_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_269_variant_DataContents[0].arrayDimensionsSize = 1;
variablenode_ns_1_i_269_variant_DataContents[0].arrayDimensions = variablenode_ns_1_i_269_variant_DataContents0_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_269_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 269LU),
UA_NODEID_NUMERIC(ns[1], 268LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 269LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_209_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 269LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InstallSoftwarePackage - ns=1;i=265 */

static UA_StatusCode function_UA_Custom_Nodeset_210_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "InstallSoftwarePackage");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 265LU),
UA_NODEID_NUMERIC(ns[1], 249LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "InstallSoftwarePackage"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 265LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_210_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 265LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=266 */

static UA_StatusCode function_UA_Custom_Nodeset_211_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 4;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_266_variant_DataContents[4];

UA_init(&variablenode_ns_1_i_266_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_266_variant_DataContents[0].name = UA_STRING("ManufacturerUri");
variablenode_ns_1_i_266_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_266_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_266_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_266_variant_DataContents[1].name = UA_STRING("SoftwareRevision");
variablenode_ns_1_i_266_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_266_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_266_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_266_variant_DataContents[2].name = UA_STRING("PatchIdentifiers");
variablenode_ns_1_i_266_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_266_variant_DataContents[2].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_266_variant_DataContents2_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_266_variant_DataContents2_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_266_variant_DataContents2_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_266_variant_DataContents[2].arrayDimensionsSize = 1;
variablenode_ns_1_i_266_variant_DataContents[2].arrayDimensions = variablenode_ns_1_i_266_variant_DataContents2_arrayDimensions;

UA_init(&variablenode_ns_1_i_266_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_266_variant_DataContents[3].name = UA_STRING("Hash");
variablenode_ns_1_i_266_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
variablenode_ns_1_i_266_variant_DataContents[3].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_266_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 266LU),
UA_NODEID_NUMERIC(ns[1], 265LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);




retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 266LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_211_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 266LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InstallationDelay - ns=1;i=264 */

static UA_StatusCode function_UA_Custom_Nodeset_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "InstallationDelay");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 264LU),
UA_NODEID_NUMERIC(ns[1], 249LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "InstallationDelay"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 264LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 264LU)
);
}

/* PercentComplete - ns=1;i=263 */

static UA_StatusCode function_UA_Custom_Nodeset_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PercentComplete");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 263LU),
UA_NODEID_NUMERIC(ns[1], 249LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PercentComplete"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 263LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 263LU)
);
}

/* PrepareForUpdateStateMachineType - ns=1;i=213 */

static UA_StatusCode function_UA_Custom_Nodeset_214_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PrepareForUpdateStateMachineType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 213LU),
UA_NODEID_NUMERIC(ns[0], 2771LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "PrepareForUpdateStateMachineType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 213LU)
);
}

/* ResumingToIdle - ns=1;i=247 */

static UA_StatusCode function_UA_Custom_Nodeset_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ResumingToIdle");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 247LU),
UA_NODEID_NUMERIC(ns[1], 213LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ResumingToIdle"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 247LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2311LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 247LU)
);
}

/* TransitionNumber - ns=1;i=248 */

static UA_StatusCode function_UA_Custom_Nodeset_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_248_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_248_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_248_variant_DataContents);
*variablenode_ns_1_i_248_variant_DataContents = (UA_UInt32) 41;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_248_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 248LU),
UA_NODEID_NUMERIC(ns[1], 247LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_248_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 248LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 248LU)
);
}

/* PreparedForUpdateToResuming - ns=1;i=245 */

static UA_StatusCode function_UA_Custom_Nodeset_217_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PreparedForUpdateToResuming");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 245LU),
UA_NODEID_NUMERIC(ns[1], 213LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PreparedForUpdateToResuming"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 245LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2311LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_217_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 245LU)
);
}

/* TransitionNumber - ns=1;i=246 */

static UA_StatusCode function_UA_Custom_Nodeset_218_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_246_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_246_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_246_variant_DataContents);
*variablenode_ns_1_i_246_variant_DataContents = (UA_UInt32) 34;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_246_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 246LU),
UA_NODEID_NUMERIC(ns[1], 245LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_246_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 246LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 246LU)
);
}

/* PreparingToPreparedForUpdate - ns=1;i=243 */

static UA_StatusCode function_UA_Custom_Nodeset_219_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PreparingToPreparedForUpdate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 243LU),
UA_NODEID_NUMERIC(ns[1], 213LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PreparingToPreparedForUpdate"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 243LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2311LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_219_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 243LU)
);
}

/* TransitionNumber - ns=1;i=244 */

static UA_StatusCode function_UA_Custom_Nodeset_220_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_244_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_244_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_244_variant_DataContents);
*variablenode_ns_1_i_244_variant_DataContents = (UA_UInt32) 23;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_244_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 244LU),
UA_NODEID_NUMERIC(ns[1], 243LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_244_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 244LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 244LU)
);
}

/* PreparingToIdle - ns=1;i=241 */

static UA_StatusCode function_UA_Custom_Nodeset_221_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PreparingToIdle");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 241LU),
UA_NODEID_NUMERIC(ns[1], 213LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PreparingToIdle"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 241LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2311LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 241LU)
);
}

/* TransitionNumber - ns=1;i=242 */

static UA_StatusCode function_UA_Custom_Nodeset_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_242_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_242_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_242_variant_DataContents);
*variablenode_ns_1_i_242_variant_DataContents = (UA_UInt32) 21;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_242_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 242LU),
UA_NODEID_NUMERIC(ns[1], 241LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_242_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 242LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 242LU)
);
}

/* IdleToPreparing - ns=1;i=239 */

static UA_StatusCode function_UA_Custom_Nodeset_223_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "IdleToPreparing");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 239LU),
UA_NODEID_NUMERIC(ns[1], 213LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "IdleToPreparing"),
UA_NODEID_NUMERIC(ns[0], 2310LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 239LU), UA_NODEID_NUMERIC(ns[0], 54LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 2311LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 239LU)
);
}

/* TransitionNumber - ns=1;i=240 */

static UA_StatusCode function_UA_Custom_Nodeset_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_240_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_240_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_240_variant_DataContents);
*variablenode_ns_1_i_240_variant_DataContents = (UA_UInt32) 12;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_240_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "TransitionNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 240LU),
UA_NODEID_NUMERIC(ns[1], 239LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "TransitionNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_240_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 240LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 240LU)
);
}

/* Resuming - ns=1;i=237 */

static UA_StatusCode function_UA_Custom_Nodeset_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Resuming");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 237LU),
UA_NODEID_NUMERIC(ns[1], 213LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Resuming"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 237LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 247LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 237LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 245LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 237LU)
);
}

/* StateNumber - ns=1;i=238 */

static UA_StatusCode function_UA_Custom_Nodeset_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_238_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_238_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_238_variant_DataContents);
*variablenode_ns_1_i_238_variant_DataContents = (UA_UInt32) 4;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_238_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 238LU),
UA_NODEID_NUMERIC(ns[1], 237LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_238_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 238LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 238LU)
);
}

/* PreparedForUpdate - ns=1;i=235 */

static UA_StatusCode function_UA_Custom_Nodeset_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PreparedForUpdate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 235LU),
UA_NODEID_NUMERIC(ns[1], 213LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PreparedForUpdate"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 235LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 243LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 235LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 245LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 235LU)
);
}

/* StateNumber - ns=1;i=236 */

static UA_StatusCode function_UA_Custom_Nodeset_228_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_236_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_236_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_236_variant_DataContents);
*variablenode_ns_1_i_236_variant_DataContents = (UA_UInt32) 3;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_236_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 236LU),
UA_NODEID_NUMERIC(ns[1], 235LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_236_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 236LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 236LU)
);
}

/* Preparing - ns=1;i=233 */

static UA_StatusCode function_UA_Custom_Nodeset_229_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Preparing");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 233LU),
UA_NODEID_NUMERIC(ns[1], 213LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Preparing"),
UA_NODEID_NUMERIC(ns[0], 2307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 233LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 241LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 233LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 239LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 233LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 243LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_229_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 233LU)
);
}

/* StateNumber - ns=1;i=234 */

static UA_StatusCode function_UA_Custom_Nodeset_230_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_234_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_234_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_234_variant_DataContents);
*variablenode_ns_1_i_234_variant_DataContents = (UA_UInt32) 2;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_234_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 234LU),
UA_NODEID_NUMERIC(ns[1], 233LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_234_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 234LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_230_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 234LU)
);
}

/* Idle - ns=1;i=231 */

static UA_StatusCode function_UA_Custom_Nodeset_231_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Idle");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 231LU),
UA_NODEID_NUMERIC(ns[1], 213LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Idle"),
UA_NODEID_NUMERIC(ns[0], 2309LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 231LU), UA_NODEID_NUMERIC(ns[0], 51LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 239LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 231LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 247LU), false);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 231LU), UA_NODEID_NUMERIC(ns[0], 52LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 241LU), false);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 231LU)
);
}

/* StateNumber - ns=1;i=232 */

static UA_StatusCode function_UA_Custom_Nodeset_232_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
UA_UInt32 *variablenode_ns_1_i_232_variant_DataContents =  UA_UInt32_new();
if (!variablenode_ns_1_i_232_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_UInt32_init(variablenode_ns_1_i_232_variant_DataContents);
*variablenode_ns_1_i_232_variant_DataContents = (UA_UInt32) 1;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_232_variant_DataContents, &UA_TYPES[UA_TYPES_UINT32]);
attr.displayName = UA_LOCALIZEDTEXT("", "StateNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 232LU),
UA_NODEID_NUMERIC(ns[1], 231LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StateNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_UInt32_delete(variablenode_ns_1_i_232_variant_DataContents);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 232LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 232LU)
);
}

/* Resume - ns=1;i=230 */

static UA_StatusCode function_UA_Custom_Nodeset_233_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Resume");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 230LU),
UA_NODEID_NUMERIC(ns[1], 213LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Resume"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 230LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_233_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 230LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Abort - ns=1;i=229 */

static UA_StatusCode function_UA_Custom_Nodeset_234_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Abort");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 229LU),
UA_NODEID_NUMERIC(ns[1], 213LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Abort"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 229LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_234_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 229LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Prepare - ns=1;i=228 */

static UA_StatusCode function_UA_Custom_Nodeset_235_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Prepare");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 228LU),
UA_NODEID_NUMERIC(ns[1], 213LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Prepare"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 228LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_235_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 228LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* PercentComplete - ns=1;i=227 */

static UA_StatusCode function_UA_Custom_Nodeset_236_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 3LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PercentComplete");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 227LU),
UA_NODEID_NUMERIC(ns[1], 213LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PercentComplete"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 227LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_236_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 227LU)
);
}

/* SoftwareVersionType - ns=1;i=212 */

static UA_StatusCode function_UA_Custom_Nodeset_237_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareVersionType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 212LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareVersionType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_237_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 212LU)
);
}

/* Hash - ns=1;i=386 */

static UA_StatusCode function_UA_Custom_Nodeset_238_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Hash");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 386LU),
UA_NODEID_NUMERIC(ns[1], 212LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Hash"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 386LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_238_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 386LU)
);
}

/* ChangeLogReference - ns=1;i=385 */

static UA_StatusCode function_UA_Custom_Nodeset_239_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ChangeLogReference");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 385LU),
UA_NODEID_NUMERIC(ns[1], 212LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ChangeLogReference"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 385LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_239_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 385LU)
);
}

/* ReleaseDate - ns=1;i=384 */

static UA_StatusCode function_UA_Custom_Nodeset_240_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ReleaseDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 384LU),
UA_NODEID_NUMERIC(ns[1], 212LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ReleaseDate"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 384LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_240_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 384LU)
);
}

/* PatchIdentifiers - ns=1;i=383 */

static UA_StatusCode function_UA_Custom_Nodeset_241_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PatchIdentifiers");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 383LU),
UA_NODEID_NUMERIC(ns[1], 212LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "PatchIdentifiers"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 383LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_241_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 383LU)
);
}

/* SoftwareRevision - ns=1;i=382 */

static UA_StatusCode function_UA_Custom_Nodeset_242_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 382LU),
UA_NODEID_NUMERIC(ns[1], 212LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 382LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_242_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 382LU)
);
}

/* ManufacturerUri - ns=1;i=381 */

static UA_StatusCode function_UA_Custom_Nodeset_243_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 381LU),
UA_NODEID_NUMERIC(ns[1], 212LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ManufacturerUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 381LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_243_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 381LU)
);
}

/* Manufacturer - ns=1;i=380 */

static UA_StatusCode function_UA_Custom_Nodeset_244_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 380LU),
UA_NODEID_NUMERIC(ns[1], 212LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 380LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_244_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 380LU)
);
}

/* SoftwareLoadingType - ns=1;i=135 */

static UA_StatusCode function_UA_Custom_Nodeset_245_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareLoadingType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 135LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareLoadingType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_245_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 135LU)
);
}

/* FileSystemLoadingType - ns=1;i=192 */

static UA_StatusCode function_UA_Custom_Nodeset_246_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FileSystemLoadingType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 192LU),
UA_NODEID_NUMERIC(ns[1], 135LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "FileSystemLoadingType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_246_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 192LU)
);
}

/* ValidateFiles - ns=1;i=209 */

static UA_StatusCode function_UA_Custom_Nodeset_247_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ValidateFiles");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 209LU),
UA_NODEID_NUMERIC(ns[1], 192LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ValidateFiles"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 209LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_247_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 209LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=211 */

static UA_StatusCode function_UA_Custom_Nodeset_248_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_211_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_211_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_211_variant_DataContents[0].name = UA_STRING("ErrorCode");
variablenode_ns_1_i_211_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_211_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_211_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_211_variant_DataContents[1].name = UA_STRING("ErrorMessage");
variablenode_ns_1_i_211_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
variablenode_ns_1_i_211_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_211_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 211LU),
UA_NODEID_NUMERIC(ns[1], 209LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 211LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_248_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 211LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=210 */

static UA_StatusCode function_UA_Custom_Nodeset_249_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_210_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_210_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_210_variant_DataContents[0].name = UA_STRING("NodeIds");
variablenode_ns_1_i_210_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_210_variant_DataContents[0].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_210_variant_DataContents0_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_210_variant_DataContents0_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_210_variant_DataContents0_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_210_variant_DataContents[0].arrayDimensionsSize = 1;
variablenode_ns_1_i_210_variant_DataContents[0].arrayDimensions = variablenode_ns_1_i_210_variant_DataContents0_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_210_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 210LU),
UA_NODEID_NUMERIC(ns[1], 209LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 210LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_249_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 210LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GetUpdateBehavior - ns=1;i=206 */

static UA_StatusCode function_UA_Custom_Nodeset_250_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetUpdateBehavior");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 206LU),
UA_NODEID_NUMERIC(ns[1], 192LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "GetUpdateBehavior"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 206LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_250_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 206LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=208 */

static UA_StatusCode function_UA_Custom_Nodeset_251_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_208_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_208_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_208_variant_DataContents[0].name = UA_STRING("UpdateBehavior");
variablenode_ns_1_i_208_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[1], 333LU);
variablenode_ns_1_i_208_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_208_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 208LU),
UA_NODEID_NUMERIC(ns[1], 206LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 208LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_251_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 208LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=207 */

static UA_StatusCode function_UA_Custom_Nodeset_252_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_207_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_207_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_207_variant_DataContents[0].name = UA_STRING("NodeIds");
variablenode_ns_1_i_207_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_207_variant_DataContents[0].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_207_variant_DataContents0_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_207_variant_DataContents0_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_207_variant_DataContents0_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_207_variant_DataContents[0].arrayDimensionsSize = 1;
variablenode_ns_1_i_207_variant_DataContents[0].arrayDimensions = variablenode_ns_1_i_207_variant_DataContents0_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_207_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 207LU),
UA_NODEID_NUMERIC(ns[1], 206LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 207LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_252_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 207LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* FileSystem - ns=1;i=194 */

static UA_StatusCode function_UA_Custom_Nodeset_253_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FileSystem");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 194LU),
UA_NODEID_NUMERIC(ns[1], 192LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "FileSystem"),
UA_NODEID_NUMERIC(ns[0], 13353LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 194LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_253_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 194LU)
);
}

/* MoveOrCopy - ns=1;i=203 */

static UA_StatusCode function_UA_Custom_Nodeset_254_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "MoveOrCopy");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 203LU),
UA_NODEID_NUMERIC(ns[1], 194LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "MoveOrCopy"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 203LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_254_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 203LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=205 */

static UA_StatusCode function_UA_Custom_Nodeset_255_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_205_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_205_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_205_variant_DataContents[0].name = UA_STRING("NewNodeId");
variablenode_ns_1_i_205_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_205_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_205_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 205LU),
UA_NODEID_NUMERIC(ns[1], 203LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 205LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_255_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 205LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=204 */

static UA_StatusCode function_UA_Custom_Nodeset_256_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 4;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_204_variant_DataContents[4];

UA_init(&variablenode_ns_1_i_204_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_204_variant_DataContents[0].name = UA_STRING("ObjectToMoveOrCopy");
variablenode_ns_1_i_204_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_204_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_204_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_204_variant_DataContents[1].name = UA_STRING("TargetDirectory");
variablenode_ns_1_i_204_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_204_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_204_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_204_variant_DataContents[2].name = UA_STRING("CreateCopy");
variablenode_ns_1_i_204_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_204_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_204_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_204_variant_DataContents[3].name = UA_STRING("NewName");
variablenode_ns_1_i_204_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_204_variant_DataContents[3].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_204_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 204LU),
UA_NODEID_NUMERIC(ns[1], 203LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);




retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 204LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_256_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 204LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Delete - ns=1;i=201 */

static UA_StatusCode function_UA_Custom_Nodeset_257_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Delete");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 201LU),
UA_NODEID_NUMERIC(ns[1], 194LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "Delete"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 201LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_257_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 201LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=202 */

static UA_StatusCode function_UA_Custom_Nodeset_258_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_202_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_202_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_202_variant_DataContents[0].name = UA_STRING("ObjectToDelete");
variablenode_ns_1_i_202_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_202_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_202_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 202LU),
UA_NODEID_NUMERIC(ns[1], 201LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 202LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_258_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 202LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* CreateFile - ns=1;i=198 */

static UA_StatusCode function_UA_Custom_Nodeset_259_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "CreateFile");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 198LU),
UA_NODEID_NUMERIC(ns[1], 194LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CreateFile"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 198LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_259_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 198LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=200 */

static UA_StatusCode function_UA_Custom_Nodeset_260_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_200_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_200_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_200_variant_DataContents[0].name = UA_STRING("FileNodeId");
variablenode_ns_1_i_200_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_200_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_200_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_200_variant_DataContents[1].name = UA_STRING("FileHandle");
variablenode_ns_1_i_200_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_200_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_200_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 200LU),
UA_NODEID_NUMERIC(ns[1], 198LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 200LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_260_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 200LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=199 */

static UA_StatusCode function_UA_Custom_Nodeset_261_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_199_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_199_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_199_variant_DataContents[0].name = UA_STRING("FileName");
variablenode_ns_1_i_199_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_199_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_199_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_199_variant_DataContents[1].name = UA_STRING("RequestFileOpen");
variablenode_ns_1_i_199_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_199_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_199_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 199LU),
UA_NODEID_NUMERIC(ns[1], 198LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 199LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_261_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 199LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* CreateDirectory - ns=1;i=195 */

static UA_StatusCode function_UA_Custom_Nodeset_262_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "CreateDirectory");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 195LU),
UA_NODEID_NUMERIC(ns[1], 194LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CreateDirectory"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 195LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_262_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 195LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=197 */

static UA_StatusCode function_UA_Custom_Nodeset_263_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_197_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_197_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_197_variant_DataContents[0].name = UA_STRING("DirectoryNodeId");
variablenode_ns_1_i_197_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_197_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_197_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 197LU),
UA_NODEID_NUMERIC(ns[1], 195LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 197LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_263_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 197LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=196 */

static UA_StatusCode function_UA_Custom_Nodeset_264_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_196_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_196_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_196_variant_DataContents[0].name = UA_STRING("DirectoryName");
variablenode_ns_1_i_196_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_196_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_196_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 196LU),
UA_NODEID_NUMERIC(ns[1], 195LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 196LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_264_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 196LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* PackageLoadingType - ns=1;i=137 */

static UA_StatusCode function_UA_Custom_Nodeset_265_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "PackageLoadingType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 137LU),
UA_NODEID_NUMERIC(ns[1], 135LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "PackageLoadingType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_265_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 137LU)
);
}

/* CachedLoadingType - ns=1;i=171 */

static UA_StatusCode function_UA_Custom_Nodeset_266_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CachedLoadingType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 171LU),
UA_NODEID_NUMERIC(ns[1], 137LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "CachedLoadingType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_266_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 171LU)
);
}

/* GetUpdateBehavior - ns=1;i=189 */

static UA_StatusCode function_UA_Custom_Nodeset_267_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GetUpdateBehavior");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 189LU),
UA_NODEID_NUMERIC(ns[1], 171LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "GetUpdateBehavior"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 189LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_267_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 189LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=191 */

static UA_StatusCode function_UA_Custom_Nodeset_268_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_191_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_191_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_191_variant_DataContents[0].name = UA_STRING("UpdateBehavior");
variablenode_ns_1_i_191_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[1], 333LU);
variablenode_ns_1_i_191_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_191_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 191LU),
UA_NODEID_NUMERIC(ns[1], 189LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 191LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_268_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 191LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=190 */

static UA_StatusCode function_UA_Custom_Nodeset_269_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_190_variant_DataContents[3];

UA_init(&variablenode_ns_1_i_190_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_190_variant_DataContents[0].name = UA_STRING("ManufacturerUri");
variablenode_ns_1_i_190_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_190_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_190_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_190_variant_DataContents[1].name = UA_STRING("SoftwareRevision");
variablenode_ns_1_i_190_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_190_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_190_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_190_variant_DataContents[2].name = UA_STRING("PatchIdentifiers");
variablenode_ns_1_i_190_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_190_variant_DataContents[2].valueRank = (UA_Int32) 1;
UA_STACKARRAY(UA_UInt32, variablenode_ns_1_i_190_variant_DataContents2_arrayDimensions, 1);
UA_init(variablenode_ns_1_i_190_variant_DataContents2_arrayDimensions, &UA_TYPES[UA_TYPES_UINT32]);
variablenode_ns_1_i_190_variant_DataContents2_arrayDimensions[0] = (UA_UInt32) 0;
variablenode_ns_1_i_190_variant_DataContents[2].arrayDimensionsSize = 1;
variablenode_ns_1_i_190_variant_DataContents[2].arrayDimensions = variablenode_ns_1_i_190_variant_DataContents2_arrayDimensions;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_190_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 190LU),
UA_NODEID_NUMERIC(ns[1], 189LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);



retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 190LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_269_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 190LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* FallbackVersion - ns=1;i=188 */

static UA_StatusCode function_UA_Custom_Nodeset_270_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FallbackVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 188LU),
UA_NODEID_NUMERIC(ns[1], 171LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FallbackVersion"),
UA_NODEID_NUMERIC(ns[1], 212LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 188LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_270_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 188LU)
);
}

/* SoftwareRevision - ns=1;i=375 */

static UA_StatusCode function_UA_Custom_Nodeset_271_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 375LU),
UA_NODEID_NUMERIC(ns[1], 188LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 375LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_271_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 375LU)
);
}

/* ManufacturerUri - ns=1;i=374 */

static UA_StatusCode function_UA_Custom_Nodeset_272_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 374LU),
UA_NODEID_NUMERIC(ns[1], 188LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ManufacturerUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 374LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_272_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 374LU)
);
}

/* Manufacturer - ns=1;i=373 */

static UA_StatusCode function_UA_Custom_Nodeset_273_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 373LU),
UA_NODEID_NUMERIC(ns[1], 188LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 373LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_273_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 373LU)
);
}

/* PendingVersion - ns=1;i=187 */

static UA_StatusCode function_UA_Custom_Nodeset_274_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PendingVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 187LU),
UA_NODEID_NUMERIC(ns[1], 171LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PendingVersion"),
UA_NODEID_NUMERIC(ns[1], 212LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 187LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_274_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 187LU)
);
}

/* SoftwareRevision - ns=1;i=368 */

static UA_StatusCode function_UA_Custom_Nodeset_275_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 368LU),
UA_NODEID_NUMERIC(ns[1], 187LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 368LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_275_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 368LU)
);
}

/* ManufacturerUri - ns=1;i=367 */

static UA_StatusCode function_UA_Custom_Nodeset_276_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 367LU),
UA_NODEID_NUMERIC(ns[1], 187LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ManufacturerUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 367LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_276_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 367LU)
);
}

/* Manufacturer - ns=1;i=366 */

static UA_StatusCode function_UA_Custom_Nodeset_277_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 366LU),
UA_NODEID_NUMERIC(ns[1], 187LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 366LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_277_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 366LU)
);
}

/* DirectLoadingType - ns=1;i=153 */

static UA_StatusCode function_UA_Custom_Nodeset_278_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DirectLoadingType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 153LU),
UA_NODEID_NUMERIC(ns[1], 137LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "DirectLoadingType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_278_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 153LU)
);
}

/* WriteTimeout - ns=1;i=170 */

static UA_StatusCode function_UA_Custom_Nodeset_279_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "WriteTimeout");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 170LU),
UA_NODEID_NUMERIC(ns[1], 153LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "WriteTimeout"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 170LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_279_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 170LU)
);
}

/* UpdateBehavior - ns=1;i=169 */

static UA_StatusCode function_UA_Custom_Nodeset_280_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 333LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UpdateBehavior");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 169LU),
UA_NODEID_NUMERIC(ns[1], 153LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "UpdateBehavior"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 169LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_280_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 169LU)
);
}

/* WriteBlockSize - ns=1;i=152 */

static UA_StatusCode function_UA_Custom_Nodeset_281_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "WriteBlockSize");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 152LU),
UA_NODEID_NUMERIC(ns[1], 137LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "WriteBlockSize"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 152LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_281_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 152LU)
);
}

/* ErrorMessage - ns=1;i=151 */

static UA_StatusCode function_UA_Custom_Nodeset_282_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ErrorMessage");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 151LU),
UA_NODEID_NUMERIC(ns[1], 137LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ErrorMessage"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 151LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_282_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 151LU)
);
}

/* FileTransfer - ns=1;i=140 */

static UA_StatusCode function_UA_Custom_Nodeset_283_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FileTransfer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 140LU),
UA_NODEID_NUMERIC(ns[1], 137LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FileTransfer"),
UA_NODEID_NUMERIC(ns[0], 15744LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 140LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_283_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 140LU)
);
}

/* CloseAndCommit - ns=1;i=148 */

static UA_StatusCode function_UA_Custom_Nodeset_284_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "CloseAndCommit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 148LU),
UA_NODEID_NUMERIC(ns[1], 140LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CloseAndCommit"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 148LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_284_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 148LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=150 */

static UA_StatusCode function_UA_Custom_Nodeset_285_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_150_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_150_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_150_variant_DataContents[0].name = UA_STRING("CompletionStateMachine");
variablenode_ns_1_i_150_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_150_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_150_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 150LU),
UA_NODEID_NUMERIC(ns[1], 148LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 150LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_285_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 150LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=149 */

static UA_StatusCode function_UA_Custom_Nodeset_286_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_149_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_149_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_149_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_149_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_149_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_149_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 149LU),
UA_NODEID_NUMERIC(ns[1], 148LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 149LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_286_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 149LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GenerateFileForWrite - ns=1;i=145 */

static UA_StatusCode function_UA_Custom_Nodeset_287_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GenerateFileForWrite");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 145LU),
UA_NODEID_NUMERIC(ns[1], 140LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "GenerateFileForWrite"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 145LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_287_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 145LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=147 */

static UA_StatusCode function_UA_Custom_Nodeset_288_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_147_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_147_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_147_variant_DataContents[0].name = UA_STRING("FileNodeId");
variablenode_ns_1_i_147_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_147_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_147_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_147_variant_DataContents[1].name = UA_STRING("FileHandle");
variablenode_ns_1_i_147_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_147_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_147_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 147LU),
UA_NODEID_NUMERIC(ns[1], 145LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 147LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_288_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 147LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=146 */

static UA_StatusCode function_UA_Custom_Nodeset_289_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_146_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_146_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_146_variant_DataContents[0].name = UA_STRING("GenerateOptions");
variablenode_ns_1_i_146_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
variablenode_ns_1_i_146_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_146_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 146LU),
UA_NODEID_NUMERIC(ns[1], 145LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 146LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_289_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 146LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GenerateFileForRead - ns=1;i=142 */

static UA_StatusCode function_UA_Custom_Nodeset_290_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GenerateFileForRead");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 142LU),
UA_NODEID_NUMERIC(ns[1], 140LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "GenerateFileForRead"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 142LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_290_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 142LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=144 */

static UA_StatusCode function_UA_Custom_Nodeset_291_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_144_variant_DataContents[3];

UA_init(&variablenode_ns_1_i_144_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_144_variant_DataContents[0].name = UA_STRING("FileNodeId");
variablenode_ns_1_i_144_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_144_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_144_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_144_variant_DataContents[1].name = UA_STRING("FileHandle");
variablenode_ns_1_i_144_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_144_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_144_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_144_variant_DataContents[2].name = UA_STRING("CompletionStateMachine");
variablenode_ns_1_i_144_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_144_variant_DataContents[2].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_144_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 144LU),
UA_NODEID_NUMERIC(ns[1], 142LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);



retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 144LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_291_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 144LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=143 */

static UA_StatusCode function_UA_Custom_Nodeset_292_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_143_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_143_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_143_variant_DataContents[0].name = UA_STRING("GenerateOptions");
variablenode_ns_1_i_143_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
variablenode_ns_1_i_143_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_143_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 143LU),
UA_NODEID_NUMERIC(ns[1], 142LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 143LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_292_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 143LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ClientProcessingTimeout - ns=1;i=141 */

static UA_StatusCode function_UA_Custom_Nodeset_293_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientProcessingTimeout");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 141LU),
UA_NODEID_NUMERIC(ns[1], 140LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ClientProcessingTimeout"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 141LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_293_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 141LU)
);
}

/* CurrentVersion - ns=1;i=139 */

static UA_StatusCode function_UA_Custom_Nodeset_294_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 139LU),
UA_NODEID_NUMERIC(ns[1], 137LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CurrentVersion"),
UA_NODEID_NUMERIC(ns[1], 212LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 139LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_294_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 139LU)
);
}

/* SoftwareRevision - ns=1;i=347 */

static UA_StatusCode function_UA_Custom_Nodeset_295_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 347LU),
UA_NODEID_NUMERIC(ns[1], 139LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 347LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_295_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 347LU)
);
}

/* ManufacturerUri - ns=1;i=346 */

static UA_StatusCode function_UA_Custom_Nodeset_296_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 346LU),
UA_NODEID_NUMERIC(ns[1], 139LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ManufacturerUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 346LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_296_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 346LU)
);
}

/* Manufacturer - ns=1;i=345 */

static UA_StatusCode function_UA_Custom_Nodeset_297_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 345LU),
UA_NODEID_NUMERIC(ns[1], 139LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 345LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_297_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 345LU)
);
}

/* UpdateKey - ns=1;i=136 */

static UA_StatusCode function_UA_Custom_Nodeset_298_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UpdateKey");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 136LU),
UA_NODEID_NUMERIC(ns[1], 135LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "UpdateKey"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 136LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_298_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 136LU)
);
}

/* SoftwareUpdateType - ns=1;i=1 */

static UA_StatusCode function_UA_Custom_Nodeset_299_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareUpdateType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareUpdateType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_299_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1LU)
);
}

/* Confirmation - ns=1;i=98 */

static UA_StatusCode function_UA_Custom_Nodeset_300_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Confirmation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 98LU),
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Confirmation"),
UA_NODEID_NUMERIC(ns[1], 307LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 98LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_300_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 98LU)
);
}

/* CurrentState - ns=1;i=99 */

static UA_StatusCode function_UA_Custom_Nodeset_301_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 99LU),
UA_NODEID_NUMERIC(ns[1], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 99LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_301_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 99LU)
);
}

/* Id - ns=1;i=100 */

static UA_StatusCode function_UA_Custom_Nodeset_302_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 100LU),
UA_NODEID_NUMERIC(ns[1], 99LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 100LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_302_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 100LU)
);
}

/* ConfirmationTimeout - ns=1;i=113 */

static UA_StatusCode function_UA_Custom_Nodeset_303_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ConfirmationTimeout");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 113LU),
UA_NODEID_NUMERIC(ns[1], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ConfirmationTimeout"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 113LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_303_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 113LU)
);
}

/* Confirm - ns=1;i=112 */

static UA_StatusCode function_UA_Custom_Nodeset_304_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Confirm");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 112LU),
UA_NODEID_NUMERIC(ns[1], 98LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Confirm"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 112LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_304_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 112LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* PowerCycle - ns=1;i=76 */

static UA_StatusCode function_UA_Custom_Nodeset_305_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerCycle");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 76LU),
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PowerCycle"),
UA_NODEID_NUMERIC(ns[1], 285LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 76LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_305_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 76LU)
);
}

/* CurrentState - ns=1;i=77 */

static UA_StatusCode function_UA_Custom_Nodeset_306_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 77LU),
UA_NODEID_NUMERIC(ns[1], 76LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 77LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_306_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 77LU)
);
}

/* Id - ns=1;i=78 */

static UA_StatusCode function_UA_Custom_Nodeset_307_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 78LU),
UA_NODEID_NUMERIC(ns[1], 77LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 78LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_307_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 78LU)
);
}

/* VendorErrorCode - ns=1;i=402 */

static UA_StatusCode function_UA_Custom_Nodeset_308_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "VendorErrorCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 402LU),
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "VendorErrorCode"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 402LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_308_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 402LU)
);
}

/* Installation - ns=1;i=40 */

static UA_StatusCode function_UA_Custom_Nodeset_309_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Installation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 40LU),
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Installation"),
UA_NODEID_NUMERIC(ns[1], 249LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 40LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_309_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 40LU)
);
}

/* Resume - ns=1;i=61 */

static UA_StatusCode function_UA_Custom_Nodeset_310_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Resume");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 61LU),
UA_NODEID_NUMERIC(ns[1], 40LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Resume"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 61LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_310_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 61LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* CurrentState - ns=1;i=41 */

static UA_StatusCode function_UA_Custom_Nodeset_311_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 41LU),
UA_NODEID_NUMERIC(ns[1], 40LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 41LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_311_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 41LU)
);
}

/* Id - ns=1;i=42 */

static UA_StatusCode function_UA_Custom_Nodeset_312_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 42LU),
UA_NODEID_NUMERIC(ns[1], 41LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 42LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_312_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 42LU)
);
}

/* PrepareForUpdate - ns=1;i=4 */

static UA_StatusCode function_UA_Custom_Nodeset_313_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PrepareForUpdate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 4LU),
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PrepareForUpdate"),
UA_NODEID_NUMERIC(ns[1], 213LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 4LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_313_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 4LU)
);
}

/* CurrentState - ns=1;i=5 */

static UA_StatusCode function_UA_Custom_Nodeset_314_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentState");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 5LU),
UA_NODEID_NUMERIC(ns[1], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CurrentState"),
UA_NODEID_NUMERIC(ns[0], 2760LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_314_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5LU)
);
}

/* Id - ns=1;i=6 */

static UA_StatusCode function_UA_Custom_Nodeset_315_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Id");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6LU),
UA_NODEID_NUMERIC(ns[1], 5LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "Id"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_315_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6LU)
);
}

/* Abort - ns=1;i=20 */

static UA_StatusCode function_UA_Custom_Nodeset_316_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Abort");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 20LU),
UA_NODEID_NUMERIC(ns[1], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Abort"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 20LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_316_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 20LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Prepare - ns=1;i=19 */

static UA_StatusCode function_UA_Custom_Nodeset_317_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Prepare");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 19LU),
UA_NODEID_NUMERIC(ns[1], 4LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Prepare"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 19LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_317_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 19LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Loading - ns=1;i=2 */

static UA_StatusCode function_UA_Custom_Nodeset_318_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Loading");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 2LU),
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Loading"),
UA_NODEID_NUMERIC(ns[1], 135LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 2LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_318_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 2LU)
);
}

/* DefaultInstanceBrowseName - ns=1;i=134 */

static UA_StatusCode function_UA_Custom_Nodeset_319_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 20LU);
UA_QualifiedName *variablenode_ns_1_i_134_variant_DataContents =  UA_QualifiedName_new();
if (!variablenode_ns_1_i_134_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_QualifiedName_init(variablenode_ns_1_i_134_variant_DataContents);
*variablenode_ns_1_i_134_variant_DataContents = UA_QUALIFIEDNAME_ALLOC(ns[1], "SoftwareUpdate");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_134_variant_DataContents, &UA_TYPES[UA_TYPES_QUALIFIEDNAME]);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultInstanceBrowseName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 134LU),
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultInstanceBrowseName"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_QualifiedName_delete(variablenode_ns_1_i_134_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_319_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 134LU)
);
}

/* UpdateStatus - ns=1;i=133 */

static UA_StatusCode function_UA_Custom_Nodeset_320_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UpdateStatus");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 133LU),
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "UpdateStatus"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 133LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_320_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 133LU)
);
}

/* Parameters - ns=1;i=122 */

static UA_StatusCode function_UA_Custom_Nodeset_321_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Parameters");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 122LU),
UA_NODEID_NUMERIC(ns[1], 1LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Parameters"),
UA_NODEID_NUMERIC(ns[0], 15744LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 122LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_321_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 122LU)
);
}

/* CloseAndCommit - ns=1;i=130 */

static UA_StatusCode function_UA_Custom_Nodeset_322_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "CloseAndCommit");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 130LU),
UA_NODEID_NUMERIC(ns[1], 122LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "CloseAndCommit"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 130LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_322_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 130LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=132 */

static UA_StatusCode function_UA_Custom_Nodeset_323_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_132_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_132_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_132_variant_DataContents[0].name = UA_STRING("CompletionStateMachine");
variablenode_ns_1_i_132_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_132_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_132_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 132LU),
UA_NODEID_NUMERIC(ns[1], 130LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 132LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_323_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 132LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=131 */

static UA_StatusCode function_UA_Custom_Nodeset_324_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_131_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_131_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_131_variant_DataContents[0].name = UA_STRING("FileHandle");
variablenode_ns_1_i_131_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_131_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_131_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 131LU),
UA_NODEID_NUMERIC(ns[1], 130LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 131LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_324_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 131LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GenerateFileForWrite - ns=1;i=127 */

static UA_StatusCode function_UA_Custom_Nodeset_325_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GenerateFileForWrite");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 127LU),
UA_NODEID_NUMERIC(ns[1], 122LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "GenerateFileForWrite"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 127LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_325_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 127LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=129 */

static UA_StatusCode function_UA_Custom_Nodeset_326_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_129_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_129_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_129_variant_DataContents[0].name = UA_STRING("FileNodeId");
variablenode_ns_1_i_129_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_129_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_129_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_129_variant_DataContents[1].name = UA_STRING("FileHandle");
variablenode_ns_1_i_129_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_129_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_129_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 129LU),
UA_NODEID_NUMERIC(ns[1], 127LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 129LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_326_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 129LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=128 */

static UA_StatusCode function_UA_Custom_Nodeset_327_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_128_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_128_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_128_variant_DataContents[0].name = UA_STRING("GenerateOptions");
variablenode_ns_1_i_128_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
variablenode_ns_1_i_128_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_128_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 128LU),
UA_NODEID_NUMERIC(ns[1], 127LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 128LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_327_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 128LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* GenerateFileForRead - ns=1;i=124 */

static UA_StatusCode function_UA_Custom_Nodeset_328_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "GenerateFileForRead");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 124LU),
UA_NODEID_NUMERIC(ns[1], 122LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[0], "GenerateFileForRead"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 124LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_328_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 124LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=126 */

static UA_StatusCode function_UA_Custom_Nodeset_329_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 3;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_126_variant_DataContents[3];

UA_init(&variablenode_ns_1_i_126_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_126_variant_DataContents[0].name = UA_STRING("FileNodeId");
variablenode_ns_1_i_126_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_126_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_126_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_126_variant_DataContents[1].name = UA_STRING("FileHandle");
variablenode_ns_1_i_126_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
variablenode_ns_1_i_126_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_126_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_126_variant_DataContents[2].name = UA_STRING("CompletionStateMachine");
variablenode_ns_1_i_126_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 17LU);
variablenode_ns_1_i_126_variant_DataContents[2].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_126_variant_DataContents, (UA_Int32) 3, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 126LU),
UA_NODEID_NUMERIC(ns[1], 124LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);



retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 126LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_329_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 126LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=125 */

static UA_StatusCode function_UA_Custom_Nodeset_330_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_125_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_125_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_125_variant_DataContents[0].name = UA_STRING("GenerateOptions");
variablenode_ns_1_i_125_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
variablenode_ns_1_i_125_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_125_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 125LU),
UA_NODEID_NUMERIC(ns[1], 124LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 125LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_330_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 125LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ClientProcessingTimeout - ns=1;i=123 */

static UA_StatusCode function_UA_Custom_Nodeset_331_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ClientProcessingTimeout");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 123LU),
UA_NODEID_NUMERIC(ns[1], 122LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "ClientProcessingTimeout"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 123LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_331_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 123LU)
);
}

/* LockingServicesType - ns=1;i=6388 */

static UA_StatusCode function_UA_Custom_Nodeset_332_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "LockingServicesType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "An interface for Locking.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 6388LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "LockingServicesType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_332_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6388LU)
);
}

/* Locked - ns=1;i=6534 */

static UA_StatusCode function_UA_Custom_Nodeset_333_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Locked");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6534LU),
UA_NODEID_NUMERIC(ns[1], 6388LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Locked"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6534LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_333_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6534LU)
);
}

/* BreakLock - ns=1;i=6400 */

static UA_StatusCode function_UA_Custom_Nodeset_334_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "BreakLock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 6400LU),
UA_NODEID_NUMERIC(ns[1], 6388LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BreakLock"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6400LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_334_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6400LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=6401 */

static UA_StatusCode function_UA_Custom_Nodeset_335_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6401_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6401_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6401_variant_DataContents[0].name = UA_STRING("BreakLockStatus");
variablenode_ns_1_i_6401_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6401_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6401_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6401LU),
UA_NODEID_NUMERIC(ns[1], 6400LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6401LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_335_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6401LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ExitLock - ns=1;i=6398 */

static UA_StatusCode function_UA_Custom_Nodeset_336_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ExitLock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 6398LU),
UA_NODEID_NUMERIC(ns[1], 6388LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ExitLock"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6398LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_336_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6398LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=6399 */

static UA_StatusCode function_UA_Custom_Nodeset_337_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6399_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6399_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6399_variant_DataContents[0].name = UA_STRING("ExitLockStatus");
variablenode_ns_1_i_6399_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6399_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6399_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6399LU),
UA_NODEID_NUMERIC(ns[1], 6398LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6399LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_337_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6399LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RenewLock - ns=1;i=6396 */

static UA_StatusCode function_UA_Custom_Nodeset_338_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RenewLock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 6396LU),
UA_NODEID_NUMERIC(ns[1], 6388LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "RenewLock"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6396LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_338_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6396LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=6397 */

static UA_StatusCode function_UA_Custom_Nodeset_339_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6397_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6397_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6397_variant_DataContents[0].name = UA_STRING("RenewLockStatus");
variablenode_ns_1_i_6397_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6397_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6397_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6397LU),
UA_NODEID_NUMERIC(ns[1], 6396LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6397LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_339_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6397LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InitLock - ns=1;i=6393 */

static UA_StatusCode function_UA_Custom_Nodeset_340_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "InitLock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 6393LU),
UA_NODEID_NUMERIC(ns[1], 6388LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "InitLock"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6393LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_340_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6393LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=6395 */

static UA_StatusCode function_UA_Custom_Nodeset_341_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6395_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6395_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6395_variant_DataContents[0].name = UA_STRING("InitLockStatus");
variablenode_ns_1_i_6395_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6395_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6395_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6395LU),
UA_NODEID_NUMERIC(ns[1], 6393LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6395LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_341_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6395LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=6394 */

static UA_StatusCode function_UA_Custom_Nodeset_342_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6394_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6394_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6394_variant_DataContents[0].name = UA_STRING("Context");
variablenode_ns_1_i_6394_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_6394_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6394_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6394LU),
UA_NODEID_NUMERIC(ns[1], 6393LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6394LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_342_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6394LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RemainingLockTime - ns=1;i=6392 */

static UA_StatusCode function_UA_Custom_Nodeset_343_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RemainingLockTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6392LU),
UA_NODEID_NUMERIC(ns[1], 6388LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "RemainingLockTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6392LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_343_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6392LU)
);
}

/* LockingUser - ns=1;i=6391 */

static UA_StatusCode function_UA_Custom_Nodeset_344_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LockingUser");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6391LU),
UA_NODEID_NUMERIC(ns[1], 6388LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "LockingUser"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6391LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_344_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6391LU)
);
}

/* LockingClient - ns=1;i=6390 */

static UA_StatusCode function_UA_Custom_Nodeset_345_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LockingClient");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6390LU),
UA_NODEID_NUMERIC(ns[1], 6388LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "LockingClient"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6390LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_345_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6390LU)
);
}

/* DefaultInstanceBrowseName - ns=1;i=15890 */

static UA_StatusCode function_UA_Custom_Nodeset_346_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 20LU);
UA_QualifiedName *variablenode_ns_1_i_15890_variant_DataContents =  UA_QualifiedName_new();
if (!variablenode_ns_1_i_15890_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_QualifiedName_init(variablenode_ns_1_i_15890_variant_DataContents);
*variablenode_ns_1_i_15890_variant_DataContents = UA_QUALIFIEDNAME_ALLOC(ns[1], "Lock");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_15890_variant_DataContents, &UA_TYPES[UA_TYPES_QUALIFIEDNAME]);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultInstanceBrowseName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15890LU),
UA_NODEID_NUMERIC(ns[1], 6388LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultInstanceBrowseName"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_QualifiedName_delete(variablenode_ns_1_i_15890_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_346_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15890LU)
);
}

/* MaxInactiveLockTime - ns=1;i=6387 */

static UA_StatusCode function_UA_Custom_Nodeset_347_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MaxInactiveLockTime");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Server-specific period of time in milliseconds until the Server will revoke a lock.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6387LU),
UA_NODEID_NUMERIC(ns[0], 2268LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "MaxInactiveLockTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_347_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6387LU)
);
}

/* TransferServicesType - ns=1;i=6526 */

static UA_StatusCode function_UA_Custom_Nodeset_348_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TransferServicesType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 6526LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "TransferServicesType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_348_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6526LU)
);
}

/* FetchTransferResultData - ns=1;i=6531 */

static UA_StatusCode function_UA_Custom_Nodeset_349_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "FetchTransferResultData");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 6531LU),
UA_NODEID_NUMERIC(ns[1], 6526LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FetchTransferResultData"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6531LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_349_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6531LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=6533 */

static UA_StatusCode function_UA_Custom_Nodeset_350_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6533_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6533_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6533_variant_DataContents[0].name = UA_STRING("FetchResultData");
variablenode_ns_1_i_6533_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 22LU);
variablenode_ns_1_i_6533_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6533_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6533LU),
UA_NODEID_NUMERIC(ns[1], 6531LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6533LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_350_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6533LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=6532 */

static UA_StatusCode function_UA_Custom_Nodeset_351_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 4;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6532_variant_DataContents[4];

UA_init(&variablenode_ns_1_i_6532_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6532_variant_DataContents[0].name = UA_STRING("TransferID");
variablenode_ns_1_i_6532_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6532_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_6532_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6532_variant_DataContents[1].name = UA_STRING("SequenceNumber");
variablenode_ns_1_i_6532_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6532_variant_DataContents[1].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_6532_variant_DataContents[2], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6532_variant_DataContents[2].name = UA_STRING("MaxParameterResultsToReturn");
variablenode_ns_1_i_6532_variant_DataContents[2].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6532_variant_DataContents[2].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_6532_variant_DataContents[3], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6532_variant_DataContents[3].name = UA_STRING("OmitGoodResults");
variablenode_ns_1_i_6532_variant_DataContents[3].dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
variablenode_ns_1_i_6532_variant_DataContents[3].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6532_variant_DataContents, (UA_Int32) 4, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6532LU),
UA_NODEID_NUMERIC(ns[1], 6531LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);




retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6532LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_351_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6532LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* TransferFromDevice - ns=1;i=6529 */

static UA_StatusCode function_UA_Custom_Nodeset_352_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "TransferFromDevice");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 6529LU),
UA_NODEID_NUMERIC(ns[1], 6526LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TransferFromDevice"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6529LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_352_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6529LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=6530 */

static UA_StatusCode function_UA_Custom_Nodeset_353_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6530_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_6530_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6530_variant_DataContents[0].name = UA_STRING("TransferID");
variablenode_ns_1_i_6530_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6530_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_6530_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6530_variant_DataContents[1].name = UA_STRING("InitTransferStatus");
variablenode_ns_1_i_6530_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6530_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6530_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6530LU),
UA_NODEID_NUMERIC(ns[1], 6529LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6530LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_353_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6530LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* TransferToDevice - ns=1;i=6527 */

static UA_StatusCode function_UA_Custom_Nodeset_354_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "TransferToDevice");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 6527LU),
UA_NODEID_NUMERIC(ns[1], 6526LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TransferToDevice"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6527LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_354_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6527LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=6528 */

static UA_StatusCode function_UA_Custom_Nodeset_355_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 2;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6528_variant_DataContents[2];

UA_init(&variablenode_ns_1_i_6528_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6528_variant_DataContents[0].name = UA_STRING("TransferID");
variablenode_ns_1_i_6528_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6528_variant_DataContents[0].valueRank = (UA_Int32) -1;

UA_init(&variablenode_ns_1_i_6528_variant_DataContents[1], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6528_variant_DataContents[1].name = UA_STRING("InitTransferStatus");
variablenode_ns_1_i_6528_variant_DataContents[1].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6528_variant_DataContents[1].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6528_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6528LU),
UA_NODEID_NUMERIC(ns[1], 6527LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);


retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6528LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_355_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6528LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* NetworkType - ns=1;i=6247 */

static UA_StatusCode function_UA_Custom_Nodeset_356_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NetworkType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Represents the communication means for Devices that are connected to it.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 6247LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "NetworkType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_356_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6247LU)
);
}

/* Lock - ns=1;i=6294 */

static UA_StatusCode function_UA_Custom_Nodeset_357_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Lock");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Used to lock the Network.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6294LU),
UA_NODEID_NUMERIC(ns[1], 6247LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Lock"),
UA_NODEID_NUMERIC(ns[1], 6388LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6294LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_357_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6294LU)
);
}

/* Locked - ns=1;i=6497 */

static UA_StatusCode function_UA_Custom_Nodeset_358_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Locked");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6497LU),
UA_NODEID_NUMERIC(ns[1], 6294LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Locked"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6497LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_358_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6497LU)
);
}

/* BreakLock - ns=1;i=6306 */

static UA_StatusCode function_UA_Custom_Nodeset_359_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "BreakLock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 6306LU),
UA_NODEID_NUMERIC(ns[1], 6294LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BreakLock"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6306LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_359_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6306LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=6307 */

static UA_StatusCode function_UA_Custom_Nodeset_360_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6307_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6307_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6307_variant_DataContents[0].name = UA_STRING("BreakLockStatus");
variablenode_ns_1_i_6307_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6307_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6307_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6307LU),
UA_NODEID_NUMERIC(ns[1], 6306LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6307LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_360_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6307LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ExitLock - ns=1;i=6304 */

static UA_StatusCode function_UA_Custom_Nodeset_361_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ExitLock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 6304LU),
UA_NODEID_NUMERIC(ns[1], 6294LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ExitLock"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6304LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_361_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6304LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=6305 */

static UA_StatusCode function_UA_Custom_Nodeset_362_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6305_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6305_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6305_variant_DataContents[0].name = UA_STRING("ExitLockStatus");
variablenode_ns_1_i_6305_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6305_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6305_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6305LU),
UA_NODEID_NUMERIC(ns[1], 6304LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6305LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_362_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6305LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RenewLock - ns=1;i=6302 */

static UA_StatusCode function_UA_Custom_Nodeset_363_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RenewLock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 6302LU),
UA_NODEID_NUMERIC(ns[1], 6294LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "RenewLock"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6302LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_363_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6302LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=6303 */

static UA_StatusCode function_UA_Custom_Nodeset_364_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6303_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6303_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6303_variant_DataContents[0].name = UA_STRING("RenewLockStatus");
variablenode_ns_1_i_6303_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6303_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6303_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6303LU),
UA_NODEID_NUMERIC(ns[1], 6302LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6303LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_364_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6303LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InitLock - ns=1;i=6299 */

static UA_StatusCode function_UA_Custom_Nodeset_365_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "InitLock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 6299LU),
UA_NODEID_NUMERIC(ns[1], 6294LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "InitLock"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6299LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_365_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6299LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=6301 */

static UA_StatusCode function_UA_Custom_Nodeset_366_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6301_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6301_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6301_variant_DataContents[0].name = UA_STRING("InitLockStatus");
variablenode_ns_1_i_6301_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6301_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6301_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6301LU),
UA_NODEID_NUMERIC(ns[1], 6299LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6301LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_366_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6301LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=6300 */

static UA_StatusCode function_UA_Custom_Nodeset_367_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6300_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6300_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6300_variant_DataContents[0].name = UA_STRING("Context");
variablenode_ns_1_i_6300_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_6300_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6300_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6300LU),
UA_NODEID_NUMERIC(ns[1], 6299LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6300LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_367_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6300LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RemainingLockTime - ns=1;i=6298 */

static UA_StatusCode function_UA_Custom_Nodeset_368_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RemainingLockTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6298LU),
UA_NODEID_NUMERIC(ns[1], 6294LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "RemainingLockTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6298LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_368_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6298LU)
);
}

/* LockingUser - ns=1;i=6297 */

static UA_StatusCode function_UA_Custom_Nodeset_369_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LockingUser");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6297LU),
UA_NODEID_NUMERIC(ns[1], 6294LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "LockingUser"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6297LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_369_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6297LU)
);
}

/* LockingClient - ns=1;i=6296 */

static UA_StatusCode function_UA_Custom_Nodeset_370_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LockingClient");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6296LU),
UA_NODEID_NUMERIC(ns[1], 6294LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "LockingClient"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6296LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_370_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6296LU)
);
}

/* UIElementType - ns=1;i=6246 */

static UA_StatusCode function_UA_Custom_Nodeset_371_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableTypeAttributes attr = UA_VariableTypeAttributes_default;
attr.isAbstract = true;
/* Value rank inherited */
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UIElementType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The base type for all UI Element Types.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLETYPE,
UA_NODEID_NUMERIC(ns[1], 6246LU),
UA_NODEID_NUMERIC(ns[0], 63LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "UIElementType"),
UA_NODEID_NUMERIC(ns[0], 0LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_371_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6246LU)
);
}

/* ProtocolType - ns=1;i=1006 */

static UA_StatusCode function_UA_Custom_Nodeset_372_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProtocolType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "General structure of a Protocol ObjectType");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1006LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "ProtocolType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_372_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1006LU)
);
}

/* <ProfileIdentifier> - ns=1;i=6596 */

static UA_StatusCode function_UA_Custom_Nodeset_373_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<ProfileIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6596LU),
UA_NODEID_NUMERIC(ns[1], 6247LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<ProfileIdentifier>"),
UA_NODEID_NUMERIC(ns[1], 1006LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6596LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_373_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6596LU)
);
}

/* FunctionalGroupType - ns=1;i=1005 */

static UA_StatusCode function_UA_Custom_Nodeset_374_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FunctionalGroupType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "FolderType is used to organize the Parameters and Methods from the complete set (ParameterSet, MethodSet) with regard to their application");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1005LU),
UA_NODEID_NUMERIC(ns[0], 61LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "FunctionalGroupType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_374_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1005LU)
);
}

/* UIElement - ns=1;i=6243 */

static UA_StatusCode function_UA_Custom_Nodeset_375_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UIElement");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A user interface element assigned to this group.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6243LU),
UA_NODEID_NUMERIC(ns[1], 1005LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "UIElement"),
UA_NODEID_NUMERIC(ns[1], 6246LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6243LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_375_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6243LU)
);
}

/* <GroupIdentifier> - ns=1;i=6027 */

static UA_StatusCode function_UA_Custom_Nodeset_376_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<GroupIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "An application specific functional group used to organize parameters and methods.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6027LU),
UA_NODEID_NUMERIC(ns[1], 1005LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<GroupIdentifier>"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6027LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_376_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6027LU)
);
}

/* UIElement - ns=1;i=6242 */

static UA_StatusCode function_UA_Custom_Nodeset_377_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "UIElement");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A user interface element assigned to this group.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6242LU),
UA_NODEID_NUMERIC(ns[1], 6027LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "UIElement"),
UA_NODEID_NUMERIC(ns[1], 6246LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6242LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_377_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6242LU)
);
}

/* ConfigurableObjectType - ns=1;i=1004 */

static UA_StatusCode function_UA_Custom_Nodeset_378_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ConfigurableObjectType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Defines a general pattern to expose and configure modular components");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1004LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "ConfigurableObjectType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_378_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1004LU)
);
}

/* <ObjectIdentifier> - ns=1;i=6026 */

static UA_StatusCode function_UA_Custom_Nodeset_379_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<ObjectIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6026LU),
UA_NODEID_NUMERIC(ns[1], 1004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<ObjectIdentifier>"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6026LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_379_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6026LU)
);
}

/* SupportedTypes - ns=1;i=5004 */

static UA_StatusCode function_UA_Custom_Nodeset_380_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SupportedTypes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Folder maintaining the set of (sub-types of) BaseObjectTypes that can be instantiated in the ConfigurableComponent");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5004LU),
UA_NODEID_NUMERIC(ns[1], 1004LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "SupportedTypes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5004LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_380_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5004LU)
);
}

/* DeviceHealthDiagnosticAlarmType - ns=1;i=15143 */

static UA_StatusCode function_UA_Custom_Nodeset_381_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceHealthDiagnosticAlarmType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 15143LU),
UA_NODEID_NUMERIC(ns[0], 18347LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "DeviceHealthDiagnosticAlarmType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_381_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15143LU)
);
}

/* MaintenanceRequiredAlarmType - ns=1;i=15739 */

static UA_StatusCode function_UA_Custom_Nodeset_382_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MaintenanceRequiredAlarmType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 15739LU),
UA_NODEID_NUMERIC(ns[1], 15143LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "MaintenanceRequiredAlarmType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_382_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15739LU)
);
}

/* OffSpecAlarmType - ns=1;i=15590 */

static UA_StatusCode function_UA_Custom_Nodeset_383_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "OffSpecAlarmType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 15590LU),
UA_NODEID_NUMERIC(ns[1], 15143LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "OffSpecAlarmType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_383_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15590LU)
);
}

/* CheckFunctionAlarmType - ns=1;i=15441 */

static UA_StatusCode function_UA_Custom_Nodeset_384_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CheckFunctionAlarmType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 15441LU),
UA_NODEID_NUMERIC(ns[1], 15143LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "CheckFunctionAlarmType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_384_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15441LU)
);
}

/* FailureAlarmType - ns=1;i=15292 */

static UA_StatusCode function_UA_Custom_Nodeset_385_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "FailureAlarmType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 15292LU),
UA_NODEID_NUMERIC(ns[1], 15143LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "FailureAlarmType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_385_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15292LU)
);
}

/* ISupportInfoType - ns=1;i=15054 */

static UA_StatusCode function_UA_Custom_Nodeset_386_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ISupportInfoType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 15054LU),
UA_NODEID_NUMERIC(ns[0], 17602LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "ISupportInfoType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_386_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15054LU)
);
}

/* ImageSet - ns=1;i=15061 */

static UA_StatusCode function_UA_Custom_Nodeset_387_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ImageSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15061LU),
UA_NODEID_NUMERIC(ns[1], 15054LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ImageSet"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15061LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_387_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15061LU)
);
}

/* <ImageIdentifier> - ns=1;i=15062 */

static UA_StatusCode function_UA_Custom_Nodeset_388_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 30LU);
attr.displayName = UA_LOCALIZEDTEXT("", "<ImageIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15062LU),
UA_NODEID_NUMERIC(ns[1], 15061LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<ImageIdentifier>"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15062LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_388_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15062LU)
);
}

/* ProtocolSupport - ns=1;i=15059 */

static UA_StatusCode function_UA_Custom_Nodeset_389_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProtocolSupport");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15059LU),
UA_NODEID_NUMERIC(ns[1], 15054LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ProtocolSupport"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15059LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_389_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15059LU)
);
}

/* <ProtocolSupportIdentifier> - ns=1;i=15060 */

static UA_StatusCode function_UA_Custom_Nodeset_390_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "<ProtocolSupportIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15060LU),
UA_NODEID_NUMERIC(ns[1], 15059LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<ProtocolSupportIdentifier>"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15060LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_390_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15060LU)
);
}

/* Documentation - ns=1;i=15057 */

static UA_StatusCode function_UA_Custom_Nodeset_391_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Documentation");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15057LU),
UA_NODEID_NUMERIC(ns[1], 15054LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Documentation"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15057LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_391_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15057LU)
);
}

/* <DocumentIdentifier> - ns=1;i=15058 */

static UA_StatusCode function_UA_Custom_Nodeset_392_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "<DocumentIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15058LU),
UA_NODEID_NUMERIC(ns[1], 15057LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<DocumentIdentifier>"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15058LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_392_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15058LU)
);
}

/* DeviceTypeImage - ns=1;i=15055 */

static UA_StatusCode function_UA_Custom_Nodeset_393_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceTypeImage");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15055LU),
UA_NODEID_NUMERIC(ns[1], 15054LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "DeviceTypeImage"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15055LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_393_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15055LU)
);
}

/* <ImageIdentifier> - ns=1;i=15056 */

static UA_StatusCode function_UA_Custom_Nodeset_394_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 30LU);
attr.displayName = UA_LOCALIZEDTEXT("", "<ImageIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15056LU),
UA_NODEID_NUMERIC(ns[1], 15055LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<ImageIdentifier>"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15056LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_394_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15056LU)
);
}

/* IDeviceHealthType - ns=1;i=15051 */

static UA_StatusCode function_UA_Custom_Nodeset_395_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "IDeviceHealthType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 15051LU),
UA_NODEID_NUMERIC(ns[0], 17602LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "IDeviceHealthType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_395_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15051LU)
);
}

/* DeviceHealthAlarms - ns=1;i=15053 */

static UA_StatusCode function_UA_Custom_Nodeset_396_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceHealthAlarms");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15053LU),
UA_NODEID_NUMERIC(ns[1], 15051LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "DeviceHealthAlarms"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15053LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_396_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15053LU)
);
}

/* DeviceHealth - ns=1;i=15052 */

static UA_StatusCode function_UA_Custom_Nodeset_397_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 6244LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceHealth");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15052LU),
UA_NODEID_NUMERIC(ns[1], 15051LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "DeviceHealth"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15052LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_397_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15052LU)
);
}

/* ITagNameplateType - ns=1;i=15048 */

static UA_StatusCode function_UA_Custom_Nodeset_398_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ITagNameplateType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 15048LU),
UA_NODEID_NUMERIC(ns[0], 17602LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "ITagNameplateType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_398_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15048LU)
);
}

/* ComponentName - ns=1;i=15050 */

static UA_StatusCode function_UA_Custom_Nodeset_399_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ComponentName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15050LU),
UA_NODEID_NUMERIC(ns[1], 15048LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ComponentName"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15050LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_399_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15050LU)
);
}

/* AssetId - ns=1;i=15049 */

static UA_StatusCode function_UA_Custom_Nodeset_400_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AssetId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15049LU),
UA_NODEID_NUMERIC(ns[1], 15048LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "AssetId"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15049LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_400_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15049LU)
);
}

/* IVendorNameplateType - ns=1;i=15035 */

static UA_StatusCode function_UA_Custom_Nodeset_401_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "IVendorNameplateType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 15035LU),
UA_NODEID_NUMERIC(ns[0], 17602LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "IVendorNameplateType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_401_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15035LU)
);
}

/* RevisionCounter - ns=1;i=15047 */

static UA_StatusCode function_UA_Custom_Nodeset_402_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RevisionCounter");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15047LU),
UA_NODEID_NUMERIC(ns[1], 15035LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "RevisionCounter"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15047LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_402_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15047LU)
);
}

/* ProductInstanceUri - ns=1;i=15046 */

static UA_StatusCode function_UA_Custom_Nodeset_403_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductInstanceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15046LU),
UA_NODEID_NUMERIC(ns[1], 15035LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductInstanceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15046LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_403_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15046LU)
);
}

/* SerialNumber - ns=1;i=15045 */

static UA_StatusCode function_UA_Custom_Nodeset_404_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15045LU),
UA_NODEID_NUMERIC(ns[1], 15035LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15045LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_404_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15045LU)
);
}

/* DeviceClass - ns=1;i=15044 */

static UA_StatusCode function_UA_Custom_Nodeset_405_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceClass");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15044LU),
UA_NODEID_NUMERIC(ns[1], 15035LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceClass"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15044LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_405_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15044LU)
);
}

/* DeviceManual - ns=1;i=15043 */

static UA_StatusCode function_UA_Custom_Nodeset_406_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceManual");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15043LU),
UA_NODEID_NUMERIC(ns[1], 15035LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceManual"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15043LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_406_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15043LU)
);
}

/* ProductCode - ns=1;i=15042 */

static UA_StatusCode function_UA_Custom_Nodeset_407_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15042LU),
UA_NODEID_NUMERIC(ns[1], 15035LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15042LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_407_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15042LU)
);
}

/* DeviceRevision - ns=1;i=15041 */

static UA_StatusCode function_UA_Custom_Nodeset_408_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceRevision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15041LU),
UA_NODEID_NUMERIC(ns[1], 15035LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15041LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_408_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15041LU)
);
}

/* SoftwareRevision - ns=1;i=15040 */

static UA_StatusCode function_UA_Custom_Nodeset_409_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15040LU),
UA_NODEID_NUMERIC(ns[1], 15035LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15040LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_409_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15040LU)
);
}

/* HardwareRevision - ns=1;i=15039 */

static UA_StatusCode function_UA_Custom_Nodeset_410_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HardwareRevision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15039LU),
UA_NODEID_NUMERIC(ns[1], 15035LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "HardwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15039LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_410_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15039LU)
);
}

/* Model - ns=1;i=15038 */

static UA_StatusCode function_UA_Custom_Nodeset_411_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15038LU),
UA_NODEID_NUMERIC(ns[1], 15035LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15038LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_411_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15038LU)
);
}

/* ManufacturerUri - ns=1;i=15037 */

static UA_StatusCode function_UA_Custom_Nodeset_412_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15037LU),
UA_NODEID_NUMERIC(ns[1], 15035LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ManufacturerUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15037LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_412_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15037LU)
);
}

/* Manufacturer - ns=1;i=15036 */

static UA_StatusCode function_UA_Custom_Nodeset_413_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15036LU),
UA_NODEID_NUMERIC(ns[1], 15035LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15036LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_413_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15036LU)
);
}

/* TopologyElementType - ns=1;i=1001 */

static UA_StatusCode function_UA_Custom_Nodeset_414_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "TopologyElementType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Defines the basic information components for all configurable elements in a device topology");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1001LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "TopologyElementType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_414_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1001LU)
);
}

/* <GroupIdentifier> - ns=1;i=6567 */

static UA_StatusCode function_UA_Custom_Nodeset_415_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<GroupIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "An application specific functional group used to organize parameters and methods.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6567LU),
UA_NODEID_NUMERIC(ns[1], 1001LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<GroupIdentifier>"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6567LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_415_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6567LU)
);
}

/* ConnectionPointType - ns=1;i=6308 */

static UA_StatusCode function_UA_Custom_Nodeset_416_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ConnectionPointType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Represents the interface (interface card) of a Device to a Network.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 6308LU),
UA_NODEID_NUMERIC(ns[1], 1001LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "ConnectionPointType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_416_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6308LU)
);
}

/* <NetworkIdentifier> - ns=1;i=6599 */

static UA_StatusCode function_UA_Custom_Nodeset_417_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<NetworkIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6599LU),
UA_NODEID_NUMERIC(ns[1], 6308LU),
UA_NODEID_NUMERIC(ns[1], 6030LU),
UA_QUALIFIEDNAME(ns[1], "<NetworkIdentifier>"),
UA_NODEID_NUMERIC(ns[1], 6247LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6599LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_417_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6599LU)
);
}

/* <ProfileIdentifier> - ns=1;i=6499 */

static UA_StatusCode function_UA_Custom_Nodeset_418_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<ProfileIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6499LU),
UA_NODEID_NUMERIC(ns[1], 6308LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<ProfileIdentifier>"),
UA_NODEID_NUMERIC(ns[1], 1006LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6499LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_418_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6499LU)
);
}

/* NetworkAddress - ns=1;i=6354 */

static UA_StatusCode function_UA_Custom_Nodeset_419_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NetworkAddress");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The address of the device on this network.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6354LU),
UA_NODEID_NUMERIC(ns[1], 6308LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "NetworkAddress"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6354LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_419_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6354LU)
);
}

/* <CPIdentifier> - ns=1;i=6248 */

static UA_StatusCode function_UA_Custom_Nodeset_420_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<CPIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The ConnectionPoint(s) that have been configured for this Network.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6248LU),
UA_NODEID_NUMERIC(ns[1], 6247LU),
UA_NODEID_NUMERIC(ns[1], 6030LU),
UA_QUALIFIEDNAME(ns[1], "<CPIdentifier>"),
UA_NODEID_NUMERIC(ns[1], 6308LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6248LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_420_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6248LU)
);
}

/* NetworkAddress - ns=1;i=6292 */

static UA_StatusCode function_UA_Custom_Nodeset_421_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NetworkAddress");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The address of the device on this network.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6292LU),
UA_NODEID_NUMERIC(ns[1], 6248LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "NetworkAddress"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6292LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_421_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6292LU)
);
}

/* Lock - ns=1;i=6161 */

static UA_StatusCode function_UA_Custom_Nodeset_422_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Lock");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Used to lock the topology element.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6161LU),
UA_NODEID_NUMERIC(ns[1], 1001LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Lock"),
UA_NODEID_NUMERIC(ns[1], 6388LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6161LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_422_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6161LU)
);
}

/* Locked - ns=1;i=6468 */

static UA_StatusCode function_UA_Custom_Nodeset_423_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Locked");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6468LU),
UA_NODEID_NUMERIC(ns[1], 6161LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Locked"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6468LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_423_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6468LU)
);
}

/* BreakLock - ns=1;i=6173 */

static UA_StatusCode function_UA_Custom_Nodeset_424_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "BreakLock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 6173LU),
UA_NODEID_NUMERIC(ns[1], 6161LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BreakLock"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6173LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_424_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6173LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=6174 */

static UA_StatusCode function_UA_Custom_Nodeset_425_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6174_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6174_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6174_variant_DataContents[0].name = UA_STRING("BreakLockStatus");
variablenode_ns_1_i_6174_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6174_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6174_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6174LU),
UA_NODEID_NUMERIC(ns[1], 6173LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6174LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_425_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6174LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* ExitLock - ns=1;i=6171 */

static UA_StatusCode function_UA_Custom_Nodeset_426_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ExitLock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 6171LU),
UA_NODEID_NUMERIC(ns[1], 6161LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ExitLock"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6171LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_426_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6171LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=6172 */

static UA_StatusCode function_UA_Custom_Nodeset_427_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6172_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6172_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6172_variant_DataContents[0].name = UA_STRING("ExitLockStatus");
variablenode_ns_1_i_6172_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6172_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6172_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6172LU),
UA_NODEID_NUMERIC(ns[1], 6171LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6172LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_427_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6172LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RenewLock - ns=1;i=6169 */

static UA_StatusCode function_UA_Custom_Nodeset_428_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "RenewLock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 6169LU),
UA_NODEID_NUMERIC(ns[1], 6161LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "RenewLock"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6169LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_428_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6169LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=6170 */

static UA_StatusCode function_UA_Custom_Nodeset_429_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6170_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6170_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6170_variant_DataContents[0].name = UA_STRING("RenewLockStatus");
variablenode_ns_1_i_6170_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6170_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6170_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6170LU),
UA_NODEID_NUMERIC(ns[1], 6169LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6170LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_429_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6170LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InitLock - ns=1;i=6166 */

static UA_StatusCode function_UA_Custom_Nodeset_430_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "InitLock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[1], 6166LU),
UA_NODEID_NUMERIC(ns[1], 6161LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "InitLock"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6166LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_430_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6166LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* OutputArguments - ns=1;i=6168 */

static UA_StatusCode function_UA_Custom_Nodeset_431_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6168_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6168_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6168_variant_DataContents[0].name = UA_STRING("InitLockStatus");
variablenode_ns_1_i_6168_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
variablenode_ns_1_i_6168_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6168_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6168LU),
UA_NODEID_NUMERIC(ns[1], 6166LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "OutputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6168LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_431_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6168LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=1;i=6167 */

static UA_StatusCode function_UA_Custom_Nodeset_432_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_1_i_6167_variant_DataContents[1];

UA_init(&variablenode_ns_1_i_6167_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_1_i_6167_variant_DataContents[0].name = UA_STRING("Context");
variablenode_ns_1_i_6167_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
variablenode_ns_1_i_6167_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6167_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6167LU),
UA_NODEID_NUMERIC(ns[1], 6166LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6167LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_432_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6167LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* RemainingLockTime - ns=1;i=6165 */

static UA_StatusCode function_UA_Custom_Nodeset_433_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 290LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RemainingLockTime");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6165LU),
UA_NODEID_NUMERIC(ns[1], 6161LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "RemainingLockTime"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6165LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_433_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6165LU)
);
}

/* LockingUser - ns=1;i=6164 */

static UA_StatusCode function_UA_Custom_Nodeset_434_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LockingUser");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6164LU),
UA_NODEID_NUMERIC(ns[1], 6161LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "LockingUser"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6164LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_434_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6164LU)
);
}

/* LockingClient - ns=1;i=6163 */

static UA_StatusCode function_UA_Custom_Nodeset_435_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "LockingClient");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6163LU),
UA_NODEID_NUMERIC(ns[1], 6161LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "LockingClient"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6163LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_435_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6163LU)
);
}

/* Identification - ns=1;i=6014 */

static UA_StatusCode function_UA_Custom_Nodeset_436_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Identification");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Used to organize parameters for identification of this TopologyElement");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6014LU),
UA_NODEID_NUMERIC(ns[1], 1001LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Identification"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6014LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_436_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6014LU)
);
}

/* MethodSet - ns=1;i=5003 */

static UA_StatusCode function_UA_Custom_Nodeset_437_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MethodSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Methods");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5003LU),
UA_NODEID_NUMERIC(ns[1], 1001LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "MethodSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5003LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_437_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5003LU)
);
}

/* ParameterSet - ns=1;i=5002 */

static UA_StatusCode function_UA_Custom_Nodeset_438_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5002LU),
UA_NODEID_NUMERIC(ns[1], 1001LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 5002LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_438_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5002LU)
);
}

/* <ParameterIdentifier> - ns=1;i=6017 */

static UA_StatusCode function_UA_Custom_Nodeset_439_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "<ParameterIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A parameter which belongs to the topology element.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6017LU),
UA_NODEID_NUMERIC(ns[1], 5002LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<ParameterIdentifier>"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6017LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_439_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6017LU)
);
}

/* ComponentType - ns=1;i=15063 */

static UA_StatusCode function_UA_Custom_Nodeset_440_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "ComponentType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[1], 1001LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "ComponentType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15063LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15048LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15063LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15035LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_440_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15063LU)
);
}

/* PADIMType - ns=3;i=1009 */

static UA_StatusCode function_UA_Custom_Nodeset_441_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PADIMType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "PADIMType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1009LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15051LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1009LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1050LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1009LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[3], 1052LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1009LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 17590LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_441_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1009LU)
);
}

/* SignalSet - ns=3;i=1034 */

static UA_StatusCode function_UA_Custom_Nodeset_442_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SignalSet");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 1034LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "SignalSet"),
UA_NODEID_NUMERIC(ns[3], 1021LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1034LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_442_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1034LU)
);
}

/* Display language - ns=3;i=1033 */

static UA_StatusCode function_UA_Custom_Nodeset_443_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 295LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Display language");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1033LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "DisplayLanguage"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1033LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_STRING(ns[2], "0112/2///61987#ABN597#001"), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1033LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_443_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1033LU)
);
}

/* Date of last change - ns=3;i=1032 */

static UA_StatusCode function_UA_Custom_Nodeset_444_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Date of last change");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1032LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "DateOfLastChange"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1032LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1032LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_STRING(ns[2], "0112/2///61987#ABN604#001"), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_444_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1032LU)
);
}

/* Device diagnostic status - ns=3;i=1029 */

static UA_StatusCode function_UA_Custom_Nodeset_445_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 6244LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Device diagnostic status");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1029LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "DeviceHealth"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1029LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1029LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_STRING(ns[2], "0112/2///61987#ABN972#001"), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_445_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1029LU)
);
}

/* Factory reset - ns=3;i=1028 */

static UA_StatusCode function_UA_Custom_Nodeset_446_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Factory reset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 1028LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "FactoryReset"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1028LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_STRING(ns[2], "0112/2///61987#ABN609#001"), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1028LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_446_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1028LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* InputArguments - ns=3;i=1030 */

static UA_StatusCode function_UA_Custom_Nodeset_447_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 1;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 296LU);
UA_Argument variablenode_ns_3_i_1030_variant_DataContents[1];

UA_init(&variablenode_ns_3_i_1030_variant_DataContents[0], &UA_TYPES[UA_TYPES_ARGUMENT]);
variablenode_ns_3_i_1030_variant_DataContents[0].name = UA_STRING("ResetMode");
variablenode_ns_3_i_1030_variant_DataContents[0].dataType = UA_NODEID_NUMERIC(ns[3], 1156LU);
variablenode_ns_3_i_1030_variant_DataContents[0].valueRank = (UA_Int32) -1;
UA_Variant_setArray(&attr.value, &variablenode_ns_3_i_1030_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_ARGUMENT]);
attr.displayName = UA_LOCALIZEDTEXT("", "InputArguments");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1030LU),
UA_NODEID_NUMERIC(ns[3], 1028LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "InputArguments"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);

retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1030LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_UA_Custom_Nodeset_447_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1030LU)
);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* SubDevices - ns=3;i=1025 */

static UA_StatusCode function_UA_Custom_Nodeset_448_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SubDevices");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 1025LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "SubDevices"),
UA_NODEID_NUMERIC(ns[1], 1004LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1025LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_448_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1025LU)
);
}

/* SupportedTypes - ns=3;i=1026 */

static UA_StatusCode function_UA_Custom_Nodeset_449_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SupportedTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 1026LU),
UA_NODEID_NUMERIC(ns[3], 1025LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "SupportedTypes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1026LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_449_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1026LU)
);
}

/* URI of Product instance - ns=3;i=1020 */

static UA_StatusCode function_UA_Custom_Nodeset_450_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "URI of Product instance");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1020LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductInstanceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1020LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1020LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_STRING(ns[2], "0112/2///61987#ABN590#001"), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_450_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1020LU)
);
}

/* Asset ID - ns=3;i=1019 */

static UA_StatusCode function_UA_Custom_Nodeset_451_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Asset ID");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1019LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "AssetId"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1019LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_STRING(ns[2], "0112/2///61987#ABA038#003"), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1019LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_451_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1019LU)
);
}

/* DeviceHealthAlarms - ns=3;i=1018 */

static UA_StatusCode function_UA_Custom_Nodeset_452_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceHealthAlarms");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 1018LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "DeviceHealthAlarms"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1018LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_452_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1018LU)
);
}

/* Revision counter - ns=3;i=1017 */

static UA_StatusCode function_UA_Custom_Nodeset_453_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Revision counter");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1017LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "RevisionCounter"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1017LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1017LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_STRING(ns[2], "0112/2///61987#ABN603#001"), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_453_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1017LU)
);
}

/* Product code - ns=3;i=1016 */

static UA_StatusCode function_UA_Custom_Nodeset_454_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Product code");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1016LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1016LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1016LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_STRING(ns[2], "0112/2///61987#ABA300#006"), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_454_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1016LU)
);
}

/* Hardware revision - ns=3;i=1015 */

static UA_StatusCode function_UA_Custom_Nodeset_455_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Hardware revision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1015LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "HardwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1015LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1015LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_STRING(ns[2], "0112/2///61987#ABA926#006"), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_455_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1015LU)
);
}

/* Software revision - ns=3;i=1014 */

static UA_StatusCode function_UA_Custom_Nodeset_456_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Software revision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1014LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1014LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_STRING(ns[2], "0112/2///61987#ABA601#006"), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1014LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_456_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1014LU)
);
}

/* Serial number - ns=3;i=1013 */

static UA_StatusCode function_UA_Custom_Nodeset_457_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Serial number");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1013LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1013LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1013LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_STRING(ns[2], "0112/2///61987#ABA951#007"), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_457_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1013LU)
);
}

/* Model - ns=3;i=1012 */

static UA_StatusCode function_UA_Custom_Nodeset_458_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1012LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1012LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1012LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_STRING(ns[2], "0112/2///61987#ABA567#007"), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_458_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1012LU)
);
}

/* URI of Manufacturer - ns=3;i=1011 */

static UA_StatusCode function_UA_Custom_Nodeset_459_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "URI of Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1011LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ManufacturerUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1011LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1011LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_STRING(ns[2], "0112/2///61987#ABN591#001"), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_459_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1011LU)
);
}

/* Manufacturer - ns=3;i=1010 */

static UA_StatusCode function_UA_Custom_Nodeset_460_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 1010LU),
UA_NODEID_NUMERIC(ns[3], 1009LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1010LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 1010LU), UA_NODEID_NUMERIC(ns[0], 17597LU), UA_EXPANDEDNODEID_STRING(ns[2], "0112/2///61987#ABA565#007"), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_460_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 1010LU)
);
}

/* SoftwareType - ns=1;i=15106 */

static UA_StatusCode function_UA_Custom_Nodeset_461_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 15106LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_461_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15106LU)
);
}

/* SoftwareRevision - ns=1;i=15133 */

static UA_StatusCode function_UA_Custom_Nodeset_462_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15133LU),
UA_NODEID_NUMERIC(ns[1], 15106LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15133LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_462_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15133LU)
);
}

/* Model - ns=1;i=15131 */

static UA_StatusCode function_UA_Custom_Nodeset_463_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15131LU),
UA_NODEID_NUMERIC(ns[1], 15106LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15131LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_463_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15131LU)
);
}

/* Manufacturer - ns=1;i=15129 */

static UA_StatusCode function_UA_Custom_Nodeset_464_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15129LU),
UA_NODEID_NUMERIC(ns[1], 15106LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15129LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_464_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15129LU)
);
}

/* ComponentName - ns=1;i=15099 */

static UA_StatusCode function_UA_Custom_Nodeset_465_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ComponentName");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15099LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ComponentName"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15099LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_465_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15099LU)
);
}

/* AssetId - ns=1;i=15098 */

static UA_StatusCode function_UA_Custom_Nodeset_466_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "AssetId");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15098LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "AssetId"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15098LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_466_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15098LU)
);
}

/* RevisionCounter - ns=1;i=15097 */

static UA_StatusCode function_UA_Custom_Nodeset_467_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RevisionCounter");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15097LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "RevisionCounter"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15097LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_467_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15097LU)
);
}

/* ProductInstanceUri - ns=1;i=15096 */

static UA_StatusCode function_UA_Custom_Nodeset_468_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductInstanceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15096LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductInstanceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15096LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_468_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15096LU)
);
}

/* SerialNumber - ns=1;i=15095 */

static UA_StatusCode function_UA_Custom_Nodeset_469_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15095LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15095LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_469_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15095LU)
);
}

/* DeviceClass - ns=1;i=15094 */

static UA_StatusCode function_UA_Custom_Nodeset_470_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceClass");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15094LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceClass"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15094LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_470_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15094LU)
);
}

/* DeviceManual - ns=1;i=15093 */

static UA_StatusCode function_UA_Custom_Nodeset_471_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceManual");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15093LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceManual"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15093LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_471_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15093LU)
);
}

/* ProductCode - ns=1;i=15092 */

static UA_StatusCode function_UA_Custom_Nodeset_472_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15092LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15092LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_472_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15092LU)
);
}

/* DeviceRevision - ns=1;i=15091 */

static UA_StatusCode function_UA_Custom_Nodeset_473_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceRevision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15091LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15091LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_473_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15091LU)
);
}

/* SoftwareRevision - ns=1;i=15090 */

static UA_StatusCode function_UA_Custom_Nodeset_474_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15090LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15090LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_474_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15090LU)
);
}

/* HardwareRevision - ns=1;i=15089 */

static UA_StatusCode function_UA_Custom_Nodeset_475_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HardwareRevision");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15089LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "HardwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15089LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_475_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15089LU)
);
}

/* Model - ns=1;i=15088 */

static UA_StatusCode function_UA_Custom_Nodeset_476_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15088LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15088LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_476_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15088LU)
);
}

/* ManufacturerUri - ns=1;i=15087 */

static UA_StatusCode function_UA_Custom_Nodeset_477_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15087LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ManufacturerUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15087LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_477_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15087LU)
);
}

/* Manufacturer - ns=1;i=15086 */

static UA_StatusCode function_UA_Custom_Nodeset_478_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15086LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15086LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_478_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15086LU)
);
}

/* DeviceType - ns=1;i=1002 */

static UA_StatusCode function_UA_Custom_Nodeset_479_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Defines the basic information components for all configurable elements in a device topology");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[1], 15063LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "DeviceType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1002LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15051LU), true);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 1002LU), UA_NODEID_NUMERIC(ns[0], 17603LU), UA_EXPANDEDNODEID_NUMERIC(ns[1], 15054LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_479_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1002LU)
);
}

/* <CPIdentifier> - ns=1;i=6571 */

static UA_StatusCode function_UA_Custom_Nodeset_480_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<CPIdentifier>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6571LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<CPIdentifier>"),
UA_NODEID_NUMERIC(ns[1], 6308LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6571LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11508LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_480_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6571LU)
);
}

/* NetworkAddress - ns=1;i=6592 */

static UA_StatusCode function_UA_Custom_Nodeset_481_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NetworkAddress");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The address of the device on this network.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6592LU),
UA_NODEID_NUMERIC(ns[1], 6571LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "NetworkAddress"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6592LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_481_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6592LU)
);
}

/* DeviceClass - ns=1;i=6470 */

static UA_StatusCode function_UA_Custom_Nodeset_482_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceClass");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6470LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceClass"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6470LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_482_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6470LU)
);
}

/* ImageSet - ns=1;i=6215 */

static UA_StatusCode function_UA_Custom_Nodeset_483_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ImageSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Organizes images that are used within UIElements.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6215LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ImageSet"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6215LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_483_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6215LU)
);
}

/* <ImageIdentifier> - ns=1;i=6216 */

static UA_StatusCode function_UA_Custom_Nodeset_484_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 30LU);
attr.displayName = UA_LOCALIZEDTEXT("", "<ImageIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "An image for a UIElement.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6216LU),
UA_NODEID_NUMERIC(ns[1], 6215LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<ImageIdentifier>"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6216LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_484_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6216LU)
);
}

/* ProtocolSupport - ns=1;i=6213 */

static UA_StatusCode function_UA_Custom_Nodeset_485_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ProtocolSupport");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Protocol-specific files for the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6213LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ProtocolSupport"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6213LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_485_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6213LU)
);
}

/* <ProtocolSupportIdentifier> - ns=1;i=6214 */

static UA_StatusCode function_UA_Custom_Nodeset_486_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "<ProtocolSupportIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A protocol-specific file for the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6214LU),
UA_NODEID_NUMERIC(ns[1], 6213LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<ProtocolSupportIdentifier>"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6214LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_486_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6214LU)
);
}

/* Documentation - ns=1;i=6211 */

static UA_StatusCode function_UA_Custom_Nodeset_487_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Documentation");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Organizes documents for the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6211LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Documentation"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6211LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_487_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6211LU)
);
}

/* <DocumentIdentifier> - ns=1;i=6212 */

static UA_StatusCode function_UA_Custom_Nodeset_488_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 15LU);
attr.displayName = UA_LOCALIZEDTEXT("", "<DocumentIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A document for the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6212LU),
UA_NODEID_NUMERIC(ns[1], 6211LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<DocumentIdentifier>"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6212LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_488_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6212LU)
);
}

/* DeviceTypeImage - ns=1;i=6209 */

static UA_StatusCode function_UA_Custom_Nodeset_489_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceTypeImage");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Organizes pictures of the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6209LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "DeviceTypeImage"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6209LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_489_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6209LU)
);
}

/* <ImageIdentifier> - ns=1;i=6210 */

static UA_StatusCode function_UA_Custom_Nodeset_490_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 30LU);
attr.displayName = UA_LOCALIZEDTEXT("", "<ImageIdentifier>");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "An image of the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6210LU),
UA_NODEID_NUMERIC(ns[1], 6209LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "<ImageIdentifier>"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6210LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 11510LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_490_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6210LU)
);
}

/* DeviceHealth - ns=1;i=6208 */

static UA_StatusCode function_UA_Custom_Nodeset_491_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[1], 6244LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceHealth");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6208LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "DeviceHealth"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6208LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_491_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6208LU)
);
}

/* HardwareRevision - ns=1;i=6008 */

static UA_StatusCode function_UA_Custom_Nodeset_492_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HardwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the hardware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6008LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "HardwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6008LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_492_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6008LU)
);
}

/* SoftwareRevision - ns=1;i=6007 */

static UA_StatusCode function_UA_Custom_Nodeset_493_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the software/firmware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6007LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6007LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_493_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6007LU)
);
}

/* DeviceRevision - ns=1;i=6006 */

static UA_StatusCode function_UA_Custom_Nodeset_494_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Overall revision level of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6006LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6006LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_494_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6006LU)
);
}

/* DeviceManual - ns=1;i=6005 */

static UA_StatusCode function_UA_Custom_Nodeset_495_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceManual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Address (pathname in the file system or a URL | Web address) of user manual for the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6005LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceManual"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6005LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_495_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6005LU)
);
}

/* Model - ns=1;i=6004 */

static UA_StatusCode function_UA_Custom_Nodeset_496_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Model name of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6004LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6004LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_496_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6004LU)
);
}

/* Manufacturer - ns=1;i=6003 */

static UA_StatusCode function_UA_Custom_Nodeset_497_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of the company that manufactured the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6003LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6003LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_497_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6003LU)
);
}

/* RevisionCounter - ns=1;i=6002 */

static UA_StatusCode function_UA_Custom_Nodeset_498_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RevisionCounter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "An incremental counter indicating the number of times the static data within the Device has been modified");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6002LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "RevisionCounter"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6002LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_498_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6002LU)
);
}

/* SerialNumber - ns=1;i=6001 */

static UA_StatusCode function_UA_Custom_Nodeset_499_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identifier that uniquely identifies, within a manufacturer, a device instance");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6001LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6001LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_499_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6001LU)
);
}

/* DeviceHealthAlarms - ns=1;i=15105 */

static UA_StatusCode function_UA_Custom_Nodeset_500_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceHealthAlarms");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15105LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "DeviceHealthAlarms"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15105LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_500_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15105LU)
);
}

/* ProductInstanceUri - ns=1;i=15102 */

static UA_StatusCode function_UA_Custom_Nodeset_501_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductInstanceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15102LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductInstanceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15102LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_501_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15102LU)
);
}

/* ProductCode - ns=1;i=15101 */

static UA_StatusCode function_UA_Custom_Nodeset_502_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15101LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15101LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_502_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15101LU)
);
}

/* ManufacturerUri - ns=1;i=15100 */

static UA_StatusCode function_UA_Custom_Nodeset_503_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ManufacturerUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15100LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ManufacturerUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 15100LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_503_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15100LU)
);
}

/* BlockType - ns=1;i=1003 */

static UA_StatusCode function_UA_Custom_Nodeset_504_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "BlockType");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Adds the concept of Blocks needed for block-oriented FieldDevices");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[1], 1003LU),
UA_NODEID_NUMERIC(ns[1], 1001LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[1], "BlockType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_504_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 1003LU)
);
}

/* TargetMode - ns=1;i=6013 */

static UA_StatusCode function_UA_Custom_Nodeset_505_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "TargetMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Mode of operation that is desired for the Block");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6013LU),
UA_NODEID_NUMERIC(ns[1], 1003LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "TargetMode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6013LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_505_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6013LU)
);
}

/* NormalMode - ns=1;i=6012 */

static UA_StatusCode function_UA_Custom_Nodeset_506_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "NormalMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Mode the Block should be set to during normal operating conditions");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6012LU),
UA_NODEID_NUMERIC(ns[1], 1003LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "NormalMode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6012LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_506_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6012LU)
);
}

/* PermittedMode - ns=1;i=6011 */

static UA_StatusCode function_UA_Custom_Nodeset_507_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "PermittedMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Modes of operation that are allowed for the Block based on application requirements");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6011LU),
UA_NODEID_NUMERIC(ns[1], 1003LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "PermittedMode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6011LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_507_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6011LU)
);
}

/* ActualMode - ns=1;i=6010 */

static UA_StatusCode function_UA_Custom_Nodeset_508_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ActualMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Current mode of operation the Block is able to achieve");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6010LU),
UA_NODEID_NUMERIC(ns[1], 1003LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ActualMode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6010LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_508_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6010LU)
);
}

/* RevisionCounter - ns=1;i=6009 */

static UA_StatusCode function_UA_Custom_Nodeset_509_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RevisionCounter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Incremental counter indicating the number of times the static data within the Block has been modified");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6009LU),
UA_NODEID_NUMERIC(ns[1], 1003LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "RevisionCounter"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[1], 6009LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_509_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6009LU)
);
}

/* DeviceTopology - ns=1;i=6094 */

static UA_StatusCode function_UA_Custom_Nodeset_510_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceTopology");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Starting point of the configured device topology.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6094LU),
UA_NODEID_NUMERIC(ns[0], 85LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "DeviceTopology"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_510_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6094LU)
);
}

/* OnlineAccess - ns=1;i=6095 */

static UA_StatusCode function_UA_Custom_Nodeset_511_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "OnlineAccess");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Hint of whether the Server is currently able to communicate to Devices in the topology.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 6095LU),
UA_NODEID_NUMERIC(ns[1], 6094LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "OnlineAccess"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_511_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6095LU)
);
}

/* NetworkSet - ns=1;i=6078 */

static UA_StatusCode function_UA_Custom_Nodeset_512_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "NetworkSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains all instances of communication networks");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 6078LU),
UA_NODEID_NUMERIC(ns[0], 85LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "NetworkSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_512_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 6078LU)
);
}

/* DeviceSet - ns=1;i=5001 */

static UA_StatusCode function_UA_Custom_Nodeset_513_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains all instances of devices");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 5001LU),
UA_NODEID_NUMERIC(ns[0], 85LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "DeviceSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_513_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 5001LU)
);
}

/* DeviceFeatures - ns=1;i=15034 */

static UA_StatusCode function_UA_Custom_Nodeset_514_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceFeatures");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15034LU),
UA_NODEID_NUMERIC(ns[1], 5001LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "DeviceFeatures"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_514_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15034LU)
);
}

/* http://opcfoundation.org/UA/DI/ - ns=1;i=15001 */

static UA_StatusCode function_UA_Custom_Nodeset_515_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "http://opcfoundation.org/UA/DI/");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[1], 15001LU),
UA_NODEID_NUMERIC(ns[0], 11715LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "http://opcfoundation.org/UA/DI/"),
UA_NODEID_NUMERIC(ns[0], 11616LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_515_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15001LU)
);
}

/* DefaultAccessRestrictions - ns=1;i=15033 */

static UA_StatusCode function_UA_Custom_Nodeset_516_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 95LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultAccessRestrictions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15033LU),
UA_NODEID_NUMERIC(ns[1], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultAccessRestrictions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_516_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15033LU)
);
}

/* DefaultUserRolePermissions - ns=1;i=15032 */

static UA_StatusCode function_UA_Custom_Nodeset_517_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 96LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultUserRolePermissions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15032LU),
UA_NODEID_NUMERIC(ns[1], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultUserRolePermissions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_517_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15032LU)
);
}

/* DefaultRolePermissions - ns=1;i=15031 */

static UA_StatusCode function_UA_Custom_Nodeset_518_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 96LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultRolePermissions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15031LU),
UA_NODEID_NUMERIC(ns[1], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultRolePermissions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_518_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15031LU)
);
}

/* StaticStringNodeIdPattern - ns=1;i=15008 */

static UA_StatusCode function_UA_Custom_Nodeset_519_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_15008_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_15008_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_15008_variant_DataContents);
*variablenode_ns_1_i_15008_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_15008_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticStringNodeIdPattern");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15008LU),
UA_NODEID_NUMERIC(ns[1], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticStringNodeIdPattern"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_15008_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_519_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15008LU)
);
}

/* StaticNumericNodeIdRange - ns=1;i=15007 */

static UA_StatusCode function_UA_Custom_Nodeset_520_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 291LU);
UA_String variablenode_ns_1_i_15007_variant_DataContents[1];
variablenode_ns_1_i_15007_variant_DataContents[0] = UA_STRING("1:2147483647");
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_15007_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNumericNodeIdRange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15007LU),
UA_NODEID_NUMERIC(ns[1], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNumericNodeIdRange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_520_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15007LU)
);
}

/* StaticNodeIdTypes - ns=1;i=15006 */

static UA_StatusCode function_UA_Custom_Nodeset_521_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 256LU);
UA_Int32 variablenode_ns_1_i_15006_variant_DataContents[1];
variablenode_ns_1_i_15006_variant_DataContents[0] = (UA_Int32) 0;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_15006_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_IDTYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNodeIdTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15006LU),
UA_NODEID_NUMERIC(ns[1], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNodeIdTypes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_521_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15006LU)
);
}

/* IsNamespaceSubset - ns=1;i=15005 */

static UA_StatusCode function_UA_Custom_Nodeset_522_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_1_i_15005_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_1_i_15005_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_1_i_15005_variant_DataContents);
*variablenode_ns_1_i_15005_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_15005_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsNamespaceSubset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15005LU),
UA_NODEID_NUMERIC(ns[1], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IsNamespaceSubset"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_15005_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_522_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15005LU)
);
}

/* NamespacePublicationDate - ns=1;i=15004 */

static UA_StatusCode function_UA_Custom_Nodeset_523_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13LU);
UA_DateTime *variablenode_ns_1_i_15004_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_1_i_15004_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_1_i_15004_variant_DataContents);
*variablenode_ns_1_i_15004_variant_DataContents = ( (UA_DateTime)(1615248000000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_15004_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespacePublicationDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15004LU),
UA_NODEID_NUMERIC(ns[1], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespacePublicationDate"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_1_i_15004_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_523_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15004LU)
);
}

/* NamespaceVersion - ns=1;i=15003 */

static UA_StatusCode function_UA_Custom_Nodeset_524_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_15003_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_15003_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_15003_variant_DataContents);
*variablenode_ns_1_i_15003_variant_DataContents = UA_STRING_ALLOC("1.03.0");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_15003_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15003LU),
UA_NODEID_NUMERIC(ns[1], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceVersion"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_15003_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_524_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15003LU)
);
}

/* NamespaceUri - ns=1;i=15002 */

static UA_StatusCode function_UA_Custom_Nodeset_525_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_15002_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_15002_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_15002_variant_DataContents);
*variablenode_ns_1_i_15002_variant_DataContents = UA_STRING_ALLOC("http://opcfoundation.org/UA/DI/");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_15002_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[1], 15002LU),
UA_NODEID_NUMERIC(ns[1], 15001LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_15002_variant_DataContents);
return retVal;
}

static UA_StatusCode function_UA_Custom_Nodeset_525_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[1], 15002LU)
);
}

UA_StatusCode UA_Custom_Nodeset(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[4];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/DI/");
ns[2] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/Dictionary/IRDI");
ns[3] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/PADIM/");

/* Load custom datatype definitions into the server */
if((retVal = function_UA_Custom_Nodeset_0_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_1_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_2_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_3_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_4_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_5_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_6_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_7_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_8_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_9_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_10_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_11_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_12_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_13_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_14_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_15_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_16_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_17_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_18_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_19_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_20_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_21_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_22_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_23_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_24_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_25_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_26_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_26_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_27_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_27_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_28_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_28_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_29_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_30_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_31_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_32_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_33_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_34_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_35_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_36_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_37_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_38_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_39_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_40_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_41_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_42_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_43_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_44_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_45_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_46_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_47_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_48_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_49_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_50_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_51_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_52_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_53_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_54_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_55_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_56_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_57_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_58_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_59_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_60_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_61_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_62_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_63_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_64_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_65_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_66_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_67_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_68_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_69_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_70_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_71_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_72_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_73_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_74_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_75_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_76_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_77_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_78_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_79_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_80_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_81_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_82_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_83_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_84_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_85_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_86_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_87_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_88_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_89_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_90_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_91_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_92_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_93_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_94_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_95_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_96_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_97_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_98_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_99_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_100_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_101_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_102_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_103_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_104_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_105_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_106_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_107_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_108_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_109_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_110_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_111_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_112_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_113_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_114_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_115_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_116_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_117_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_118_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_119_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_120_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_121_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_122_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_123_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_124_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_125_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_126_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_127_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_128_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_129_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_130_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_131_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_132_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_133_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_134_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_135_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_136_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_137_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_138_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_139_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_140_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_141_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_142_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_143_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_144_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_145_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_146_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_147_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_148_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_149_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_150_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_151_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_152_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_153_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_154_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_155_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_156_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_157_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_158_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_159_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_160_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_161_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_162_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_163_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_164_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_165_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_166_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_167_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_168_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_169_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_170_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_171_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_172_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_173_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_174_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_175_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_176_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_177_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_178_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_179_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_180_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_181_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_182_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_183_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_184_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_185_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_186_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_187_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_188_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_189_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_190_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_191_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_192_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_193_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_194_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_195_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_196_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_197_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_198_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_199_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_200_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_201_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_202_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_203_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_204_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_205_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_206_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_207_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_208_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_209_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_210_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_211_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_212_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_213_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_214_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_215_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_216_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_217_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_218_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_219_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_220_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_221_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_222_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_223_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_224_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_225_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_226_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_227_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_228_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_229_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_230_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_231_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_232_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_233_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_234_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_235_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_236_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_237_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_238_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_239_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_240_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_241_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_242_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_243_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_244_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_245_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_246_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_247_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_248_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_249_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_250_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_251_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_252_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_253_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_254_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_255_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_256_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_257_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_258_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_259_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_260_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_261_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_262_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_263_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_264_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_265_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_266_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_267_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_268_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_269_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_270_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_271_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_272_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_273_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_274_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_275_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_276_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_277_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_278_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_279_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_280_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_281_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_282_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_283_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_284_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_285_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_286_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_287_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_288_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_289_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_290_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_291_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_292_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_293_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_294_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_295_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_296_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_297_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_298_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_299_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_300_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_301_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_302_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_303_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_304_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_305_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_306_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_307_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_308_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_309_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_310_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_311_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_312_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_313_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_314_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_315_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_316_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_317_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_318_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_319_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_320_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_321_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_322_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_323_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_324_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_325_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_326_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_327_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_328_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_329_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_330_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_331_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_332_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_333_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_334_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_335_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_336_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_337_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_338_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_339_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_340_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_341_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_342_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_343_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_344_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_345_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_346_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_347_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_348_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_349_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_350_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_351_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_352_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_353_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_354_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_355_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_356_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_357_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_358_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_359_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_360_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_361_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_362_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_363_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_364_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_365_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_366_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_367_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_368_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_369_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_370_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_371_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_372_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_373_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_374_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_375_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_376_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_377_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_378_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_379_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_380_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_381_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_382_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_383_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_384_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_385_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_386_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_387_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_388_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_389_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_390_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_391_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_392_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_393_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_394_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_395_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_396_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_397_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_398_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_399_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_400_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_401_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_402_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_403_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_404_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_405_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_406_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_407_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_408_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_409_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_410_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_411_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_412_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_413_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_414_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_415_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_416_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_417_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_418_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_419_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_420_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_421_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_422_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_423_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_424_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_425_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_426_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_427_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_428_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_429_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_430_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_431_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_432_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_433_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_434_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_435_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_436_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_437_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_438_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_439_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_440_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_441_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_442_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_443_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_444_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_445_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_446_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_447_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_448_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_449_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_450_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_451_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_452_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_453_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_454_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_455_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_456_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_457_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_458_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_459_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_460_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_461_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_462_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_463_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_464_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_465_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_466_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_467_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_468_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_469_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_470_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_471_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_472_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_473_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_474_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_475_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_476_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_477_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_478_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_479_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_480_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_481_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_482_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_483_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_484_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_485_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_486_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_487_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_488_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_489_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_490_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_491_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_492_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_493_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_494_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_495_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_496_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_497_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_498_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_499_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_500_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_501_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_502_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_503_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_504_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_505_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_506_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_507_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_508_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_509_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_510_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_511_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_512_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_513_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_514_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_515_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_516_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_517_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_518_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_519_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_520_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_521_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_522_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_523_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_524_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_525_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_525_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_524_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_523_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_522_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_521_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_520_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_519_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_518_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_517_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_516_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_515_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_514_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_513_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_512_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_511_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_510_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_509_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_508_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_507_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_506_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_505_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_504_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_503_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_502_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_501_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_500_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_499_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_498_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_497_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_496_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_495_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_494_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_493_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_492_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_491_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_490_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_489_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_488_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_487_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_486_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_485_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_484_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_483_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_482_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_481_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_480_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_479_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_478_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_477_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_476_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_475_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_474_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_473_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_472_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_471_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_470_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_469_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_468_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_467_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_466_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_465_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_464_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_463_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_462_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_461_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_460_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_459_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_458_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_457_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_456_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_455_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_454_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_453_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_452_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_451_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_450_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_449_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_448_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_447_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_446_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_445_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_444_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_443_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_442_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_441_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_440_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_439_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_438_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_437_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_436_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_435_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_434_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_433_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_432_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_431_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_430_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_429_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_428_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_427_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_426_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_425_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_424_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_423_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_422_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_421_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_420_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_419_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_418_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_417_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_416_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_415_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_414_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_413_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_412_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_411_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_410_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_409_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_408_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_407_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_406_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_405_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_404_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_403_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_402_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_401_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_400_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_399_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_398_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_397_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_396_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_395_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_394_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_393_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_392_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_391_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_390_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_389_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_388_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_387_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_386_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_385_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_384_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_383_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_382_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_381_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_380_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_379_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_378_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_377_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_376_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_375_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_374_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_373_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_372_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_371_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_370_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_369_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_368_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_367_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_366_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_365_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_364_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_363_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_362_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_361_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_360_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_359_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_358_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_357_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_356_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_355_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_354_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_353_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_352_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_351_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_350_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_349_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_348_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_347_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_346_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_345_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_344_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_343_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_342_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_341_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_340_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_339_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_338_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_337_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_336_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_335_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_334_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_333_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_332_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_331_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_330_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_329_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_328_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_327_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_326_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_325_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_324_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_323_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_322_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_321_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_320_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_319_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_318_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_317_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_316_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_315_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_314_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_313_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_312_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_311_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_310_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_309_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_308_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_307_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_306_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_305_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_304_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_303_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_302_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_301_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_300_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_299_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_298_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_297_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_296_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_295_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_294_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_293_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_292_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_291_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_290_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_289_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_288_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_287_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_286_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_285_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_284_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_283_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_282_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_281_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_280_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_279_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_278_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_277_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_276_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_275_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_274_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_273_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_272_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_271_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_270_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_269_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_268_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_267_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_266_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_265_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_264_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_263_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_262_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_261_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_260_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_259_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_258_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_257_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_256_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_255_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_254_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_253_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_252_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_251_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_250_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_249_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_248_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_247_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_246_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_245_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_244_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_243_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_242_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_241_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_240_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_239_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_238_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_237_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_236_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_235_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_234_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_233_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_232_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_231_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_230_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_229_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_228_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_227_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_226_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_225_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_224_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_223_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_222_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_221_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_220_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_219_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_218_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_217_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_216_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_215_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_214_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_213_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_212_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_211_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_210_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_209_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_208_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_207_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_206_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_205_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_204_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_203_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_202_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_201_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_200_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_199_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_198_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_197_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_196_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_195_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_194_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_193_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_192_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_191_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_190_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_189_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_188_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_187_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_186_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_185_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_184_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_183_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_182_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_181_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_180_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_179_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_178_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_177_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_176_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_175_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_174_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_173_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_172_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_171_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_170_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_169_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_168_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_167_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_166_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_165_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_164_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_163_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_162_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_161_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_160_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_159_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_158_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_157_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_156_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_155_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_154_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_153_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_152_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_151_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_150_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_149_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_148_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_147_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_146_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_145_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_144_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_143_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_142_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_141_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_140_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_139_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_138_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_137_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_136_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_135_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_134_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_133_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_132_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_131_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_130_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_129_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_128_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_127_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_126_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_125_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_124_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_123_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_122_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_121_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_120_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_119_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_118_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_117_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_116_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_115_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_114_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_113_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_112_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_111_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_110_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_109_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_108_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_107_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_106_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_105_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_104_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_103_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_102_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_101_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_100_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_99_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_98_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_97_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_96_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_95_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_94_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_93_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_92_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_91_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_90_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_89_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_88_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_87_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_86_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_85_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_84_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_83_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_82_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_81_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_80_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_79_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_78_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_77_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_76_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_75_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_74_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_73_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_72_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_71_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_70_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_69_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_68_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_67_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_66_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_65_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_64_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_63_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_62_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_61_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_60_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_59_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_58_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_57_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_56_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_55_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_54_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_53_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_52_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_51_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_50_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_49_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_48_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_47_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_46_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_45_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_44_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_43_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_42_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_41_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_40_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_39_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_38_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_37_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_36_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_35_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_34_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_33_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_32_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_31_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_30_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_29_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_25_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_24_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_23_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_22_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_21_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_20_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_19_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_18_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_17_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_16_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_15_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_14_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_13_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_12_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_11_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_10_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_9_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_8_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_7_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_6_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_5_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_4_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_3_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_2_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_1_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_UA_Custom_Nodeset_0_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}
