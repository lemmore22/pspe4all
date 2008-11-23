/*
 * host.h
 *
 *  Created on: 22 nov. 2008
 *      Author: hli
 */

#ifndef HOST_H_
#define HOST_H_

#if __i386__
#include "host/x86/x86_cpu.h"
#else
#include "host/any/any_cpu.h"
#endif

#endif /* HOST_H_ */
