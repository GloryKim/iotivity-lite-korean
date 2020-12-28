#!/bin/bash
cd DeviceBuilder
sh ./DeviceBuilder_IotivityLiteServer.sh ../example.json  ../device_output "oic.d.light" 
cd ..
#
# copying source code to compile location (linux)
if [ ! -f ./iotivity-lite/apps/device_builder_server.c_org ]; then
  # keep the original file for the windows solution, but do this only once
  cp ./iotivity-lite/apps/device_builder_server.c ./iotivity-lite/apps/device_builder_server.c_org
fi
cp ./device_output/code/simpleserver.c ./iotivity-lite/apps/device_builder_server.c 
#
# copying source code to compile location (windows)
if [ ! -f ./iotivity-lite/apps/simpleserver_windows.c_org ]; then
  # keep the original file for the windows solution, but do this only once
  cp ./iotivity-lite/apps/simpleserver_windows.c ./iotivity-lite/apps/simpleserver_windows.c_org
fi
cp ./device_output/code/simpleserver.c ./iotivity-lite/apps/simpleserver_windows.c
#
# copying source code to compile location cloud(windows)
if [ ! -f ./iotivity-lite/apps/cloud_server.c_org ]; then
  # keep the original file for the windows solution, but do this only once
  cp ./iotivity-lite/apps/cloud_server.c ./iotivity-lite/apps/cloud_server.c_org
fi
cp ./device_output/code/simpleserver.c ./iotivity-lite/apps/cloud_server.c
#
# copy over the IDD header file of the windows solution
if [ ! -f ./iotivity-lite/include/server_introspection.dat.h_org ]; then
  # keep the original IDD header file, but do this only once
  cp ./iotivity-lite/include/server_introspection.dat.h ./iotivity-lite/include/server_introspection.dat.h_org
fi
cp ./device_output/code/server_introspection.dat.h ./iotivity-lite/include/server_introspection.dat.h 
# copy over the IDD data file in the windows solution folder
# mkdir x86/debug & release solution folder
mkdir -p ./iotivity-lite/port/windows/vs2015/x64/Debug
mkdir -p ./iotivity-lite/port/windows/vs2015/x64/Release
cp ./device_output/code/server_introspection.dat ./iotivity-lite/port/windows/vs2015/x64/Debug/server_introspection.cbor
cp ./device_output/code/server_introspection.dat ./iotivity-lite/port/windows/vs2015/x64/Release/server_introspection.cbor
cp ./device_output/code/server_introspection.dat ./iotivity-lite/port/linux/server_introspection.cbor
#
# create the pki include file (if it does not exist)
if [ ! -f ./pki_certs.zip ]; then
# only create when the file does not exist
#sh ./pki.sh 
sh ./pki.sh
echo " " 
fi
