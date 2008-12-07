/*
 * processor.h
 *
 *  Created on: 15 nov. 2008
 *      Author: hli
 */

#ifndef EMULATOR_PROCESSOR_H_
#define EMULATOR_PROCESSOR_H_

#include "host.h"

struct processor_s
{
  /* GPR */
  u32 gpr[32];

  /* FPR */
  f32 fpr[32];

  /* VPR */
  f32 vpr[8][4][4];

  u64 hilo;

  u32 pc, npc;

  emulator_s &emulator;

#include "processor/cpu.h"
#include "processor/mdu.h"
#include "processor/lsu.h"
#include "processor/bcu.h"

  processor_s(emulator_s &emulator);

  void interpret();

  void interpret_delayslot();
};

#endif /* EMULATOR_PROCESSOR_H_ */
