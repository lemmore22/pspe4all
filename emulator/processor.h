/*
 * processor.h
 *
 *  Created on: 15 nov. 2008
 *      Author: hli
 */

#ifndef PROCESSOR_H_
#define PROCESSOR_H_

#include "emulator.h"

struct processor_s
{
  /* GPR */
  u32 gpr[32];

  /* FPR */
  f32 fpr[32];

  /* VPR */
  f32 vpr[8][4][4];

  u64 hilo;

  u32 pc;

  emulator_s &emulator;

  processor_s(emulator_s &emulator);
};

#endif /* PROCESSOR_H_ */
