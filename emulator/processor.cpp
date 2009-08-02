/*
 * processor.cpp
 *
 *  Created on: 15 nov. 2008
 *      Author: hli
 */

#include "types.h"
#include "memory.h"
#include "emulator.h"
#include "processor.h"
#include "allegrex.h"
#include <cstring>

Processor::Processor(emulator_s &emulator)
: hilo(0), pc(0), npc(0), emulator(emulator)
{
  ::memset(gpr, 0, sizeof(gpr));
  ::memset(fpr, 0, sizeof(fpr));
  ::memset(vpr, 0, sizeof(vpr));
}

void Processor::interpret()
{
  u32 opcode = fetch_opcode();

  AllegrexInstruction *insn =
    Allegrex::decode_instruction(opcode);

  insn->interpret(*this, opcode);
}

void Processor::interpret_delayslot()
{
  u32 opcode = fetch_delayslot_opcode();

  AllegrexInstruction *insn =
    Allegrex::decode_instruction(opcode);

  insn->interpret(*this, opcode);

  next_pc();
}
