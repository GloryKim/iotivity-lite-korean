#!/bin/bash
# script to build the target
# can accept arguments like TCP=1 CLOUD=1 CLIENT=1
cd iotivity-lite/port/linux/
#comment out one of the next lines to build another port
#cd ./iotivity-lite/port/android/
#cd ./iotivity-lite/port/arduino/
#cd ./iotivity-lite/port/linux/
#cd ./iotivity-lite/port/openthread/
#cd ./iotivity-lite/port/unittest/
#cd ./iotivity-lite/port/windows/
#cd ./iotivity-lite/port/zephyr/
#uncomment next line for having a clean build
#make clean
#uncomment next line for building the debug version
#make -f devbuildmake DYNAMIC=1 DEBUG=1 device_builder_server $1 $2 $3
make -f devbuildmake DYNAMIC=1 device_builder_server $1 $2 $3
cd ../../..
