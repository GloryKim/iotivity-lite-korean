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
echo "Retrieving Kyrio Test Certificate"
# website: https://testcerts.kyrio.com/certificates 
# command to create the PKI zip file :
#curl 'https://testcerts.kyrio.com/certificates' -H 'Sec-Fetch-Mode: cors' -H 'Sec-Fetch-Site: same-origin' -H 'Origin: https://testcerts.kyrio.com' -H 'Accept-Encoding: gzip, deflate, br' -H 'Accept-Language: en-US,en;q=0.9,es;q=0.8,fr-FR;q=0.7,fr;q=0.6,de;q=0.5'  -H 'Content-Type: application/json' -H 'Accept: application/json, text/plain, */*' -H 'Referer: https://testcerts.kyrio.com/' -H 'DNT: 1' --data-binary '{"device":{"manufacturer":"CableLabs","name":"TestDevice"},"subject":"testdevice.cablelabs.com","sizeCategory":"SMALL","OCFVersionCompliance":"2.0.0"}' --compressed
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
# creating pki zip file 
curl 'https://testcerts.kyrio.com/certificates' -H 'Sec-Fetch-Mode: cors' -H 'Sec-Fetch-Site: same-origin' -H 'Origin: https://testcerts.kyrio.com' -H 'Accept-Encoding: gzip, deflate, br' -H 'Content-Type: application/json' -H 'Accept: application/json, text/plain, */*' -H 'Referer: https://testcerts.kyrio.com/' -H 'DNT: 1' --data-binary '{"device":{"manufacturer":"OCF","name":"DeviceName1"},"subject":"pki_certs","sizeCategory":"SMALL","OCFVersionCompliance":"2.0.0"}' --compressed > pki_certs.zip
# creating header file from pki zip file 
python3 ./DeviceBuilder/src/pki2include.py -file pki_certs.zip
# copy header file into the iotivity-lite tree 
cp ./pki_certs.zip.h ./iotivity-lite/include//pki_certs.h
