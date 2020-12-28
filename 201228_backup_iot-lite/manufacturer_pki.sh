#!/bin/bash
# website: https://pki.openconnectivity.org/ocfTestCerts/
# command to create the PKI zip file :
# curl -d "cn=Common Name&org=Member Organization&major=2&minor=0&build=1&baseline0=off&black0=on&blue0=on&purple0=on&devName=Device Name&devMfr=Device Manufacturer&ianaPen=IANA Pen&model=CPL Model&version=CPL Version&secureBoot=off&hardwareStorage=on&mudUrl=https://www.domain.tld/resource" -X POST https://pki.openconnectivity.org/ocfTestCerts/generateTestCert.jsp > CommonName.zip
# Legend:
#   SubjectDN fields (required)
#           n=Common Name&org=Member Organization
#   OCF Compliance extension fields
#          major=2&minor=0&build=1&baseline0=off&black0=on&blue0=on&purple0=on&devName=Device Name&devMfr=Device Manufacturer 
#   OCF CPL Attributes extension fields
#         ianaPen=IANA Pen&model=CPL Model&version=CPL Version
#   OCF Security Claims fields
#         secureBoot=off&hardwareStorage=on
#   Manufacturer Usage Description
#         mudUrl=https://www.domain.tld/resource
#
#if [ ! -f ./pki_certs.zip ]; then
# creating pki zip file 
curl -d "cn=pki_certs&org=OCF&major=2&minor=0&build=1&baseline0=on&black0=off&blue0=off&purple0=off&devName=DeviceName1&devMfr=OCF&ianaPen=IANA Pen&model=CPL Model&version=CPL Version&secureBoot=off&hardwareStorage=on&mudUrl=https://www.domain.tld/resource" -X POST https://pki.openconnectivity.org/ocfTestCerts/generateTestCert.jsp > pki_certs.zip
#fi
# creating header file from pki zip file 
python3 ./DeviceBuilder/src/pki2include.py -file pki_certs.zip
# copy header file into the iotivity-lite tree 
cp ./pki_certs.zip.h ./iotivity-lite/include//pki_certs.h 
