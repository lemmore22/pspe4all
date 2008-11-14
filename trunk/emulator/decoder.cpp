/*
 * decoder.cpp
 *
 *  Created on: 13 nov. 2008
 *      Author: hli
 */

#include "allegrex.h"
#include "allegrex/instructions.h"

static allegrex_instruction_s *allegrex_n::decode_instruction(int opcode)
{
  static allegrex_instruction_s
      *root =
          (
              {
                static struct stub_s : allegrex_instruction_unknown_s
                {
                  virtual allegrex_instruction_s *instruction(int opcode)
                  {
                    static allegrex_instruction_s *table[64] =
                    {
                      /* 0 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                static allegrex_instruction_s *table[64] =
                                {
                                  /* 0 */
                                  (&allegrex_n::SLL),
                                  /* 1 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 2 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00200000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::SRL)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::ROTR)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 3 */
                                  (&allegrex_n::SRA),
                                  /* 4 */
                                  (&allegrex_n::SLLV),
                                  /* 5 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 6 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00000040) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::SRLV)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::ROTRV)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 7 */
                                  (&allegrex_n::SRAV),
                                  /* 8 */
                                  (&allegrex_n::JR),
                                  /* 9 */
                                  (&allegrex_n::JALR),
                                  /* 10 */
                                  (&allegrex_n::MOVZ),
                                  /* 11 */
                                  (&allegrex_n::MOVN),
                                  /* 12 */
                                  (&allegrex_n::SYSCALL),
                                  /* 13 */
                                  (&allegrex_n::BREAK),
                                  /* 14 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 15 */
                                  (&allegrex_n::SYNC),
                                  /* 16 */
                                  (&allegrex_n::MFHI),
                                  /* 17 */
                                  (&allegrex_n::MTHI),
                                  /* 18 */
                                  (&allegrex_n::MFLO),
                                  /* 19 */
                                  (&allegrex_n::MTLO),
                                  /* 20 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 21 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 22 */
                                  (&allegrex_n::CLZ),
                                  /* 23 */
                                  (&allegrex_n::CLO),
                                  /* 24 */
                                  (&allegrex_n::MULT),
                                  /* 25 */
                                  (&allegrex_n::MULTU),
                                  /* 26 */
                                  (&allegrex_n::DIV),
                                  /* 27 */
                                  (&allegrex_n::DIVU),
                                  /* 28 */
                                  (&allegrex_n::MADD),
                                  /* 29 */
                                  (&allegrex_n::MADDU),
                                  /* 30 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 31 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 32 */
                                  (&allegrex_n::ADD),
                                  /* 33 */
                                  (&allegrex_n::ADDU),
                                  /* 34 */
                                  (&allegrex_n::SUB),
                                  /* 35 */
                                  (&allegrex_n::SUBU),
                                  /* 36 */
                                  (&allegrex_n::AND),
                                  /* 37 */
                                  (&allegrex_n::OR),
                                  /* 38 */
                                  (&allegrex_n::XOR),
                                  /* 39 */
                                  (&allegrex_n::NOR),
                                  /* 40 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 41 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 42 */
                                  (&allegrex_n::SLT),
                                  /* 43 */
                                  (&allegrex_n::SLTU),
                                  /* 44 */
                                  (&allegrex_n::MAX),
                                  /* 45 */
                                  (&allegrex_n::MIN),
                                  /* 46 */
                                  (&allegrex_n::MSUB),
                                  /* 47 */
                                  (&allegrex_n::MSUBU),
                                  /* 48 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 49 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 50 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 51 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 52 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 53 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 54 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 55 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 56 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 57 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 58 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 59 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 60 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 61 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 62 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 63 */
                                  (&allegrex_n::reserved_instruction)
                                };
                                return table[(opcode >> 0) & 0x0000003f]->instruction(opcode);
                              };
                            }stub;
                            &stub;
                          }
                      ),
                      /* 1 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                static allegrex_instruction_s *table[4] =
                                {
                                  /* 0 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00100000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::BLTZ)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::BLTZAL)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 1 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00100000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::BGEZ)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::BGEZAL)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 2 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00100000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::BLTZL)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::BLTZALL)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 3 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00100000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::BGEZL)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::BGEZALL)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  )
                                };
                                return table[(opcode >> 16) & 0x00000003]->instruction(opcode);
                              };
                            }stub;
                            &stub;
                          }
                      ),
                      /* 2 */
                      (&allegrex_n::J),
                      /* 3 */
                      (&allegrex_n::JAL),
                      /* 4 */
                      (&allegrex_n::BEQ),
                      /* 5 */
                      (&allegrex_n::BNE),
                      /* 6 */
                      (&allegrex_n::BLEZ),
                      /* 7 */
                      (&allegrex_n::BGTZ),
                      /* 8 */
                      (&allegrex_n::ADDI),
                      /* 9 */
                      (&allegrex_n::ADDIU),
                      /* 10 */
                      (&allegrex_n::SLTI),
                      /* 11 */
                      (&allegrex_n::SLTIU),
                      /* 12 */
                      (&allegrex_n::ANDI),
                      /* 13 */
                      (&allegrex_n::ORI),
                      /* 14 */
                      (&allegrex_n::XORI),
                      /* 15 */
                      (&allegrex_n::LUI),
                      /* 16 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                static allegrex_instruction_s *table[4] =
                                {
                                  /* 0 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00000008) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::MFC0)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::ERET)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 1 */
                                  (&allegrex_n::CFC0),
                                  /* 2 */
                                  (&allegrex_n::MTC0),
                                  /* 3 */
                                  (&allegrex_n::CTC0)
                                };
                                return table[(opcode >> 22) & 0x00000003]->instruction(opcode);
                              };
                            }stub;
                            &stub;
                          }
                      ),
                      /* 17 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                static allegrex_instruction_s *table[8] =
                                {
                                  /* 0 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00400000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::MFC1)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::CFC1)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 1 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00400000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::MTC1)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::CTC1)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 2 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            static allegrex_instruction_s *table[4] =
                                            {
                                              /* 0 */
                                              (&allegrex_n::BC1F),
                                              /* 1 */
                                              (&allegrex_n::BC1T),
                                              /* 2 */
                                              (&allegrex_n::BC1FL),
                                              /* 3 */
                                              (&allegrex_n::BC1TL)
                                            };
                                            return table[(opcode >> 16) & 0x00000003]->instruction(opcode);
                                          };
                                        }stub;
                                        &stub;
                                      }),
                                  /* 3 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 4 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            static allegrex_instruction_s *table[32] =
                                            {
                                              /* 0 */
                                              (&allegrex_n::ADD_S),
                                              /* 1 */
                                              (&allegrex_n::SUB_S),
                                              /* 2 */
                                              (&allegrex_n::MUL_S),
                                              /* 3 */
                                              (&allegrex_n::DIV_S),
                                              /* 4 */
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00000020) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::SQRT_S)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::CVT_W_S)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  }
                                              ),
                                              /* 5 */
                                              (&allegrex_n::ABS_S),
                                              /* 6 */
                                              (&allegrex_n::MOV_S),
                                              /* 7 */
                                              (&allegrex_n::NEG_S),
                                              /* 8 */
                                              (&allegrex_n::reserved_instruction),
                                              /* 9 */
                                              (&allegrex_n::reserved_instruction),
                                              /* 10 */
                                              (&allegrex_n::reserved_instruction),
                                              /* 11 */
                                              (&allegrex_n::reserved_instruction),
                                              /* 12 */
                                              (&allegrex_n::ROUND_W_S),
                                              /* 13 */
                                              (&allegrex_n::TRUNC_W_S),
                                              /* 14 */
                                              (&allegrex_n::CEIL_W_S),
                                              /* 15 */
                                              (&allegrex_n::FLOOR_W_S),
                                              /* 16 */
                                              (&allegrex_n::C_COND_S),
                                              /* 17 */
                                              (&allegrex_n::C_COND_S),
                                              /* 18 */
                                              (&allegrex_n::C_COND_S),
                                              /* 19 */
                                              (&allegrex_n::C_COND_S),
                                              /* 20 */
                                              (&allegrex_n::C_COND_S),
                                              /* 21 */
                                              (&allegrex_n::C_COND_S),
                                              /* 22 */
                                              (&allegrex_n::C_COND_S),
                                              /* 23 */
                                              (&allegrex_n::C_COND_S),
                                              /* 24 */
                                              (&allegrex_n::C_COND_S),
                                              /* 25 */
                                              (&allegrex_n::C_COND_S),
                                              /* 26 */
                                              (&allegrex_n::C_COND_S),
                                              /* 27 */
                                              (&allegrex_n::C_COND_S),
                                              /* 28 */
                                              (&allegrex_n::C_COND_S),
                                              /* 29 */
                                              (&allegrex_n::C_COND_S),
                                              /* 30 */
                                              (&allegrex_n::C_COND_S),
                                              /* 31 */
                                              (&allegrex_n::C_COND_S)
                                            };
                                            return table[(opcode >> 0) & 0x0000001f]->instruction(opcode);
                                          };
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 5 */
                                  (&allegrex_n::CVT_S_W),
                                  /* 6 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 7 */
                                  (&allegrex_n::reserved_instruction)
                                };
                                return table[(opcode >> 23) & 0x00000007]->instruction(opcode);
                              };
                            }stub;
                            &stub;
                          }
                      ),
                      /* 18 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                if ((opcode & 0x00200000) == 0x00000000)
                                {
                                  return
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            static allegrex_instruction_s *table[4] =
                                            {
                                              /* 0 */
                                              (&allegrex_n::BVF),
                                              /* 1 */
                                              (&allegrex_n::BVT),
                                              /* 2 */
                                              (&allegrex_n::BVFL),
                                              /* 3 */
                                              (&allegrex_n::BVTL)
                                            };
                                            return table[(opcode >> 16) & 0x00000003]->instruction(opcode);
                                          };
                                        }stub;
                                        &stub;
                                      })->instruction(opcode);
                                }
                                else
                                {
                                  return
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00000080) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00800000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::MFV)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::MTV)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00800000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::MFVC)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::MTVC)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      })->instruction(opcode);
                                }
                              }
                            }stub;
                            &stub;
                          }
                      ),
                      /* 19 */
                      (&allegrex_n::reserved_instruction),
                      /* 20 */
                      (&allegrex_n::BEQL),
                      /* 21 */
                      (&allegrex_n::BNEL),
                      /* 22 */
                      (&allegrex_n::BLEZL),
                      /* 23 */
                      (&allegrex_n::BGTZL),
                      /* 24 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                static allegrex_instruction_s *table[4] =
                                {
                                  /* 0 */
                                  (&allegrex_n::VADD),
                                  /* 1 */
                                  (&allegrex_n::VSUB),
                                  /* 2 */
                                  (&allegrex_n::VSBN),
                                  /* 3 */
                                  (&allegrex_n::VDIV)
                                };
                                return table[(opcode >> 23) & 0x00000003]->instruction(opcode);
                              };
                            }stub;
                            &stub;
                          }
                      ),
                      /* 25 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                static allegrex_instruction_s *table[8] =
                                {
                                  /* 0 */
                                  (&allegrex_n::VMUL),
                                  /* 1 */
                                  (&allegrex_n::VDOT),
                                  /* 2 */
                                  (&allegrex_n::VSCL),
                                  /* 3 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 4 */
                                  (&allegrex_n::VHDP),
                                  /* 5 */
                                  (&allegrex_n::VDET),
                                  /* 6 */
                                  (&allegrex_n::VCRS),
                                  /* 7 */
                                  (&allegrex_n::reserved_instruction)
                                };
                                return table[(opcode >> 23) & 0x00000007]->instruction(opcode);
                              };
                            }stub;
                            &stub;
                          }
                      ),
                      /* 26 */
                      (&allegrex_n::reserved_instruction),
                      /* 27 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                static allegrex_instruction_s *table[8] =
                                {
                                  /* 0 */
                                  (&allegrex_n::VCMP),
                                  /* 1 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 2 */
                                  (&allegrex_n::VMIN),
                                  /* 3 */
                                  (&allegrex_n::VMAX),
                                  /* 4 */
                                  (&allegrex_n::VSLT),
                                  /* 5 */
                                  (&allegrex_n::VSCMP),
                                  /* 6 */
                                  (&allegrex_n::VSGE),
                                  /* 7 */
                                  (&allegrex_n::reserved_instruction)
                                };
                                return table[(opcode >> 23) & 0x00000007]->instruction(opcode);
                              };
                            }stub;
                            &stub;
                          }
                      ),
                      /* 28 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                if ((opcode & 0x00000002) == 0x00000000)
                                {
                                  return
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00000004) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::HALT)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::MFIC)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      })->instruction(opcode);
                                }
                                else
                                {
                                  return
                                  (&allegrex_n::MTIC)->instruction(opcode);
                                }
                              }
                            }stub;
                            &stub;
                          }
                      ),
                      /* 29 */
                      (&allegrex_n::reserved_instruction),
                      /* 30 */
                      (&allegrex_n::reserved_instruction),
                      /* 31 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                if ((opcode & 0x00000021) == 0x00000020)
                                {
                                  return
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00000080) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00000100) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::SEH)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::BITREV)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00000040) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::WSBH)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::WSBW)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      })->instruction(opcode);
                                }
                                else
                                {
                                  return
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00000001) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00000004) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::EXT)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::INS)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::SEB)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      })->instruction(opcode);
                                }
                              }
                            }stub;
                            &stub;
                          }
                      ),
                      /* 32 */
                      (&allegrex_n::LB),
                      /* 33 */
                      (&allegrex_n::LH),
                      /* 34 */
                      (&allegrex_n::LWL),
                      /* 35 */
                      (&allegrex_n::LW),
                      /* 36 */
                      (&allegrex_n::LBU),
                      /* 37 */
                      (&allegrex_n::LHU),
                      /* 38 */
                      (&allegrex_n::LWR),
                      /* 39 */
                      (&allegrex_n::reserved_instruction),
                      /* 40 */
                      (&allegrex_n::SB),
                      /* 41 */
                      (&allegrex_n::SH),
                      /* 42 */
                      (&allegrex_n::SWL),
                      /* 43 */
                      (&allegrex_n::SW),
                      /* 44 */
                      (&allegrex_n::reserved_instruction),
                      /* 45 */
                      (&allegrex_n::reserved_instruction),
                      /* 46 */
                      (&allegrex_n::SWR),
                      /* 47 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                static allegrex_instruction_s *table[16] =
                                {
                                  /* 0 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 1 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 2 */
                                  (&allegrex_n::ICACHE_INDEX_INVALIDATE),
                                  /* 3 */
                                  (&allegrex_n::ICACHE_INDEX_UNLOCK),
                                  /* 4 */
                                  (&allegrex_n::ICACHE_HIT_INVALIDATE),
                                  /* 5 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00010000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::ICACHE_FILL)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::ICACHE_FILL_WITH_LOCK)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 6 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 7 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 8 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 9 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 10 */
                                  (&allegrex_n::DCACHE_INDEX_WRITEBACK_INVALIDATE),
                                  /* 11 */
                                  (&allegrex_n::DCACHE_INDEX_UNLOCK),
                                  /* 12 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00010000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::DCACHE_CREATE_DIRTY_EXCLUSIVE)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::DCACHE_HIT_INVALIDATE)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 13 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00010000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::DCACHE_HIT_WRITEBACK)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::DCACHE_HIT_WRITEBACK_INVALIDATE)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 14 */
                                  (&allegrex_n::DCACHE_CREATE_DIRTY_EXCLUSIVE_WITH_LOCK),
                                  /* 15 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00010000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::DCACHE_FILL)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::DCACHE_FILL_WITH_LOCK)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  )
                                };
                                return table[(opcode >> 17) & 0x0000000f]->instruction(opcode);
                              };
                            }stub;
                            &stub;
                          }),
                      /* 48 */
                      (&allegrex_n::LL),
                      /* 49 */
                      (&allegrex_n::LWC1),
                      /* 50 */
                      (&allegrex_n::LVS),
                      /* 51 */
                      (&allegrex_n::reserved_instruction),
                      /* 52 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                static allegrex_instruction_s *table[32] =
                                {
                                  /* 0 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VMOV)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VNEG)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VABS)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VIDT)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(int opcode)
                                                                              {
                                                                                if ((opcode & 0x01800000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex_n::VF2IN)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (
                                                                                      {
                                                                                        static struct stub_s : allegrex_instruction_unknown_s
                                                                                        {
                                                                                          virtual allegrex_instruction_s *instruction(int opcode)
                                                                                          {
                                                                                            if ((opcode & 0x01000000) == 0x00000000)
                                                                                            {
                                                                                              return
                                                                                              (&allegrex_n::VI2F)->instruction(opcode);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              return
                                                                                              (&allegrex_n::VWBN)->instruction(opcode);
                                                                                            }
                                                                                          }
                                                                                        }stub;
                                                                                        &stub;
                                                                                      })->instruction(opcode);
                                                                                }
                                                                              }
                                                                            }stub;
                                                                            &stub;
                                                                          })->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 1 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VSAT0)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VZERO)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VSAT1)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VONE)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(int opcode)
                                                                              {
                                                                                if ((opcode & 0x01800000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex_n::VF2IN)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (
                                                                                      {
                                                                                        static struct stub_s : allegrex_instruction_unknown_s
                                                                                        {
                                                                                          virtual allegrex_instruction_s *instruction(int opcode)
                                                                                          {
                                                                                            if ((opcode & 0x01000000) == 0x00000000)
                                                                                            {
                                                                                              return
                                                                                              (&allegrex_n::VI2F)->instruction(opcode);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              return
                                                                                              (&allegrex_n::VWBN)->instruction(opcode);
                                                                                            }
                                                                                          }
                                                                                        }stub;
                                                                                        &stub;
                                                                                      })->instruction(opcode);
                                                                                }
                                                                              }
                                                                            }stub;
                                                                            &stub;
                                                                          })->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 2 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x01800000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VF2IN)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VI2F)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VWBN)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 3 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x01800000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VF2IN)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VI2F)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VWBN)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 4 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VRCP)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VSIN)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VRSQ)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VCOS)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(int opcode)
                                                                              {
                                                                                if ((opcode & 0x01800000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex_n::VF2IN)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (
                                                                                      {
                                                                                        static struct stub_s : allegrex_instruction_unknown_s
                                                                                        {
                                                                                          virtual allegrex_instruction_s *instruction(int opcode)
                                                                                          {
                                                                                            if ((opcode & 0x01000000) == 0x00000000)
                                                                                            {
                                                                                              return
                                                                                              (&allegrex_n::VI2F)->instruction(opcode);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              return
                                                                                              (&allegrex_n::VWBN)->instruction(opcode);
                                                                                            }
                                                                                          }
                                                                                        }stub;
                                                                                        &stub;
                                                                                      })->instruction(opcode);
                                                                                }
                                                                              }
                                                                            }stub;
                                                                            &stub;
                                                                          })->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 5 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VEXP2)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VSQRT)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VLOG2)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VASIN)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(int opcode)
                                                                              {
                                                                                if ((opcode & 0x01800000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex_n::VF2IN)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (
                                                                                      {
                                                                                        static struct stub_s : allegrex_instruction_unknown_s
                                                                                        {
                                                                                          virtual allegrex_instruction_s *instruction(int opcode)
                                                                                          {
                                                                                            if ((opcode & 0x01000000) == 0x00000000)
                                                                                            {
                                                                                              return
                                                                                              (&allegrex_n::VI2F)->instruction(opcode);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              return
                                                                                              (&allegrex_n::VWBN)->instruction(opcode);
                                                                                            }
                                                                                          }
                                                                                        }stub;
                                                                                        &stub;
                                                                                      })->instruction(opcode);
                                                                                }
                                                                              }
                                                                            }stub;
                                                                            &stub;
                                                                          })->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 6 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02020000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VNRCP)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x02000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VNSIN)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x01800000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VF2IN)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(int opcode)
                                                                              {
                                                                                if ((opcode & 0x01000000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex_n::VI2F)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (&allegrex_n::VWBN)->instruction(opcode);
                                                                                }
                                                                              }
                                                                            }stub;
                                                                            &stub;
                                                                          })->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 7 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VREXP2)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x01800000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VF2IN)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x01000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VI2F)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VWBN)->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 8 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VRNDS)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VRNDF1)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VRNDI)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VRNDF2)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(int opcode)
                                                                              {
                                                                                if ((opcode & 0x01800000) == 0x00800000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex_n::VCMOVT)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (
                                                                                      {
                                                                                        static struct stub_s : allegrex_instruction_unknown_s
                                                                                        {
                                                                                          virtual allegrex_instruction_s *instruction(int opcode)
                                                                                          {
                                                                                            if ((opcode & 0x01000000) == 0x00000000)
                                                                                            {
                                                                                              return
                                                                                              (&allegrex_n::VF2IZ)->instruction(opcode);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              return
                                                                                              (&allegrex_n::VWBN)->instruction(opcode);
                                                                                            }
                                                                                          }
                                                                                        }stub;
                                                                                        &stub;
                                                                                      })->instruction(opcode);
                                                                                }
                                                                              }
                                                                            }stub;
                                                                            &stub;
                                                                          })->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 9 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x01800000) == 0x00800000)
                                            {
                                              return
                                              (&allegrex_n::VCMOVT)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VF2IZ)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VWBN)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 10 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x01800000) == 0x00800000)
                                            {
                                              return
                                              (&allegrex_n::VCMOVF)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VF2IZ)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VWBN)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 11 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x01800000) == 0x00800000)
                                            {
                                              return
                                              (&allegrex_n::VCMOVF)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VF2IZ)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VWBN)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 12 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VF2H)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x02000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VH2F)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x01000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VF2IZ)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VWBN)->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 13 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VSBZ)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x02000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VLGB)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x01000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VF2IZ)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VWBN)->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 14 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VUC2I)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VUS2I)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VC2I)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VS2I)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(int opcode)
                                                                              {
                                                                                if ((opcode & 0x01000000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex_n::VF2IZ)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (&allegrex_n::VWBN)->instruction(opcode);
                                                                                }
                                                                              }
                                                                            }stub;
                                                                            &stub;
                                                                          })->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 15 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VI2UC)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VI2US)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VI2C)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VI2S)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(int opcode)
                                                                              {
                                                                                if ((opcode & 0x01000000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex_n::VF2IZ)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (&allegrex_n::VWBN)->instruction(opcode);
                                                                                }
                                                                              }
                                                                            }stub;
                                                                            &stub;
                                                                          })->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 16 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VSRT1)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VBFY1)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VSRT2)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VBFY2)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(int opcode)
                                                                              {
                                                                                if ((opcode & 0x01000000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex_n::VF2IU)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (&allegrex_n::VWBN)->instruction(opcode);
                                                                                }
                                                                              }
                                                                            }stub;
                                                                            &stub;
                                                                          })->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 17 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VOCP)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VFAD)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VSOCP)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VAVG)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(int opcode)
                                                                              {
                                                                                if ((opcode & 0x01000000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex_n::VF2IU)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (&allegrex_n::VWBN)->instruction(opcode);
                                                                                }
                                                                              }
                                                                            }stub;
                                                                            &stub;
                                                                          })->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 18 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VSRT3)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x02000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VSRT4)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x01000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VF2IU)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VWBN)->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 19 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x01000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VF2IU)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::VWBN)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 20 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02000080) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VMFVC)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x02000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VMTVC)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x01000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VF2IU)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VWBN)->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 21 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x01000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VF2IU)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::VWBN)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 22 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00010000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VT4444)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VT5650)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x02000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VT5551)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x01000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VF2IU)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VWBN)->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 23 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x01000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VF2IU)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::VWBN)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 24 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VWBN)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 25 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VWBN)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 26 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VWBN)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 27 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VWBN)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 28 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VWBN)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 29 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VWBN)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 30 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VWBN)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 31 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VWBN)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  )
                                };
                                return table[(opcode >> 18) & 0x0000001f]->instruction(opcode);
                              };
                            }stub;
                            &stub;
                          }
                      ),
                      /* 53 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                if ((opcode & 0x00000002) == 0x00000000)
                                {
                                  return
                                  (&allegrex_n::LVLQ)->instruction(opcode);
                                }
                                else
                                {
                                  return
                                  (&allegrex_n::LVRQ)->instruction(opcode);
                                }
                              }
                            }stub;
                            &stub;
                          }
                      ),
                      /* 54 */
                      (&allegrex_n::LVQ),
                      /* 55 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                static allegrex_instruction_s *table[4] =
                                {
                                  /* 0 */
                                  (&allegrex_n::VPFXS),
                                  /* 1 */
                                  (&allegrex_n::VPFXT),
                                  /* 2 */
                                  (&allegrex_n::VPFXD),
                                  /* 3 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00800000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VIIM)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::VFIM)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  )
                                };
                                return table[(opcode >> 24) & 0x00000003]->instruction(opcode);
                              };
                            }stub;
                            &stub;
                          }
                      ),
                      /* 56 */
                      (&allegrex_n::SC),
                      /* 57 */
                      (&allegrex_n::SWC1),
                      /* 58 */
                      (&allegrex_n::SVS),
                      /* 59 */
                      (&allegrex_n::reserved_instruction),
                      /* 60 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                static allegrex_instruction_s *table[8] =
                                {
                                  /* 0 */
                                  (&allegrex_n::VMMUL),
                                  /* 1 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00000080) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VHTFM2)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::VTFM2)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 2 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00000080) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VTFM3)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::VHTFM3)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 3 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00000080) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VHTFM4)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::VTFM4)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 4 */
                                  (&allegrex_n::VMSCL),
                                  /* 5 */
                                  (&allegrex_n::VQMUL),
                                  /* 6 */
                                  (&allegrex_n::reserved_instruction),
                                  /* 7 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00210000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex_n::VMMOV)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VMZERO)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(int opcode)
                                                      {
                                                        if ((opcode & 0x00200000) == 0x00000000)
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(int opcode)
                                                                  {
                                                                    if ((opcode & 0x00040000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VMIDT)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (&allegrex_n::VMONE)->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex_n::VROT)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  )
                                };
                                return table[(opcode >> 23) & 0x00000007]->instruction(opcode);
                              };
                            }stub;
                            &stub;
                          }
                      ),
                      /* 61 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                if ((opcode & 0x00000002) == 0x00000000)
                                {
                                  return
                                  (&allegrex_n::SVLQ)->instruction(opcode);
                                }
                                else
                                {
                                  return
                                  (&allegrex_n::SVRQ)->instruction(opcode);
                                }
                              }
                            }stub;
                            &stub;
                          }
                      ),
                      /* 62 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                if ((opcode & 0x00000002) == 0x00000000)
                                {
                                  return
                                  (&allegrex_n::SVQ)->instruction(opcode);
                                }
                                else
                                {
                                  return
                                  (&allegrex_n::SWB)->instruction(opcode);
                                }
                              }
                            }stub;
                            &stub;
                          }
                      ),
                      /* 63 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(int opcode)
                              {
                                if ((opcode & 0x00000001) == 0x00000000)
                                {
                                  return
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(int opcode)
                                          {
                                            if ((opcode & 0x00000020) == 0x00000000)
                                            {
                                              return
                                              (&allegrex_n::VNOP)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex_n::VSYNC)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      })->instruction(opcode);
                                }
                                else
                                {
                                  return
                                  (&allegrex_n::VFLUSH)->instruction(opcode);
                                }
                              }
                            }stub;
                            &stub;
                          }
                      )
                    };
                    return table[(opcode >> 26) & 0x0000003f]->instruction(opcode);
                  };
                }stub;
                &stub;
              }
          );
  return root->instruction(opcode);
}

