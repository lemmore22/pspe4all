/*
 * allegrex.cpp
 *
 *  Created on: 15 nov. 2008
 *      Author: hli
 */

#include "types.h"
#include "memory.h"
#include "emulator.h"
#include "processor.h"

#define IMPLEMENT_INSTRUCTION
//#define BUILD_ALLEGREX
#include "allegrex.h"
#include "allegrex/interpreter.h"
#include "decoder.h"

allegrex_instruction_unknown_s &allegrex::reserved_instruction =
  allegrex_instruction_unknown_s::self();
