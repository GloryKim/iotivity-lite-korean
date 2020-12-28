#!/bin/bash
CURPWD=`pwd`
cd ./iotivity-lite/port/linux/
#cd ./iotivity-lite/port/android/
#cd ./iotivity-lite/port/arduino/
#cd ./iotivity-lite/port/linux/
#cd ./iotivity-lite/port/openthread/
#cd ./iotivity-lite/port/unittest/
#cd ./iotivity-lite/port/windows/
#cd ./iotivity-lite/port/zephyr/
pwd
ls
./device_builder_server
cd $CURPWD
