/*
 * allegrex.h
 *
 *  Created on: 11 nov. 2008
 *      Author: hli
 */

#ifndef ALLEGREX_H_
#define ALLEGREX_H_

#include "allegrex/instruction.h"

namespace allegrex
{
  extern allegrex_instruction_s *decode_instruction(int opcode);
};

#endif /* ALLEGREX_H_ */
