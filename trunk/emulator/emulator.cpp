/*
 * emulator.cpp
 *
 *  Created on: 12 nov. 2008
 *      Author: hli
 */

#include "types.h"
#include "memory.h"
#include "emulator.h"

emulator_s &emulator_s::self()
{
  static emulator_s instance;
  return instance;
}

emulator_s &emulator = emulator_s::self();

emulator_s::emulator_s()
{
  psp::reserve_memory();
}

emulator_s::~emulator_s()
{
  psp::release_memory();
}
