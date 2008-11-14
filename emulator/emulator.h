/*
 * emulator.h
 *
 *  Created on: 12 nov. 2008
 *      Author: hli
 */

#ifndef EMULATOR_H_
#define EMULATOR_H_

#include "memory.h"

struct allegrex_instruction_s;

struct emulator_s
{
  public:
    static emulator_s &self();

  private:
    emulator_s();

    ~emulator_s();
};

extern emulator_s &emulator;

#endif /* EMULATOR_H_ */
