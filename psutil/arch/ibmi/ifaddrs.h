/*
 * Copyright (c) 2021, IBM
 * All rights reserved. Use of this source code is governed by a BSD-style
 * license that can be found in the LICENSE file.
 */

#ifndef __PSUTIL_IBMI_IFADDRS_H__
#define __PSUTIL_IBMI_IFADDRS_H__

#include <as400_protos.h>

#define ifaddrs ifaddrs_pase
#define getifaddrs Qp2getifaddrs
#define freeifaddrs Qp2freeifaddrs

#endif
