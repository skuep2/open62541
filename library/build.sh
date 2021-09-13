#!/bin/sh
git submodule update --init

cmake -DUA_ARCHITECTURE=freertosLWIP -DUA_ENABLE_AMALGAMATION=ON \
      -DUA_ENABLE_PUBSUB=OFF -DUA_ENABLE_PUBSUB_ETH_UADP=OFF -DUA_ENABLE_PUBSUB_DELTAFRAMES=OFF -DUA_ENABLE_PUBSUB_INFORMATIONMODEL=OFF \
      -DUA_ENABLE_PUBSUB_MQTT=OFF -DUA_ENABLE_ENCRYPTION=OFF -DUA_ENABLE_ENCRYPTION_MBEDTLS=OFF \
      -DUA_ENABLE_DISCOVERY=OFF -DUA_ENABLE_DISCOVERY_MULTICAST=OFF -DUA_NAMESPACE_ZERO=FULL ../ && make || true

mv open62541.c open62541-fullns0.c
mv open62541.h open62541-fullns0.h

cmake -DUA_ARCHITECTURE=freertosLWIP -DUA_ENABLE_AMALGAMATION=ON \
      -DUA_ENABLE_PUBSUB=OFF -DUA_ENABLE_PUBSUB_ETH_UADP=OFF -DUA_ENABLE_PUBSUB_DELTAFRAMES=OFF -DUA_ENABLE_PUBSUB_INFORMATIONMODEL=OFF \
      -DUA_ENABLE_PUBSUB_MQTT=OFF -DUA_ENABLE_ENCRYPTION=OFF -DUA_ENABLE_ENCRYPTION_MBEDTLS=OFF \
      -DUA_ENABLE_DISCOVERY=OFF -DUA_ENABLE_DISCOVERY_MULTICAST=OFF -DUA_NAMESPACE_ZERO=REDUCED ../ && make || true

mv open62541.c open62541-reducedns0.c
mv open62541.h open62541-reducedns0.h

cmake -DUA_ARCHITECTURE=freertosLWIP -DUA_ENABLE_AMALGAMATION=ON \
      -DUA_ENABLE_PUBSUB=OFF -DUA_ENABLE_PUBSUB_ETH_UADP=OFF -DUA_ENABLE_PUBSUB_DELTAFRAMES=OFF -DUA_ENABLE_PUBSUB_INFORMATIONMODEL=OFF \
      -DUA_ENABLE_PUBSUB_MQTT=OFF -DUA_ENABLE_ENCRYPTION=OFF -DUA_ENABLE_ENCRYPTION_MBEDTLS=OFF \
      -DUA_ENABLE_DISCOVERY=OFF -DUA_ENABLE_DISCOVERY_MULTICAST=OFF -DUA_NAMESPACE_ZERO=MINIMAL ../ && make || true

mv open62541.c open62541-minimalns0.c
mv open62541.h open62541-minimalns0.h

git clean -Xdf
