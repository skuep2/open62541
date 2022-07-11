#!/bin/sh
SCRIPT=`realpath $0`
SCRIPTPATH=`dirname $SCRIPT`
RESOLVER="${SCRIPTPATH}/../tools/nodeset_compiler/nodeset_resolver.py"
COMPILER="${SCRIPTPATH}/../tools/nodeset_compiler/nodeset_compiler.py"
REDUCED_NS0="${SCRIPTPATH}/../tools/schema/Opc.Ua.NodeSet2.Reduced.xml"
CUSTOM_NS0="${SCRIPTPATH}/Opc.Ua.NodeSet2.Custom.xml"
FULL_NS0="${SCRIPTPATH}/../deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml"

# Schemas that open62541 cmake process adds to our custom nodeset XML before compiling it into ns0.
# These depend on -DUA_XXX options used during compile below
# They will be added to nodeset_compiler and nodeset_resolver calls to avoid errors with duplicate nodes
EXISTING_NS="-e ../tools/schema/Opc.Ua.NodeSet2.EventsMinimal.xml
             -e ../tools/schema/Opc.Ua.NodeSet2.Part8_Subset.xml
             -e ../tools/schema/Opc.Ua.NodeSet2.PubSubMinimal.xml"

# Schemas that we want to use/load during runtime of the the open62541
# They will be given to nodeset_resolver and nodeset_compiler to resolve required dependencies
# or to generate the custom application nodeset
WANTED_NS="-x ../deps/ua-nodeset/DI/Opc.Ua.Di.NodeSet2.xml
           -x ../deps/ua-nodeset/PADIM/Opc.Ua.IRDI.NodeSet2.xml
           -x ../deps/ua-nodeset/PADIM/Opc.Ua.PADIM.NodeSet2.xml"

git submodule update --init

if [ -f "$RESOLVER" ]; then
    # This call will generate our very own custom namespace-0 by
    # extending the default reduced nodeset with unresolved dependencies
    # (i.e. nodes not found in existing nodesets) for wanted Di/IRDI/PADIM.
    # The dependencies will be copied from the full-blown OPC UA NS0 xml
    $RESOLVER -e $REDUCED_NS0 \
      $EXISTING_NS \
      $WANTED_NS \
      -r $FULL_NS0 -p -m > $CUSTOM_NS0

fi

# Unfortunately "UA_NAMESPACE_ZERO=FULL" seems to be the only way to force open62541 into including all of the UA types
# during ua_generate_datatypes, which may be required by the custom application nodeset.
# Note however that the "UA_FILE_NS0" we provide is NOT a full namespace, but is derived from a reduced namespace and is
# missing some parts of the NS0.
# EVIL HACK: Use UA_NODESET_FILE_DA (originally for Part8 of NS0 only) to pass in additional xml files to be
# compiled into the open62541 NS0. These are the same XMLs as "EXISTING_NS" above.
OPTIONS="-DUA_ARCHITECTURE=freertosLWIP -DUA_ENABLE_AMALGAMATION=ON
      -DUA_ENABLE_STATUSCODE_DESCRIPTIONS=OFF -DUA_ENABLE_TYPEDESCRIPTION=OFF -DUA_ENABLE_NODESET_COMPILER_DESCRIPTIONS=OFF
      -DUA_ENABLE_PUBSUB=ON -DUA_ENABLE_PUBSUB_ETH_UADP=OFF -DUA_ENABLE_PUBSUB_DELTAFRAMES=ON -DUA_ENABLE_PUBSUB_INFORMATIONMODEL=ON
      -DUA_ENABLE_PUBSUB_MQTT=OFF -DUA_ENABLE_ENCRYPTION=OFF -DUA_ENABLE_ENCRYPTION_MBEDTLS=OFF -DUA_ENABLE_DA=ON -DUA_ENABLE_SUBSCRIPTIONS_EVENTS=ON
      -DUA_MULTITHREADING=0
      -DUA_ENABLE_DISCOVERY=OFF -DUA_ENABLE_DISCOVERY_MULTICAST=OFF
      -DUA_NODESET_FILE_DA=${SCRIPTPATH}/../tools/schema/Opc.Ua.NodeSet2.EventsMinimal.xml;${SCRIPTPATH}/../tools/schema/Opc.Ua.NodeSet2.Part8_Subset.xml;${SCRIPTPATH}/../tools/schema/Opc.Ua.NodeSet2.PubSubMinimal.xml"

cmake $OPTIONS \
      -DUA_NAMESPACE_ZERO=FULL -DUA_FILE_NS0="${CUSTOM_NS0}" ../ && make || true

# Generate our custom application nodeset (not part of open62541)
# This nodeset will be shipped separately and loaded into open62541
# during runtime. All wanted nodes will be included in the code and
# given a correct configuration above, all dependencies are satisfied
# with the above generated custom namespace-0 and the existing nodesets
# (added to open62541 during cmake process)
$COMPILER -e $CUSTOM_NS0 \
      $EXISTING_NS \
      $WANTED_NS \
      UA_Custom_Nodeset
