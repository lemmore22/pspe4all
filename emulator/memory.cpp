/*
 * memory.cpp
 *
 *  Created on: 13 nov. 2008
 *      Author: hli
 */

#include "memory.h"

#ifdef __WIN32__
#include "win32/memory.h"
#else
#ifdef __LINUX__
#include "linux/memory.h"
#endif
#endif
