/*
#    copyright 2019 Open Interconnect Consortium, Inc. All rights reserved.
#    Redistribution and use in source and binary forms, with or without modification,
#    are permitted provided that the following conditions are met:
#    1.  Redistributions of source code must retain the above copyright notice,
#        this list of conditions and the following disclaimer.
#    2.  Redistributions in binary form must reproduce the above copyright notice,
#        this list of conditions and the following disclaimer in the documentation and/or other materials provided
#        with the distribution.
#
#    THIS SOFTWARE IS PROVIDED BY THE OPEN INTERCONNECT CONSORTIUM, INC. "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
#    INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE OR
#    WARRANTIES OF NON-INFRINGEMENT, ARE DISCLAIMED. IN NO EVENT SHALL THE OPEN INTERCONNECT CONSORTIUM, INC. OR
#    CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
#    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
#    OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
#    OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
#    EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef INTROSPECTION_INCLUDE_H
#define INTROSPECTION_INCLUDE_H
/* introspection data
 input file = ../device_output/code/server_introspection.dat
 date 2020-12-28 01:13:25 */

#define introspection_data_size 2465  /* size of the CBOR */
const uint8_t introspection_data[] = {
 0xa8, 0x68, 0x63, 0x6f, 0x6e, 0x73, 0x75, 0x6d, 0x65, 0x73, 0x81, 0x70,
 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x2f,
 0x6a, 0x73, 0x6f, 0x6e, 0x6b, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x69, 0x74,
 0x69, 0x6f, 0x6e, 0x73, 0xa2, 0x6c, 0x42, 0x69, 0x6e, 0x61, 0x72, 0x79,
 0x53, 0x77, 0x69, 0x74, 0x63, 0x68, 0xa3, 0x6a, 0x70, 0x72, 0x6f, 0x70,
 0x65, 0x72, 0x74, 0x69, 0x65, 0x73, 0xa4, 0x62, 0x69, 0x66, 0xa6, 0x6b,
 0x64, 0x65, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60,
 0x65, 0x69, 0x74, 0x65, 0x6d, 0x73, 0xa2, 0x64, 0x65, 0x6e, 0x75, 0x6d,
 0x82, 0x68, 0x6f, 0x69, 0x63, 0x2e, 0x69, 0x66, 0x2e, 0x61, 0x6f, 0x6f,
 0x69, 0x63, 0x2e, 0x69, 0x66, 0x2e, 0x62, 0x61, 0x73, 0x65, 0x6c, 0x69,
 0x6e, 0x65, 0x64, 0x74, 0x79, 0x70, 0x65, 0x66, 0x73, 0x74, 0x72, 0x69,
 0x6e, 0x67, 0x68, 0x6d, 0x69, 0x6e, 0x49, 0x74, 0x65, 0x6d, 0x73, 0x2,
 0x68, 0x72, 0x65, 0x61, 0x64, 0x4f, 0x6e, 0x6c, 0x79, 0xf5, 0x64, 0x74,
 0x79, 0x70, 0x65, 0x65, 0x61, 0x72, 0x72, 0x61, 0x79, 0x6b, 0x75, 0x6e,
 0x69, 0x71, 0x75, 0x65, 0x49, 0x74, 0x65, 0x6d, 0x73, 0xf5, 0x61, 0x6e,
 0xa4, 0x6b, 0x64, 0x65, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f,
 0x6e, 0x60, 0x69, 0x6d, 0x61, 0x78, 0x4c, 0x65, 0x6e, 0x67, 0x74, 0x68,
 0x18, 0x40, 0x68, 0x72, 0x65, 0x61, 0x64, 0x4f, 0x6e, 0x6c, 0x79, 0xf5,
 0x64, 0x74, 0x79, 0x70, 0x65, 0x66, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67,
 0x62, 0x72, 0x74, 0xa7, 0x67, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74,
 0x81, 0x73, 0x6f, 0x69, 0x63, 0x2e, 0x72, 0x2e, 0x73, 0x77, 0x69, 0x74,
 0x63, 0x68, 0x2e, 0x62, 0x69, 0x6e, 0x61, 0x72, 0x79, 0x6b, 0x64, 0x65,
 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x65, 0x69,
 0x74, 0x65, 0x6d, 0x73, 0xa3, 0x64, 0x65, 0x6e, 0x75, 0x6d, 0x81, 0x73,
 0x6f, 0x69, 0x63, 0x2e, 0x72, 0x2e, 0x73, 0x77, 0x69, 0x74, 0x63, 0x68,
 0x2e, 0x62, 0x69, 0x6e, 0x61, 0x72, 0x79, 0x69, 0x6d, 0x61, 0x78, 0x4c,
 0x65, 0x6e, 0x67, 0x74, 0x68, 0x18, 0x40, 0x64, 0x74, 0x79, 0x70, 0x65,
 0x66, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x68, 0x6d, 0x69, 0x6e, 0x49,
 0x74, 0x65, 0x6d, 0x73, 0x1, 0x68, 0x72, 0x65, 0x61, 0x64, 0x4f, 0x6e,
 0x6c, 0x79, 0xf5, 0x64, 0x74, 0x79, 0x70, 0x65, 0x65, 0x61, 0x72, 0x72,
 0x61, 0x79, 0x6b, 0x75, 0x6e, 0x69, 0x71, 0x75, 0x65, 0x49, 0x74, 0x65,
 0x6d, 0x73, 0xf5, 0x65, 0x76, 0x61, 0x6c, 0x75, 0x65, 0xa2, 0x6b, 0x64,
 0x65, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x64,
 0x74, 0x79, 0x70, 0x65, 0x67, 0x62, 0x6f, 0x6f, 0x6c, 0x65, 0x61, 0x6e,
 0x68, 0x72, 0x65, 0x71, 0x75, 0x69, 0x72, 0x65, 0x64, 0x81, 0x65, 0x76,
 0x61, 0x6c, 0x75, 0x65, 0x64, 0x74, 0x79, 0x70, 0x65, 0x66, 0x6f, 0x62,
 0x6a, 0x65, 0x63, 0x74, 0x68, 0x50, 0x6c, 0x61, 0x74, 0x66, 0x6f, 0x72,
 0x6d, 0xa3, 0x6a, 0x70, 0x72, 0x6f, 0x70, 0x65, 0x72, 0x74, 0x69, 0x65,
 0x73, 0xb0, 0x62, 0x69, 0x64, 0xa4, 0x6b, 0x64, 0x65, 0x73, 0x63, 0x72,
 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x69, 0x6d, 0x61, 0x78, 0x4c,
 0x65, 0x6e, 0x67, 0x74, 0x68, 0x18, 0x40, 0x68, 0x72, 0x65, 0x61, 0x64,
 0x4f, 0x6e, 0x6c, 0x79, 0xf5, 0x64, 0x74, 0x79, 0x70, 0x65, 0x66, 0x73,
 0x74, 0x72, 0x69, 0x6e, 0x67, 0x62, 0x69, 0x66, 0xa6, 0x6b, 0x64, 0x65,
 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x65, 0x69,
 0x74, 0x65, 0x6d, 0x73, 0xa3, 0x64, 0x65, 0x6e, 0x75, 0x6d, 0x82, 0x6f,
 0x6f, 0x69, 0x63, 0x2e, 0x69, 0x66, 0x2e, 0x62, 0x61, 0x73, 0x65, 0x6c,
 0x69, 0x6e, 0x65, 0x68, 0x6f, 0x69, 0x63, 0x2e, 0x69, 0x66, 0x2e, 0x72,
 0x69, 0x6d, 0x61, 0x78, 0x4c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x18, 0x40,
 0x64, 0x74, 0x79, 0x70, 0x65, 0x66, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67,
 0x68, 0x6d, 0x69, 0x6e, 0x49, 0x74, 0x65, 0x6d, 0x73, 0x2, 0x68, 0x72,
 0x65, 0x61, 0x64, 0x4f, 0x6e, 0x6c, 0x79, 0xf5, 0x64, 0x74, 0x79, 0x70,
 0x65, 0x65, 0x61, 0x72, 0x72, 0x61, 0x79, 0x6b, 0x75, 0x6e, 0x69, 0x71,
 0x75, 0x65, 0x49, 0x74, 0x65, 0x6d, 0x73, 0xf5, 0x64, 0x6d, 0x6e, 0x64,
 0x74, 0xa4, 0x6b, 0x64, 0x65, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x69,
 0x6f, 0x6e, 0x60, 0x67, 0x70, 0x61, 0x74, 0x74, 0x65, 0x72, 0x6e, 0x78,
 0x3a, 0x5e, 0x28, 0x5b, 0x30, 0x2d, 0x39, 0x5d, 0x7b, 0x34, 0x7d, 0x29,
 0x2d, 0x28, 0x31, 0x5b, 0x30, 0x2d, 0x32, 0x5d, 0x7c, 0x30, 0x5b, 0x31,
 0x2d, 0x39, 0x5d, 0x29, 0x2d, 0x28, 0x33, 0x5b, 0x30, 0x2d, 0x31, 0x5d,
 0x7c, 0x32, 0x5b, 0x30, 0x2d, 0x39, 0x5d, 0x7c, 0x31, 0x5b, 0x30, 0x2d,
 0x39, 0x5d, 0x7c, 0x30, 0x5b, 0x31, 0x2d, 0x39, 0x5d, 0x29, 0x24, 0x68,
 0x72, 0x65, 0x61, 0x64, 0x4f, 0x6e, 0x6c, 0x79, 0xf5, 0x64, 0x74, 0x79,
 0x70, 0x65, 0x66, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x64, 0x6d, 0x6e,
 0x66, 0x76, 0xa4, 0x6b, 0x64, 0x65, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74,
 0x69, 0x6f, 0x6e, 0x60, 0x69, 0x6d, 0x61, 0x78, 0x4c, 0x65, 0x6e, 0x67,
 0x74, 0x68, 0x18, 0x40, 0x68, 0x72, 0x65, 0x61, 0x64, 0x4f, 0x6e, 0x6c,
 0x79, 0xf5, 0x64, 0x74, 0x79, 0x70, 0x65, 0x66, 0x73, 0x74, 0x72, 0x69,
 0x6e, 0x67, 0x64, 0x6d, 0x6e, 0x68, 0x77, 0xa4, 0x6b, 0x64, 0x65, 0x73,
 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x69, 0x6d, 0x61,
 0x78, 0x4c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x18, 0x40, 0x68, 0x72, 0x65,
 0x61, 0x64, 0x4f, 0x6e, 0x6c, 0x79, 0xf5, 0x64, 0x74, 0x79, 0x70, 0x65,
 0x66, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x64, 0x6d, 0x6e, 0x6d, 0x6c,
 0xa5, 0x6b, 0x64, 0x65, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f,
 0x6e, 0x60, 0x66, 0x66, 0x6f, 0x72, 0x6d, 0x61, 0x74, 0x63, 0x75, 0x72,
 0x69, 0x69, 0x6d, 0x61, 0x78, 0x4c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x19,
 0x1, 0x0, 0x68, 0x72, 0x65, 0x61, 0x64, 0x4f, 0x6e, 0x6c, 0x79, 0xf5,
 0x64, 0x74, 0x79, 0x70, 0x65, 0x66, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67,
 0x64, 0x6d, 0x6e, 0x6d, 0x6e, 0xa4, 0x6b, 0x64, 0x65, 0x73, 0x63, 0x72,
 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x69, 0x6d, 0x61, 0x78, 0x4c,
 0x65, 0x6e, 0x67, 0x74, 0x68, 0x18, 0x40, 0x68, 0x72, 0x65, 0x61, 0x64,
 0x4f, 0x6e, 0x6c, 0x79, 0xf5, 0x64, 0x74, 0x79, 0x70, 0x65, 0x66, 0x73,
 0x74, 0x72, 0x69, 0x6e, 0x67, 0x64, 0x6d, 0x6e, 0x6d, 0x6f, 0xa4, 0x6b,
 0x64, 0x65, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60,
 0x69, 0x6d, 0x61, 0x78, 0x4c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x18, 0x40,
 0x68, 0x72, 0x65, 0x61, 0x64, 0x4f, 0x6e, 0x6c, 0x79, 0xf5, 0x64, 0x74,
 0x79, 0x70, 0x65, 0x66, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x65, 0x6d,
 0x6e, 0x6e, 0x63, 0x74, 0xa5, 0x6b, 0x64, 0x65, 0x73, 0x63, 0x72, 0x69,
 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x65, 0x69, 0x74, 0x65, 0x6d, 0x73,
 0xa3, 0x6b, 0x64, 0x65, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f,
 0x6e, 0x60, 0x67, 0x6d, 0x69, 0x6e, 0x69, 0x6d, 0x75, 0x6d, 0x1, 0x64,
 0x74, 0x79, 0x70, 0x65, 0x67, 0x69, 0x6e, 0x74, 0x65, 0x67, 0x65, 0x72,
 0x68, 0x6d, 0x69, 0x6e, 0x49, 0x74, 0x65, 0x6d, 0x73, 0x1, 0x68, 0x72,
 0x65, 0x61, 0x64, 0x4f, 0x6e, 0x6c, 0x79, 0xf5, 0x64, 0x74, 0x79, 0x70,
 0x65, 0x65, 0x61, 0x72, 0x72, 0x61, 0x79, 0x64, 0x6d, 0x6e, 0x6f, 0x73,
 0xa4, 0x6b, 0x64, 0x65, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f,
 0x6e, 0x60, 0x69, 0x6d, 0x61, 0x78, 0x4c, 0x65, 0x6e, 0x67, 0x74, 0x68,
 0x18, 0x40, 0x68, 0x72, 0x65, 0x61, 0x64, 0x4f, 0x6e, 0x6c, 0x79, 0xf5,
 0x64, 0x74, 0x79, 0x70, 0x65, 0x66, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67,
 0x64, 0x6d, 0x6e, 0x70, 0x76, 0xa4, 0x6b, 0x64, 0x65, 0x73, 0x63, 0x72,
 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x69, 0x6d, 0x61, 0x78, 0x4c,
 0x65, 0x6e, 0x67, 0x74, 0x68, 0x18, 0x40, 0x68, 0x72, 0x65, 0x61, 0x64,
 0x4f, 0x6e, 0x6c, 0x79, 0xf5, 0x64, 0x74, 0x79, 0x70, 0x65, 0x66, 0x73,
 0x74, 0x72, 0x69, 0x6e, 0x67, 0x65, 0x6d, 0x6e, 0x73, 0x65, 0x6c, 0xa4,
 0x6b, 0x64, 0x65, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e,
 0x60, 0x69, 0x6d, 0x61, 0x78, 0x4c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x18,
 0x40, 0x68, 0x72, 0x65, 0x61, 0x64, 0x4f, 0x6e, 0x6c, 0x79, 0xf5, 0x64,
 0x74, 0x79, 0x70, 0x65, 0x66, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x64,
 0x6d, 0x6e, 0x73, 0x6c, 0xa5, 0x6b, 0x64, 0x65, 0x73, 0x63, 0x72, 0x69,
 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x66, 0x66, 0x6f, 0x72, 0x6d, 0x61,
 0x74, 0x63, 0x75, 0x72, 0x69, 0x69, 0x6d, 0x61, 0x78, 0x4c, 0x65, 0x6e,
 0x67, 0x74, 0x68, 0x19, 0x1, 0x0, 0x68, 0x72, 0x65, 0x61, 0x64, 0x4f,
 0x6e, 0x6c, 0x79, 0xf5, 0x64, 0x74, 0x79, 0x70, 0x65, 0x66, 0x73, 0x74,
 0x72, 0x69, 0x6e, 0x67, 0x62, 0x70, 0x69, 0xa4, 0x6b, 0x64, 0x65, 0x73,
 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x67, 0x70, 0x61,
 0x74, 0x74, 0x65, 0x72, 0x6e, 0x78, 0x4d, 0x5e, 0x5b, 0x61, 0x2d, 0x66,
 0x41, 0x2d, 0x46, 0x30, 0x2d, 0x39, 0x5d, 0x7b, 0x38, 0x7d, 0x2d, 0x5b,
 0x61, 0x2d, 0x66, 0x41, 0x2d, 0x46, 0x30, 0x2d, 0x39, 0x5d, 0x7b, 0x34,
 0x7d, 0x2d, 0x5b, 0x61, 0x2d, 0x66, 0x41, 0x2d, 0x46, 0x30, 0x2d, 0x39,
 0x5d, 0x7b, 0x34, 0x7d, 0x2d, 0x5b, 0x61, 0x2d, 0x66, 0x41, 0x2d, 0x46,
 0x30, 0x2d, 0x39, 0x5d, 0x7b, 0x34, 0x7d, 0x2d, 0x5b, 0x61, 0x2d, 0x66,
 0x41, 0x2d, 0x46, 0x30, 0x2d, 0x39, 0x5d, 0x7b, 0x31, 0x32, 0x7d, 0x24,
 0x68, 0x72, 0x65, 0x61, 0x64, 0x4f, 0x6e, 0x6c, 0x79, 0xf5, 0x64, 0x74,
 0x79, 0x70, 0x65, 0x66, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x62, 0x72,
 0x74, 0xa7, 0x67, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x81, 0x68,
 0x6f, 0x69, 0x63, 0x2e, 0x77, 0x6b, 0x2e, 0x70, 0x6b, 0x64, 0x65, 0x73,
 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x65, 0x69, 0x74,
 0x65, 0x6d, 0x73, 0xa3, 0x64, 0x65, 0x6e, 0x75, 0x6d, 0x81, 0x68, 0x6f,
 0x69, 0x63, 0x2e, 0x77, 0x6b, 0x2e, 0x70, 0x69, 0x6d, 0x61, 0x78, 0x4c,
 0x65, 0x6e, 0x67, 0x74, 0x68, 0x18, 0x40, 0x64, 0x74, 0x79, 0x70, 0x65,
 0x66, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x68, 0x6d, 0x69, 0x6e, 0x49,
 0x74, 0x65, 0x6d, 0x73, 0x1, 0x68, 0x72, 0x65, 0x61, 0x64, 0x4f, 0x6e,
 0x6c, 0x79, 0xf5, 0x64, 0x74, 0x79, 0x70, 0x65, 0x65, 0x61, 0x72, 0x72,
 0x61, 0x79, 0x6b, 0x75, 0x6e, 0x69, 0x71, 0x75, 0x65, 0x49, 0x74, 0x65,
 0x6d, 0x73, 0xf5, 0x62, 0x73, 0x74, 0xa4, 0x6b, 0x64, 0x65, 0x73, 0x63,
 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x66, 0x66, 0x6f, 0x72,
 0x6d, 0x61, 0x74, 0x69, 0x64, 0x61, 0x74, 0x65, 0x2d, 0x74, 0x69, 0x6d,
 0x65, 0x68, 0x72, 0x65, 0x61, 0x64, 0x4f, 0x6e, 0x6c, 0x79, 0xf5, 0x64,
 0x74, 0x79, 0x70, 0x65, 0x66, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x68,
 0x72, 0x65, 0x71, 0x75, 0x69, 0x72, 0x65, 0x64, 0x82, 0x62, 0x70, 0x69,
 0x64, 0x6d, 0x6e, 0x6d, 0x6e, 0x64, 0x74, 0x79, 0x70, 0x65, 0x66, 0x6f,
 0x62, 0x6a, 0x65, 0x63, 0x74, 0x64, 0x69, 0x6e, 0x66, 0x6f, 0xa4, 0x67,
 0x6c, 0x69, 0x63, 0x65, 0x6e, 0x73, 0x65, 0xa3, 0x64, 0x6e, 0x61, 0x6d,
 0x65, 0x60, 0x63, 0x75, 0x72, 0x6c, 0x60, 0x6b, 0x78, 0x2d, 0x63, 0x6f,
 0x70, 0x79, 0x72, 0x69, 0x67, 0x68, 0x74, 0x60, 0x6e, 0x74, 0x65, 0x72,
 0x6d, 0x73, 0x4f, 0x66, 0x53, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x60,
 0x65, 0x74, 0x69, 0x74, 0x6c, 0x65, 0x70, 0x73, 0x65, 0x72, 0x76, 0x65,
 0x72, 0x5f, 0x6c, 0x69, 0x74, 0x65, 0x5f, 0x31, 0x35, 0x39, 0x33, 0x67,
 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x6a, 0x32, 0x30, 0x31, 0x39,
 0x2d, 0x30, 0x32, 0x2d, 0x32, 0x32, 0x6a, 0x70, 0x61, 0x72, 0x61, 0x6d,
 0x65, 0x74, 0x65, 0x72, 0x73, 0xa2, 0x69, 0x69, 0x6e, 0x74, 0x65, 0x72,
 0x66, 0x61, 0x63, 0x65, 0xa4, 0x64, 0x65, 0x6e, 0x75, 0x6d, 0x82, 0x68,
 0x6f, 0x69, 0x63, 0x2e, 0x69, 0x66, 0x2e, 0x61, 0x6f, 0x6f, 0x69, 0x63,
 0x2e, 0x69, 0x66, 0x2e, 0x62, 0x61, 0x73, 0x65, 0x6c, 0x69, 0x6e, 0x65,
 0x62, 0x69, 0x6e, 0x65, 0x71, 0x75, 0x65, 0x72, 0x79, 0x64, 0x6e, 0x61,
 0x6d, 0x65, 0x62, 0x69, 0x66, 0x64, 0x74, 0x79, 0x70, 0x65, 0x66, 0x73,
 0x74, 0x72, 0x69, 0x6e, 0x67, 0x6b, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x66,
 0x61, 0x63, 0x65, 0x31, 0x30, 0xa4, 0x64, 0x65, 0x6e, 0x75, 0x6d, 0x82,
 0x6f, 0x6f, 0x69, 0x63, 0x2e, 0x69, 0x66, 0x2e, 0x62, 0x61, 0x73, 0x65,
 0x6c, 0x69, 0x6e, 0x65, 0x68, 0x6f, 0x69, 0x63, 0x2e, 0x69, 0x66, 0x2e,
 0x72, 0x62, 0x69, 0x6e, 0x65, 0x71, 0x75, 0x65, 0x72, 0x79, 0x64, 0x6e,
 0x61, 0x6d, 0x65, 0x62, 0x69, 0x66, 0x64, 0x74, 0x79, 0x70, 0x65, 0x66,
 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x65, 0x70, 0x61, 0x74, 0x68, 0x73,
 0xa2, 0x6d, 0x2f, 0x62, 0x69, 0x6e, 0x61, 0x72, 0x79, 0x73, 0x77, 0x69,
 0x74, 0x63, 0x68, 0xa2, 0x63, 0x67, 0x65, 0x74, 0xa3, 0x6b, 0x64, 0x65,
 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x6a, 0x70,
 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x73, 0x81, 0xa1, 0x64,
 0x24, 0x72, 0x65, 0x66, 0x76, 0x23, 0x2f, 0x70, 0x61, 0x72, 0x61, 0x6d,
 0x65, 0x74, 0x65, 0x72, 0x73, 0x2f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x66,
 0x61, 0x63, 0x65, 0x69, 0x72, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65,
 0x73, 0xa1, 0x63, 0x32, 0x30, 0x30, 0xa2, 0x6b, 0x64, 0x65, 0x73, 0x63,
 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x66, 0x73, 0x63, 0x68,
 0x65, 0x6d, 0x61, 0xa1, 0x64, 0x24, 0x72, 0x65, 0x66, 0x78, 0x1a, 0x23,
 0x2f, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x73,
 0x2f, 0x42, 0x69, 0x6e, 0x61, 0x72, 0x79, 0x53, 0x77, 0x69, 0x74, 0x63,
 0x68, 0x64, 0x70, 0x6f, 0x73, 0x74, 0xa3, 0x6b, 0x64, 0x65, 0x73, 0x63,
 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x6a, 0x70, 0x61, 0x72,
 0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x73, 0x82, 0xa1, 0x64, 0x24, 0x72,
 0x65, 0x66, 0x76, 0x23, 0x2f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74,
 0x65, 0x72, 0x73, 0x2f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x66, 0x61, 0x63,
 0x65, 0xa4, 0x62, 0x69, 0x6e, 0x64, 0x62, 0x6f, 0x64, 0x79, 0x64, 0x6e,
 0x61, 0x6d, 0x65, 0x64, 0x62, 0x6f, 0x64, 0x79, 0x68, 0x72, 0x65, 0x71,
 0x75, 0x69, 0x72, 0x65, 0x64, 0xf5, 0x66, 0x73, 0x63, 0x68, 0x65, 0x6d,
 0x61, 0xa1, 0x64, 0x24, 0x72, 0x65, 0x66, 0x78, 0x1a, 0x23, 0x2f, 0x64,
 0x65, 0x66, 0x69, 0x6e, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x2f, 0x42,
 0x69, 0x6e, 0x61, 0x72, 0x79, 0x53, 0x77, 0x69, 0x74, 0x63, 0x68, 0x69,
 0x72, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x73, 0xa1, 0x63, 0x32,
 0x30, 0x30, 0xa2, 0x6b, 0x64, 0x65, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74,
 0x69, 0x6f, 0x6e, 0x60, 0x66, 0x73, 0x63, 0x68, 0x65, 0x6d, 0x61, 0xa1,
 0x64, 0x24, 0x72, 0x65, 0x66, 0x78, 0x1a, 0x23, 0x2f, 0x64, 0x65, 0x66,
 0x69, 0x6e, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x2f, 0x42, 0x69, 0x6e,
 0x61, 0x72, 0x79, 0x53, 0x77, 0x69, 0x74, 0x63, 0x68, 0x66, 0x2f, 0x6f,
 0x69, 0x63, 0x2f, 0x70, 0xa1, 0x63, 0x67, 0x65, 0x74, 0xa3, 0x6b, 0x64,
 0x65, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60, 0x6a,
 0x70, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x73, 0x81, 0xa1,
 0x64, 0x24, 0x72, 0x65, 0x66, 0x78, 0x18, 0x23, 0x2f, 0x70, 0x61, 0x72,
 0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x73, 0x2f, 0x69, 0x6e, 0x74, 0x65,
 0x72, 0x66, 0x61, 0x63, 0x65, 0x31, 0x30, 0x69, 0x72, 0x65, 0x73, 0x70,
 0x6f, 0x6e, 0x73, 0x65, 0x73, 0xa1, 0x63, 0x32, 0x30, 0x30, 0xa2, 0x6b,
 0x64, 0x65, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x60,
 0x66, 0x73, 0x63, 0x68, 0x65, 0x6d, 0x61, 0xa1, 0x64, 0x24, 0x72, 0x65,
 0x66, 0x76, 0x23, 0x2f, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x69, 0x74, 0x69,
 0x6f, 0x6e, 0x73, 0x2f, 0x50, 0x6c, 0x61, 0x74, 0x66, 0x6f, 0x72, 0x6d,
 0x68, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x65, 0x73, 0x81, 0x70, 0x61,
 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x2f, 0x6a,
 0x73, 0x6f, 0x6e, 0x67, 0x73, 0x63, 0x68, 0x65, 0x6d, 0x65, 0x73, 0x81,
 0x64, 0x68, 0x74, 0x74, 0x70, 0x67, 0x73, 0x77, 0x61, 0x67, 0x67, 0x65,
 0x72, 0x63, 0x32, 0x2e,0x30};

#endif /* INTROSPECTION_INCLUDE_H */
