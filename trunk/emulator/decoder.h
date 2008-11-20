allegrex_instruction_s *allegrex::decode_instruction(u32 opcode)
{
  static allegrex_instruction_s
      *root =
          (
              {
                static struct stub_s : allegrex_instruction_unknown_s
                {
                  virtual allegrex_instruction_s *instruction(u32 opcode)
                  {
                    static allegrex_instruction_s *table[64] =
                    {
                      /* 0 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                static allegrex_instruction_s *table[64] =
                                {
                                  /* 0 */
                                  (&allegrex::SLL),
                                  /* 1 */
                                  (&allegrex::reserved_instruction),
                                  /* 2 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00200000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::SRL)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::ROTR)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 3 */
                                  (&allegrex::SRA),
                                  /* 4 */
                                  (&allegrex::SLLV),
                                  /* 5 */
                                  (&allegrex::reserved_instruction),
                                  /* 6 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00000040) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::SRLV)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::ROTRV)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 7 */
                                  (&allegrex::SRAV),
                                  /* 8 */
                                  (&allegrex::JR),
                                  /* 9 */
                                  (&allegrex::JALR),
                                  /* 10 */
                                  (&allegrex::MOVZ),
                                  /* 11 */
                                  (&allegrex::MOVN),
                                  /* 12 */
                                  (&allegrex::SYSCALL),
                                  /* 13 */
                                  (&allegrex::BREAK),
                                  /* 14 */
                                  (&allegrex::reserved_instruction),
                                  /* 15 */
                                  (&allegrex::SYNC),
                                  /* 16 */
                                  (&allegrex::MFHI),
                                  /* 17 */
                                  (&allegrex::MTHI),
                                  /* 18 */
                                  (&allegrex::MFLO),
                                  /* 19 */
                                  (&allegrex::MTLO),
                                  /* 20 */
                                  (&allegrex::reserved_instruction),
                                  /* 21 */
                                  (&allegrex::reserved_instruction),
                                  /* 22 */
                                  (&allegrex::CLZ),
                                  /* 23 */
                                  (&allegrex::CLO),
                                  /* 24 */
                                  (&allegrex::MULT),
                                  /* 25 */
                                  (&allegrex::MULTU),
                                  /* 26 */
                                  (&allegrex::DIV),
                                  /* 27 */
                                  (&allegrex::DIVU),
                                  /* 28 */
                                  (&allegrex::MADD),
                                  /* 29 */
                                  (&allegrex::MADDU),
                                  /* 30 */
                                  (&allegrex::reserved_instruction),
                                  /* 31 */
                                  (&allegrex::reserved_instruction),
                                  /* 32 */
                                  (&allegrex::ADD),
                                  /* 33 */
                                  (&allegrex::ADDU),
                                  /* 34 */
                                  (&allegrex::SUB),
                                  /* 35 */
                                  (&allegrex::SUBU),
                                  /* 36 */
                                  (&allegrex::AND),
                                  /* 37 */
                                  (&allegrex::OR),
                                  /* 38 */
                                  (&allegrex::XOR),
                                  /* 39 */
                                  (&allegrex::NOR),
                                  /* 40 */
                                  (&allegrex::reserved_instruction),
                                  /* 41 */
                                  (&allegrex::reserved_instruction),
                                  /* 42 */
                                  (&allegrex::SLT),
                                  /* 43 */
                                  (&allegrex::SLTU),
                                  /* 44 */
                                  (&allegrex::MAX),
                                  /* 45 */
                                  (&allegrex::MIN),
                                  /* 46 */
                                  (&allegrex::MSUB),
                                  /* 47 */
                                  (&allegrex::MSUBU),
                                  /* 48 */
                                  (&allegrex::reserved_instruction),
                                  /* 49 */
                                  (&allegrex::reserved_instruction),
                                  /* 50 */
                                  (&allegrex::reserved_instruction),
                                  /* 51 */
                                  (&allegrex::reserved_instruction),
                                  /* 52 */
                                  (&allegrex::reserved_instruction),
                                  /* 53 */
                                  (&allegrex::reserved_instruction),
                                  /* 54 */
                                  (&allegrex::reserved_instruction),
                                  /* 55 */
                                  (&allegrex::reserved_instruction),
                                  /* 56 */
                                  (&allegrex::reserved_instruction),
                                  /* 57 */
                                  (&allegrex::reserved_instruction),
                                  /* 58 */
                                  (&allegrex::reserved_instruction),
                                  /* 59 */
                                  (&allegrex::reserved_instruction),
                                  /* 60 */
                                  (&allegrex::reserved_instruction),
                                  /* 61 */
                                  (&allegrex::reserved_instruction),
                                  /* 62 */
                                  (&allegrex::reserved_instruction),
                                  /* 63 */
                                  (&allegrex::reserved_instruction)
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
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                static allegrex_instruction_s *table[4] =
                                {
                                  /* 0 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00100000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::BLTZ)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::BLTZAL)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00100000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::BGEZ)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::BGEZAL)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00100000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::BLTZL)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::BLTZALL)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00100000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::BGEZL)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::BGEZALL)->instruction(opcode);
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
                      (&allegrex::J),
                      /* 3 */
                      (&allegrex::JAL),
                      /* 4 */
                      (&allegrex::BEQ),
                      /* 5 */
                      (&allegrex::BNE),
                      /* 6 */
                      (&allegrex::BLEZ),
                      /* 7 */
                      (&allegrex::BGTZ),
                      /* 8 */
                      (&allegrex::ADDI),
                      /* 9 */
                      (&allegrex::ADDIU),
                      /* 10 */
                      (&allegrex::SLTI),
                      /* 11 */
                      (&allegrex::SLTIU),
                      /* 12 */
                      (&allegrex::ANDI),
                      /* 13 */
                      (&allegrex::ORI),
                      /* 14 */
                      (&allegrex::XORI),
                      /* 15 */
                      (&allegrex::LUI),
                      /* 16 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                static allegrex_instruction_s *table[4] =
                                {
                                  /* 0 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00000008) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::MFC0)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::ERET)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 1 */
                                  (&allegrex::CFC0),
                                  /* 2 */
                                  (&allegrex::MTC0),
                                  /* 3 */
                                  (&allegrex::CTC0)
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
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                static allegrex_instruction_s *table[8] =
                                {
                                  /* 0 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00400000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::MFC1)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::CFC1)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00400000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::MTC1)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::CTC1)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            static allegrex_instruction_s *table[4] =
                                            {
                                              /* 0 */
                                              (&allegrex::BC1F),
                                              /* 1 */
                                              (&allegrex::BC1T),
                                              /* 2 */
                                              (&allegrex::BC1FL),
                                              /* 3 */
                                              (&allegrex::BC1TL)
                                            };
                                            return table[(opcode >> 16) & 0x00000003]->instruction(opcode);
                                          };
                                        }stub;
                                        &stub;
                                      }),
                                  /* 3 */
                                  (&allegrex::reserved_instruction),
                                  /* 4 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            static allegrex_instruction_s *table[32] =
                                            {
                                              /* 0 */
                                              (&allegrex::ADD_S),
                                              /* 1 */
                                              (&allegrex::SUB_S),
                                              /* 2 */
                                              (&allegrex::MUL_S),
                                              /* 3 */
                                              (&allegrex::DIV_S),
                                              /* 4 */
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00000020) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::SQRT_S)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::CVT_W_S)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  }
                                              ),
                                              /* 5 */
                                              (&allegrex::ABS_S),
                                              /* 6 */
                                              (&allegrex::MOV_S),
                                              /* 7 */
                                              (&allegrex::NEG_S),
                                              /* 8 */
                                              (&allegrex::reserved_instruction),
                                              /* 9 */
                                              (&allegrex::reserved_instruction),
                                              /* 10 */
                                              (&allegrex::reserved_instruction),
                                              /* 11 */
                                              (&allegrex::reserved_instruction),
                                              /* 12 */
                                              (&allegrex::ROUND_W_S),
                                              /* 13 */
                                              (&allegrex::TRUNC_W_S),
                                              /* 14 */
                                              (&allegrex::CEIL_W_S),
                                              /* 15 */
                                              (&allegrex::FLOOR_W_S),
                                              /* 16 */
                                              (&allegrex::C_COND_S),
                                              /* 17 */
                                              (&allegrex::C_COND_S),
                                              /* 18 */
                                              (&allegrex::C_COND_S),
                                              /* 19 */
                                              (&allegrex::C_COND_S),
                                              /* 20 */
                                              (&allegrex::C_COND_S),
                                              /* 21 */
                                              (&allegrex::C_COND_S),
                                              /* 22 */
                                              (&allegrex::C_COND_S),
                                              /* 23 */
                                              (&allegrex::C_COND_S),
                                              /* 24 */
                                              (&allegrex::C_COND_S),
                                              /* 25 */
                                              (&allegrex::C_COND_S),
                                              /* 26 */
                                              (&allegrex::C_COND_S),
                                              /* 27 */
                                              (&allegrex::C_COND_S),
                                              /* 28 */
                                              (&allegrex::C_COND_S),
                                              /* 29 */
                                              (&allegrex::C_COND_S),
                                              /* 30 */
                                              (&allegrex::C_COND_S),
                                              /* 31 */
                                              (&allegrex::C_COND_S)
                                            };
                                            return table[(opcode >> 0) & 0x0000001f]->instruction(opcode);
                                          };
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 5 */
                                  (&allegrex::CVT_S_W),
                                  /* 6 */
                                  (&allegrex::reserved_instruction),
                                  /* 7 */
                                  (&allegrex::reserved_instruction)
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
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                if ((opcode & 0x00200000) == 0x00000000)
                                {
                                  return
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            static allegrex_instruction_s *table[4] =
                                            {
                                              /* 0 */
                                              (&allegrex::BVF),
                                              /* 1 */
                                              (&allegrex::BVT),
                                              /* 2 */
                                              (&allegrex::BVFL),
                                              /* 3 */
                                              (&allegrex::BVTL)
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00000080) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00800000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::MFV)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::MTV)->instruction(opcode);
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
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00800000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::MFVC)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::MTVC)->instruction(opcode);
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
                      (&allegrex::reserved_instruction),
                      /* 20 */
                      (&allegrex::BEQL),
                      /* 21 */
                      (&allegrex::BNEL),
                      /* 22 */
                      (&allegrex::BLEZL),
                      /* 23 */
                      (&allegrex::BGTZL),
                      /* 24 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                static allegrex_instruction_s *table[4] =
                                {
                                  /* 0 */
                                  (&allegrex::VADD),
                                  /* 1 */
                                  (&allegrex::VSUB),
                                  /* 2 */
                                  (&allegrex::VSBN),
                                  /* 3 */
                                  (&allegrex::VDIV)
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
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                static allegrex_instruction_s *table[8] =
                                {
                                  /* 0 */
                                  (&allegrex::VMUL),
                                  /* 1 */
                                  (&allegrex::VDOT),
                                  /* 2 */
                                  (&allegrex::VSCL),
                                  /* 3 */
                                  (&allegrex::reserved_instruction),
                                  /* 4 */
                                  (&allegrex::VHDP),
                                  /* 5 */
                                  (&allegrex::VDET),
                                  /* 6 */
                                  (&allegrex::VCRS),
                                  /* 7 */
                                  (&allegrex::reserved_instruction)
                                };
                                return table[(opcode >> 23) & 0x00000007]->instruction(opcode);
                              };
                            }stub;
                            &stub;
                          }
                      ),
                      /* 26 */
                      (&allegrex::reserved_instruction),
                      /* 27 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                static allegrex_instruction_s *table[8] =
                                {
                                  /* 0 */
                                  (&allegrex::VCMP),
                                  /* 1 */
                                  (&allegrex::reserved_instruction),
                                  /* 2 */
                                  (&allegrex::VMIN),
                                  /* 3 */
                                  (&allegrex::VMAX),
                                  /* 4 */
                                  (&allegrex::VSLT),
                                  /* 5 */
                                  (&allegrex::VSCMP),
                                  /* 6 */
                                  (&allegrex::VSGE),
                                  /* 7 */
                                  (&allegrex::reserved_instruction)
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
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                if ((opcode & 0x00000002) == 0x00000000)
                                {
                                  return
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00000004) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::HALT)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::MFIC)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      })->instruction(opcode);
                                }
                                else
                                {
                                  return
                                  (&allegrex::MTIC)->instruction(opcode);
                                }
                              }
                            }stub;
                            &stub;
                          }
                      ),
                      /* 29 */
                      (&allegrex::reserved_instruction),
                      /* 30 */
                      (&allegrex::reserved_instruction),
                      /* 31 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                if ((opcode & 0x00000021) == 0x00000020)
                                {
                                  return
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00000080) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00000100) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::SEH)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::BITREV)->instruction(opcode);
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
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00000040) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::WSBH)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::WSBW)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00000001) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00000004) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::EXT)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::INS)->instruction(opcode);
                                                        }
                                                      }
                                                    }stub;
                                                    &stub;
                                                  })->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::SEB)->instruction(opcode);
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
                      (&allegrex::LB),
                      /* 33 */
                      (&allegrex::LH),
                      /* 34 */
                      (&allegrex::LWL),
                      /* 35 */
                      (&allegrex::LW),
                      /* 36 */
                      (&allegrex::LBU),
                      /* 37 */
                      (&allegrex::LHU),
                      /* 38 */
                      (&allegrex::LWR),
                      /* 39 */
                      (&allegrex::reserved_instruction),
                      /* 40 */
                      (&allegrex::SB),
                      /* 41 */
                      (&allegrex::SH),
                      /* 42 */
                      (&allegrex::SWL),
                      /* 43 */
                      (&allegrex::SW),
                      /* 44 */
                      (&allegrex::reserved_instruction),
                      /* 45 */
                      (&allegrex::reserved_instruction),
                      /* 46 */
                      (&allegrex::SWR),
                      /* 47 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                static allegrex_instruction_s *table[16] =
                                {
                                  /* 0 */
                                  (&allegrex::reserved_instruction),
                                  /* 1 */
                                  (&allegrex::reserved_instruction),
                                  /* 2 */
                                  (&allegrex::ICACHE_INDEX_INVALIDATE),
                                  /* 3 */
                                  (&allegrex::ICACHE_INDEX_UNLOCK),
                                  /* 4 */
                                  (&allegrex::ICACHE_HIT_INVALIDATE),
                                  /* 5 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00010000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::ICACHE_FILL)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::ICACHE_FILL_WITH_LOCK)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 6 */
                                  (&allegrex::reserved_instruction),
                                  /* 7 */
                                  (&allegrex::reserved_instruction),
                                  /* 8 */
                                  (&allegrex::reserved_instruction),
                                  /* 9 */
                                  (&allegrex::reserved_instruction),
                                  /* 10 */
                                  (&allegrex::DCACHE_INDEX_WRITEBACK_INVALIDATE),
                                  /* 11 */
                                  (&allegrex::DCACHE_INDEX_UNLOCK),
                                  /* 12 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00010000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::DCACHE_CREATE_DIRTY_EXCLUSIVE)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::DCACHE_HIT_INVALIDATE)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00010000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::DCACHE_HIT_WRITEBACK)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::DCACHE_HIT_WRITEBACK_INVALIDATE)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 14 */
                                  (&allegrex::DCACHE_CREATE_DIRTY_EXCLUSIVE_WITH_LOCK),
                                  /* 15 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00010000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::DCACHE_FILL)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::DCACHE_FILL_WITH_LOCK)->instruction(opcode);
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
                      (&allegrex::LL),
                      /* 49 */
                      (&allegrex::LWC1),
                      /* 50 */
                      (&allegrex::LVS),
                      /* 51 */
                      (&allegrex::reserved_instruction),
                      /* 52 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                static allegrex_instruction_s *table[32] =
                                {
                                  /* 0 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VMOV)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VNEG)->instruction(opcode);
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
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VABS)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VIDT)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                              {
                                                                                if ((opcode & 0x01800000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex::VF2IN)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (
                                                                                      {
                                                                                        static struct stub_s : allegrex_instruction_unknown_s
                                                                                        {
                                                                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                                          {
                                                                                            if ((opcode & 0x01000000) == 0x00000000)
                                                                                            {
                                                                                              return
                                                                                              (&allegrex::VI2F)->instruction(opcode);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              return
                                                                                              (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VSAT0)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VZERO)->instruction(opcode);
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
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VSAT1)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VONE)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                              {
                                                                                if ((opcode & 0x01800000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex::VF2IN)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (
                                                                                      {
                                                                                        static struct stub_s : allegrex_instruction_unknown_s
                                                                                        {
                                                                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                                          {
                                                                                            if ((opcode & 0x01000000) == 0x00000000)
                                                                                            {
                                                                                              return
                                                                                              (&allegrex::VI2F)->instruction(opcode);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              return
                                                                                              (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x01800000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VF2IN)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VI2F)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x01800000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VF2IN)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VI2F)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VRCP)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VSIN)->instruction(opcode);
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
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VRSQ)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VCOS)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                              {
                                                                                if ((opcode & 0x01800000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex::VF2IN)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (
                                                                                      {
                                                                                        static struct stub_s : allegrex_instruction_unknown_s
                                                                                        {
                                                                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                                          {
                                                                                            if ((opcode & 0x01000000) == 0x00000000)
                                                                                            {
                                                                                              return
                                                                                              (&allegrex::VI2F)->instruction(opcode);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              return
                                                                                              (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VEXP2)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VSQRT)->instruction(opcode);
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
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VLOG2)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VASIN)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                              {
                                                                                if ((opcode & 0x01800000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex::VF2IN)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (
                                                                                      {
                                                                                        static struct stub_s : allegrex_instruction_unknown_s
                                                                                        {
                                                                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                                          {
                                                                                            if ((opcode & 0x01000000) == 0x00000000)
                                                                                            {
                                                                                              return
                                                                                              (&allegrex::VI2F)->instruction(opcode);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              return
                                                                                              (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02020000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VNRCP)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x02000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VNSIN)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x01800000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VF2IN)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                              {
                                                                                if ((opcode & 0x01000000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex::VI2F)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VREXP2)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x01800000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VF2IN)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x01000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VI2F)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VRNDS)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VRNDF1)->instruction(opcode);
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
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VRNDI)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VRNDF2)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                              {
                                                                                if ((opcode & 0x01800000) == 0x00800000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex::VCMOVT)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (
                                                                                      {
                                                                                        static struct stub_s : allegrex_instruction_unknown_s
                                                                                        {
                                                                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                                          {
                                                                                            if ((opcode & 0x01000000) == 0x00000000)
                                                                                            {
                                                                                              return
                                                                                              (&allegrex::VF2IZ)->instruction(opcode);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              return
                                                                                              (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x01800000) == 0x00800000)
                                            {
                                              return
                                              (&allegrex::VCMOVT)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VF2IZ)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x01800000) == 0x00800000)
                                            {
                                              return
                                              (&allegrex::VCMOVF)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VF2IZ)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x01800000) == 0x00800000)
                                            {
                                              return
                                              (&allegrex::VCMOVF)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VF2IZ)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VF2H)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x02000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VH2F)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x01000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VF2IZ)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VSBZ)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x02000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VLGB)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x01000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VF2IZ)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VUC2I)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VUS2I)->instruction(opcode);
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
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VC2I)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VS2I)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                              {
                                                                                if ((opcode & 0x01000000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex::VF2IZ)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VI2UC)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VI2US)->instruction(opcode);
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
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VI2C)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VI2S)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                              {
                                                                                if ((opcode & 0x01000000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex::VF2IZ)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VSRT1)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VBFY1)->instruction(opcode);
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
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VSRT2)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VBFY2)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                              {
                                                                                if ((opcode & 0x01000000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex::VF2IU)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VOCP)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VFAD)->instruction(opcode);
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
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x02020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VSOCP)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x02000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VAVG)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (
                                                                          {
                                                                            static struct stub_s : allegrex_instruction_unknown_s
                                                                            {
                                                                              virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                              {
                                                                                if ((opcode & 0x01000000) == 0x00000000)
                                                                                {
                                                                                  return
                                                                                  (&allegrex::VF2IU)->instruction(opcode);
                                                                                }
                                                                                else
                                                                                {
                                                                                  return
                                                                                  (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VSRT3)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x02000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VSRT4)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x01000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VF2IU)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x01000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VF2IU)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02000080) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VMFVC)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x02000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VMTVC)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x01000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VF2IU)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x01000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VF2IU)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02010000) == 0x00010000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VT4444)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VT5650)->instruction(opcode);
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
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x02000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VT5551)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x01000000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VF2IU)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x01000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VF2IU)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VWBN)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x02000000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VCST)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x01000000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VF2ID)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VWBN)->instruction(opcode);
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
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                if ((opcode & 0x00000002) == 0x00000000)
                                {
                                  return
                                  (&allegrex::LVLQ)->instruction(opcode);
                                }
                                else
                                {
                                  return
                                  (&allegrex::LVRQ)->instruction(opcode);
                                }
                              }
                            }stub;
                            &stub;
                          }
                      ),
                      /* 54 */
                      (&allegrex::LVQ),
                      /* 55 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                static allegrex_instruction_s *table[4] =
                                {
                                  /* 0 */
                                  (&allegrex::VPFXS),
                                  /* 1 */
                                  (&allegrex::VPFXT),
                                  /* 2 */
                                  (&allegrex::VPFXD),
                                  /* 3 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00800000) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VIIM)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::VFIM)->instruction(opcode);
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
                      (&allegrex::SC),
                      /* 57 */
                      (&allegrex::SWC1),
                      /* 58 */
                      (&allegrex::SVS),
                      /* 59 */
                      (&allegrex::reserved_instruction),
                      /* 60 */
                      (
                          {
                            static struct stub_s : allegrex_instruction_unknown_s
                            {
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                static allegrex_instruction_s *table[8] =
                                {
                                  /* 0 */
                                  (&allegrex::VMMUL),
                                  /* 1 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00000080) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VHTFM2)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::VTFM2)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00000080) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VTFM3)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::VHTFM3)->instruction(opcode);
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
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00000080) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VHTFM4)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::VTFM4)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      }
                                  ),
                                  /* 4 */
                                  (&allegrex::VMSCL),
                                  /* 5 */
                                  (&allegrex::VQMUL),
                                  /* 6 */
                                  (&allegrex::reserved_instruction),
                                  /* 7 */
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00210000) == 0x00000000)
                                            {
                                              return
                                              (
                                                  {
                                                    static struct stub_s : allegrex_instruction_unknown_s
                                                    {
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00020000) == 0x00000000)
                                                        {
                                                          return
                                                          (&allegrex::VMMOV)->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VMZERO)->instruction(opcode);
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
                                                      virtual allegrex_instruction_s *instruction(u32 opcode)
                                                      {
                                                        if ((opcode & 0x00200000) == 0x00000000)
                                                        {
                                                          return
                                                          (
                                                              {
                                                                static struct stub_s : allegrex_instruction_unknown_s
                                                                {
                                                                  virtual allegrex_instruction_s *instruction(u32 opcode)
                                                                  {
                                                                    if ((opcode & 0x00040000) == 0x00000000)
                                                                    {
                                                                      return
                                                                      (&allegrex::VMIDT)->instruction(opcode);
                                                                    }
                                                                    else
                                                                    {
                                                                      return
                                                                      (&allegrex::VMONE)->instruction(opcode);
                                                                    }
                                                                  }
                                                                }stub;
                                                                &stub;
                                                              })->instruction(opcode);
                                                        }
                                                        else
                                                        {
                                                          return
                                                          (&allegrex::VROT)->instruction(opcode);
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
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                if ((opcode & 0x00000002) == 0x00000000)
                                {
                                  return
                                  (&allegrex::SVLQ)->instruction(opcode);
                                }
                                else
                                {
                                  return
                                  (&allegrex::SVRQ)->instruction(opcode);
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
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                if ((opcode & 0x00000002) == 0x00000000)
                                {
                                  return
                                  (&allegrex::SVQ)->instruction(opcode);
                                }
                                else
                                {
                                  return
                                  (&allegrex::SWB)->instruction(opcode);
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
                              virtual allegrex_instruction_s *instruction(u32 opcode)
                              {
                                if ((opcode & 0x00000001) == 0x00000000)
                                {
                                  return
                                  (
                                      {
                                        static struct stub_s : allegrex_instruction_unknown_s
                                        {
                                          virtual allegrex_instruction_s *instruction(u32 opcode)
                                          {
                                            if ((opcode & 0x00000020) == 0x00000000)
                                            {
                                              return
                                              (&allegrex::VNOP)->instruction(opcode);
                                            }
                                            else
                                            {
                                              return
                                              (&allegrex::VSYNC)->instruction(opcode);
                                            }
                                          }
                                        }stub;
                                        &stub;
                                      })->instruction(opcode);
                                }
                                else
                                {
                                  return
                                  (&allegrex::VFLUSH)->instruction(opcode);
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
