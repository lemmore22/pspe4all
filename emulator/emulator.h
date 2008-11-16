/*
 * emulator.h
 *
 *  Created on: 12 nov. 2008
 *      Author: hli
 */

#ifndef EMULATOR_H_
#define EMULATOR_H_

#include "types.h"

struct emulator_s;

#include "memory.h"
#include "processor.h"

#include "allegrex.h"

struct emulator_s
{
    static emulator_s &self();

    emulator_s();

    ~emulator_s();
};

extern emulator_s &emulator;

#endif /* EMULATOR_H_ */
