/*
 * emulator.cpp
 *
 *  Created on: 12 nov. 2008
 *      Author: hli
 */

#include "emulator.h"
#include "allegrex.h"

emulator_s &emulator_s::self()
{
  emulator_s instance;
  return instance;
}

emulator_s &emulator = emulator_s::self();

emulator_s::emulator_s()
{
  psp_n::reserve_memory();
}

emulator_s::~emulator_s()
{
  psp_n::release_memory();
}
