/*
 * emulator.h
 *
 *  Created on: 12 nov. 2008
 *      Author: hli
 */

#ifndef EMULATOR_H_
#define EMULATOR_H_

struct emulator_s;

struct emulator_s
{
    static emulator_s &self();

    emulator_s();

    ~emulator_s();

    void initialize();

    void finalize();
};

extern emulator_s &emulator;

#endif /* EMULATOR_H_ */
