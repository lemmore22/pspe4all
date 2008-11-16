/*
 * processor.cpp
 *
 *  Created on: 15 nov. 2008
 *      Author: hli
 */

#include "processor.h"

processor_s::processor_s(emulator_s &emulator)
: hilo(0), pc(0), emulator(emulator)
{
  ::memset(gpr, 0, sizeof(gpr));
  ::memset(fpr, 0, sizeof(fpr));
  ::memset(vpr, 0, sizeof(vpr));
}

