#!/bin/sh
SCRIPT=`realpath $0`
SCRIPTPATH=`dirname $SCRIPT`
RESOLVER="../tools/nodeset_compiler/nodeset_resolver.py"

git submodule update --init

if [ -f "$RESOLVER" ]; then
    $RESOLVER -e ../tools/schema/Opc.Ua.NodeSet2.Reduced.xml \
      -x ../deps/ua-nodeset/DI/Opc.Ua.Di.NodeSet2.xml \
      -x ../deps/ua-nodeset/PADIM/Opc.Ua.IRDI.NodeSet2.xml \
      -x ../deps/ua-nodeset/PADIM/Opc.Ua.PADIM.NodeSet2.xml \
      -r ../deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml \
      -p -m > Opc.Ua.NodeSet2.Custom.xml
fi

OPTIONS="-DUA_ARCHITECTURE=freertosLWIP -DUA_ENABLE_AMALGAMATION=ON
      -DUA_ENABLE_PUBSUB=OFF -DUA_ENABLE_PUBSUB_ETH_UADP=OFF -DUA_ENABLE_PUBSUB_DELTAFRAMES=OFF -DUA_ENABLE_PUBSUB_INFORMATIONMODEL=OFF
      -DUA_ENABLE_PUBSUB_MQTT=OFF -DUA_ENABLE_ENCRYPTION=OFF -DUA_ENABLE_ENCRYPTION_MBEDTLS=OFF
      -DUA_MULTITHREADING=0
      -DUA_ENABLE_DISCOVERY=OFF -DUA_ENABLE_DISCOVERY_MULTICAST=OFF -DUA_NAMESPACE_ZERO=REDUCED"

cmake $OPTIONS \
      -DUA_NAMESPACE_ZERO=FULL -DUA_FILE_NS0="${SCRIPTPATH}/Opc.Ua.NodeSet2.Custom.xml" ../ && make || true

mkdir -p custom && mv open62541.* custom/
git clean -Xdf

cmake $OPTIONS \
      -DUA_NAMESPACE_ZERO=FULL ../ && make || true

mkdir -p full && mv open62541.* full/
git clean -Xdf

cmake $OPTIONS \
      -DUA_NAMESPACE_ZERO=REDUCED ../ && make || true

mkdir -p reduced && mv open62541.* reduced/
git clean -Xdf

