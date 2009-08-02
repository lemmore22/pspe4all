#define AllegrexInsnPtr(x) ((AllegrexInstruction *)&Allegrex::x)

AllegrexInstruction *Allegrex::decode_instruction(u32 opcode)
{
  switch ((opcode >> 26) & 0x0000003f)
  {
    case 0: /* SPECIAL */
      switch ((opcode >> 0) & 0x0000003f)
      {
        case 0:
          return AllegrexInsnPtr(SLL);

        case 1:
          break;

        case 2:
          return ((opcode & 0x00200000) == 0x00000000) ? AllegrexInsnPtr(SRL) : AllegrexInsnPtr(ROTR);
        case 3:
          return AllegrexInsnPtr(SRA);
        case 4:
          return AllegrexInsnPtr(SLLV);

        case 5:
          break;

        case 6:
          return ((opcode & 0x00000040) == 0x00000000) ? AllegrexInsnPtr(SRLV) : AllegrexInsnPtr(ROTRV);
        case 7:
          return AllegrexInsnPtr(SRAV);
        case 8:
          return AllegrexInsnPtr(JR);
        case 9:
          return AllegrexInsnPtr(JALR);
        case 10:
          return AllegrexInsnPtr(MOVZ);
        case 11:
          return AllegrexInsnPtr(MOVN);
        case 12:
          return AllegrexInsnPtr(SYSCALL);
        case 13:
          return AllegrexInsnPtr(BREAK);

        case 14:
          break;

        case 15:
          return AllegrexInsnPtr(SYNC);
        case 16:
          return AllegrexInsnPtr(MFHI);
        case 17:
          return AllegrexInsnPtr(MTHI);
        case 18:
          return AllegrexInsnPtr(MFLO);
        case 19:
          return AllegrexInsnPtr(MTLO);

        case 20:
        case 21:
          break;

        case 22:
          return AllegrexInsnPtr(CLZ);
        case 23:
          return AllegrexInsnPtr(CLO);
        case 24:
          return AllegrexInsnPtr(MULT);
        case 25:
          return AllegrexInsnPtr(MULTU);
        case 26:
          return AllegrexInsnPtr(DIV);
        case 27:
          return AllegrexInsnPtr(DIVU);
        case 28:
          return AllegrexInsnPtr(MADD);
        case 29:
          return AllegrexInsnPtr(MADDU);

        case 30:
        case 31:
          break;

        case 32:
          return AllegrexInsnPtr(ADD);
        case 33:
          return AllegrexInsnPtr(ADDU);
        case 34:
          return AllegrexInsnPtr(SUB);
        case 35:
          return AllegrexInsnPtr(SUBU);
        case 36:
          return AllegrexInsnPtr(AND);
        case 37:
          return AllegrexInsnPtr(OR);
        case 38:
          return AllegrexInsnPtr(XOR);
        case 39:
          return AllegrexInsnPtr(NOR);

        case 40:
        case 41:
          break;

        case 42:
          return AllegrexInsnPtr(SLT);
        case 43:
          return AllegrexInsnPtr(SLTU);
        case 44:
          return AllegrexInsnPtr(MAX);
        case 45:
          return AllegrexInsnPtr(MIN);
        case 46:
          return AllegrexInsnPtr(MSUB);
        case 47:
          return AllegrexInsnPtr(MSUBU);

        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 60:
        case 61:
        case 62:
        case 63:
          break;
      }

      break;

    case 1: /* REGIMM */
      switch ((opcode >> 16) & 0x00000003)
      {
        case 0:
          return ((opcode & 0x00100000) == 0x00000000) ? AllegrexInsnPtr(BLTZ) : AllegrexInsnPtr(BLTZAL);
        case 1:
          return ((opcode & 0x00100000) == 0x00000000) ? AllegrexInsnPtr(BGEZ) : AllegrexInsnPtr(BGEZAL);
        case 2:
          return ((opcode & 0x00100000) == 0x00000000) ? AllegrexInsnPtr(BLTZL) : AllegrexInsnPtr(BLTZALL);
        case 3:
          return ((opcode & 0x00100000) == 0x00000000) ? AllegrexInsnPtr(BGEZL) : AllegrexInsnPtr(BGEZALL);
      }

      break;

    case 2:
      return AllegrexInsnPtr(J);
    case 3:
      return AllegrexInsnPtr(JAL);
    case 4:
      return AllegrexInsnPtr(BEQ);
    case 5:
      return AllegrexInsnPtr(BNE);
    case 6:
      return AllegrexInsnPtr(BLEZ);
    case 7:
      return AllegrexInsnPtr(BGTZ);
    case 8:
      return AllegrexInsnPtr(ADDI);
    case 9:
      return AllegrexInsnPtr(ADDIU);
    case 10:
      return AllegrexInsnPtr(SLTI);
    case 11:
      return AllegrexInsnPtr(SLTIU);
    case 12:
      return AllegrexInsnPtr(ANDI);
    case 13:
      return AllegrexInsnPtr(ORI);
    case 14:
      return AllegrexInsnPtr(XORI);
    case 15:
      return AllegrexInsnPtr(LUI);

    case 16: /* COP0 */
      switch ((opcode >> 22) & 0x00000003)
      {
        case 0:
          return ((opcode & 0x00000008) == 0x00000000) ? AllegrexInsnPtr(MFC0) : AllegrexInsnPtr(ERET);
        case 1:
          return AllegrexInsnPtr(CFC0);
        case 2:
          return AllegrexInsnPtr(MTC0);
        case 3:
          return AllegrexInsnPtr(CTC0);
      }

      break;

    case 17: /* COP1 */
      switch ((opcode >> 23) & 0x00000007)
      {
        case 0:
          return ((opcode & 0x00400000) == 0x00000000) ? AllegrexInsnPtr(MFC1) : AllegrexInsnPtr(CFC1);
        case 1:
          return ((opcode & 0x00400000) == 0x00000000) ? AllegrexInsnPtr(MTC1) : AllegrexInsnPtr(CTC1);

        case 2:
          switch ((opcode >> 16) & 0x00000003)
          {
            case 0:
              return AllegrexInsnPtr(BC1F);
            case 1:
              return AllegrexInsnPtr(BC1T);
            case 2:
              return AllegrexInsnPtr(BC1FL);
            case 3:
              return AllegrexInsnPtr(BC1TL);
          }
          ;

          break;

        case 3:
          break;

        case 4:
          switch ((opcode >> 0) & 0x0000001f)
          {
            case 0:
              return AllegrexInsnPtr(ADD_S);
            case 1:
              return AllegrexInsnPtr(SUB_S);
            case 2:
              return AllegrexInsnPtr(MUL_S);
            case 3:
              return AllegrexInsnPtr(DIV_S);
            case 4:
              return ((opcode & 0x00000020) == 0x00000000) ? AllegrexInsnPtr(SQRT_S) : AllegrexInsnPtr(CVT_W_S);
            case 5:
              return AllegrexInsnPtr(ABS_S);
            case 6:
              return AllegrexInsnPtr(MOV_S);
            case 7:
              return AllegrexInsnPtr(NEG_S);

            case 8:
            case 9:
            case 10:
            case 11:
              break;

            case 12:
              return AllegrexInsnPtr(ROUND_W_S);
            case 13:
              return AllegrexInsnPtr(TRUNC_W_S);
            case 14:
              return AllegrexInsnPtr(CEIL_W_S);
            case 15:
              return AllegrexInsnPtr(FLOOR_W_S);

            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
              return AllegrexInsnPtr(C_COND_S);
          }

          break;

        case 5:
          return AllegrexInsnPtr(CVT_S_W);

        case 6:
        case 7:
          break;
      }

      break;

    case 18: /* VFPU2 */
      if ((opcode & 0x00200000) == 0x00000000)
      {
        switch ((opcode >> 16) & 0x00000003)
        {
          case 0:
            return AllegrexInsnPtr(BVF);
          case 1:
            return AllegrexInsnPtr(BVT);
          case 2:
            return AllegrexInsnPtr(BVFL);
          case 3:
            return AllegrexInsnPtr(BVTL);
        }
      }
      else
      {
        if ((opcode & 0x00000080) == 0x00000000)
        {
          return ((opcode & 0x00800000) == 0x00000000) ? AllegrexInsnPtr(MFV) : AllegrexInsnPtr(MTV);
        }
        else
        {
          return ((opcode & 0x00800000) == 0x00000000) ? AllegrexInsnPtr(MFVC) : AllegrexInsnPtr(MTVC);
        }
      }

      break;

    case 19:
      break;

    case 20:
      return AllegrexInsnPtr(BEQL);
    case 21:
      return AllegrexInsnPtr(BNEL);
    case 22:
      return AllegrexInsnPtr(BLEZL);
    case 23:
      return AllegrexInsnPtr(BGTZL);

    case 24: /* VFPU0 */
      switch ((opcode >> 23) & 0x00000003)
      {
        case 0:
          return AllegrexInsnPtr(VADD);
        case 1:
          return AllegrexInsnPtr(VSUB);
        case 2:
          return AllegrexInsnPtr(VSBN);
        case 3:
          return AllegrexInsnPtr(VDIV);
      }

      break;

    case 25: /* VFPU1 */
      switch ((opcode >> 23) & 0x00000007)
      {
        case 0:
          return AllegrexInsnPtr(VMUL);
        case 1:
          return AllegrexInsnPtr(VDOT);
        case 2:
          return AllegrexInsnPtr(VSCL);

        case 3:
          break;

        case 4:
          return AllegrexInsnPtr(VHDP);
        case 5:
          return AllegrexInsnPtr(VDET);
        case 6:
          return AllegrexInsnPtr(VCRS);

        case 7:
          break;
      }

      break;

    case 26:
      break;

    case 27: /* VFPU3 */
      switch ((opcode >> 23) & 0x00000007)
      {
        case 0:
          return AllegrexInsnPtr(VCMP);

        case 1:
          break;

        case 2:
          return AllegrexInsnPtr(VMIN);
        case 3:
          return AllegrexInsnPtr(VMAX);
        case 4:
          return AllegrexInsnPtr(VSLT);
        case 5:
          return AllegrexInsnPtr(VSCMP);
        case 6:
          return AllegrexInsnPtr(VSGE);

        case 7:
          break;
      }

      break;

    case 28: /* SPECIAL2 */
      if ((opcode & 0x00000002) == 0x00000000)
      {
        return ((opcode & 0x00000004) == 0x00000000) ? AllegrexInsnPtr(HALT) : AllegrexInsnPtr(MFIC);
      }
      else
      {
        return AllegrexInsnPtr(MTIC);
      }

      break;

    case 29:
    case 30:
      break;

    case 31: /* SPECIAL3 */
      if ((opcode & 0x00000021) == 0x00000020)
      {
        if ((opcode & 0x00000080) == 0x00000000)
        {
          return ((opcode & 0x00000100) == 0x00000000) ? AllegrexInsnPtr(SEH) : AllegrexInsnPtr(BITREV);
        }
        else
        {
          return ((opcode & 0x00000040) == 0x00000000) ? AllegrexInsnPtr(WSBH) : AllegrexInsnPtr(WSBW);
        }
      }
      else
      {
        if ((opcode & 0x00000001) == 0x00000000)
        {
          return ((opcode & 0x00000004) == 0x00000000) ? AllegrexInsnPtr(EXT) : AllegrexInsnPtr(INS);
        }
        else
        {
          return AllegrexInsnPtr(SEB);
        }
      }

      break;

    case 32:
      return AllegrexInsnPtr(LB);
    case 33:
      return AllegrexInsnPtr(LH);
    case 34:
      return AllegrexInsnPtr(LWL);
    case 35:
      return AllegrexInsnPtr(LW);
    case 36:
      return AllegrexInsnPtr(LBU);
    case 37:
      return AllegrexInsnPtr(LHU);
    case 38:
      return AllegrexInsnPtr(LWR);

    case 39:
      break;

    case 40:
      return AllegrexInsnPtr(SB);
    case 41:
      return AllegrexInsnPtr(SH);
    case 42:
      return AllegrexInsnPtr(SWL);
    case 43:
      return AllegrexInsnPtr(SW);

    case 44:
    case 45:
      break;

    case 46:
      return AllegrexInsnPtr(SWR);

    case 47: /* CACHE */
      switch ((opcode >> 17) & 0x0000000f)
      {
        case 0:
        case 1:
          break;

        case 2:
          return AllegrexInsnPtr(ICACHE_INDEX_INVALIDATE);
        case 3:
          return AllegrexInsnPtr(ICACHE_INDEX_UNLOCK);
        case 4:
          return AllegrexInsnPtr(ICACHE_HIT_INVALIDATE);

        case 5:
          return ((opcode & 0x00010000) == 0x00000000) ? AllegrexInsnPtr(ICACHE_FILL) : AllegrexInsnPtr(ICACHE_FILL_WITH_LOCK);

        case 6:
        case 7:
        case 8:
        case 9:
          break;

        case 10:
          return AllegrexInsnPtr(DCACHE_INDEX_WRITEBACK_INVALIDATE);
        case 11:
          return AllegrexInsnPtr(DCACHE_INDEX_UNLOCK);

        case 12:
          return ((opcode & 0x00010000) == 0x00000000) ? AllegrexInsnPtr(DCACHE_CREATE_DIRTY_EXCLUSIVE) : AllegrexInsnPtr(DCACHE_HIT_INVALIDATE);

        case 13:
          return ((opcode & 0x00010000) == 0x00000000) ? AllegrexInsnPtr(DCACHE_HIT_WRITEBACK) : AllegrexInsnPtr(DCACHE_HIT_WRITEBACK_INVALIDATE);

        case 14:
          return AllegrexInsnPtr(DCACHE_CREATE_DIRTY_EXCLUSIVE_WITH_LOCK);

        case 15:
          return ((opcode & 0x00010000) == 0x00000000) ? AllegrexInsnPtr(DCACHE_FILL) : AllegrexInsnPtr(DCACHE_FILL_WITH_LOCK);
      }

      break;

    case 48:
      return AllegrexInsnPtr(LL);
    case 49:
      return AllegrexInsnPtr(LWC1);
    case 50:
      return AllegrexInsnPtr(LVS);

    case 51:
      break;

    case 52: /* VFPU4 */
      switch ((opcode >> 18) & 0x0000001f)
      {
        case 0:
          if ((opcode & 0x02010000) == 0x00000000)
          {
            return ((opcode & 0x00020000) == 0x00000000) ? AllegrexInsnPtr(VMOV) : AllegrexInsnPtr(VNEG);
          }
          else
          {
            if ((opcode & 0x02020000) == 0x00000000)
            {
              return AllegrexInsnPtr(VABS);
            }
            else
            {
              if ((opcode & 0x02000000) == 0x00000000)
              {
                return AllegrexInsnPtr(VIDT);
              }
              else
              {
                if ((opcode & 0x01800000) == 0x00000000)
                {
                  return AllegrexInsnPtr(VF2IN);
                }
                else
                {
                  return ((opcode & 0x01000000) == 0x00000000)
                      ? AllegrexInsnPtr(VI2F)
                      : AllegrexInsnPtr(VWBN);
                }
              }
            }
          }

          break;

        case 1:
          if ((opcode & 0x02010000) == 0x00000000)
          {
            return ((opcode & 0x00020000) == 0x00000000) ? AllegrexInsnPtr(VSAT0) : AllegrexInsnPtr(VZERO);
          }
          else
          {
            if ((opcode & 0x02020000) == 0x00000000)
            {
              return AllegrexInsnPtr(VSAT1);
            }
            else
            {
              if ((opcode & 0x02000000) == 0x00000000)
              {
                return AllegrexInsnPtr(VONE);
              }
              else
              {
                if ((opcode & 0x01800000) == 0x00000000)
                {
                  return AllegrexInsnPtr(VF2IN);
                }
                else
                {
                  return ((opcode & 0x01000000) == 0x00000000)
                      ? AllegrexInsnPtr(VI2F)
                      : AllegrexInsnPtr(VWBN);
                }
              }
            }
          }

          break;

        case 2:
          if ((opcode & 0x01800000) == 0x00000000)
          {
            return AllegrexInsnPtr(VF2IN);
          }
          else
          {
            if ((opcode & 0x01000000) == 0x00000000)
            {
              return AllegrexInsnPtr(VI2F);
            }
            else
            {
              return AllegrexInsnPtr(VWBN);
            }
          }

          break;

        case 3:
          if ((opcode & 0x01800000) == 0x00000000)
          {
            return AllegrexInsnPtr(VF2IN);
          }
          else
          {
            return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VI2F) : AllegrexInsnPtr(VWBN);
          }

          break;

        case 4:
          if ((opcode & 0x02010000) == 0x00000000)
          {
            return ((opcode & 0x00020000) == 0x00000000) ? AllegrexInsnPtr(VRCP) : AllegrexInsnPtr(VSIN);
          }
          else
          {
            if ((opcode & 0x02020000) == 0x00000000)
            {
              return AllegrexInsnPtr(VRSQ);
            }
            else
            {
              if ((opcode & 0x02000000) == 0x00000000)
              {
                return AllegrexInsnPtr(VCOS);
              }
              else
              {
                if ((opcode & 0x01800000) == 0x00000000)
                {
                  return AllegrexInsnPtr(VF2IN);
                }
                else
                {
                  return ((opcode & 0x01000000) == 0x00000000)
                      ? AllegrexInsnPtr(VI2F)
                      : AllegrexInsnPtr(VWBN);
                }
              }
            }
          }

          break;

        case 5:
          if ((opcode & 0x02010000) == 0x00000000)
          {
            return ((opcode & 0x00020000) == 0x00000000) ? AllegrexInsnPtr(VEXP2) : AllegrexInsnPtr(VSQRT);
          }
          else
          {
            if ((opcode & 0x02020000) == 0x00000000)
            {
              return AllegrexInsnPtr(VLOG2);
            }
            else
            {
              if ((opcode & 0x02000000) == 0x00000000)
              {
                return AllegrexInsnPtr(VASIN);
              }
              else
              {
                if ((opcode & 0x01800000) == 0x00000000)
                {
                  return AllegrexInsnPtr(VF2IN);
                }
                else
                {
                  return ((opcode & 0x01000000) == 0x00000000)
                      ? AllegrexInsnPtr(VI2F)
                      : AllegrexInsnPtr(VWBN);
                }
              }
            }
          }

          break;

        case 6:
          if ((opcode & 0x02020000) == 0x00000000)
          {
            return AllegrexInsnPtr(VNRCP);
          }
          else
          {
            if ((opcode & 0x02000000) == 0x00000000)
            {
              return AllegrexInsnPtr(VNSIN);
            }
            else
            {
              if ((opcode & 0x01800000) == 0x00000000)
              {
                return AllegrexInsnPtr(VF2IN);
              }
              else
              {
                return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VI2F) : AllegrexInsnPtr(VWBN);
              }
            }
          }

          break;

        case 7:
          if ((opcode & 0x02000000) == 0x00000000)
          {
            return AllegrexInsnPtr(VREXP2);
          }
          else
          {
            if ((opcode & 0x01800000) == 0x00000000)
            {
              return AllegrexInsnPtr(VF2IN);
            }
            else
            {
              return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VI2F) : AllegrexInsnPtr(VWBN);
            }
          }

          break;

        case 8:
          if ((opcode & 0x02010000) == 0x00000000)
          {
            return ((opcode & 0x00020000) == 0x00000000) ? AllegrexInsnPtr(VRNDS) : AllegrexInsnPtr(VRNDF1);
          }
          else
          {
            if ((opcode & 0x02020000) == 0x00000000)
            {
              return AllegrexInsnPtr(VRNDI);
            }
            else
            {
              if ((opcode & 0x02000000) == 0x00000000)
              {
                return AllegrexInsnPtr(VRNDF2);
              }
              else
              {
                if ((opcode & 0x01800000) == 0x00800000)
                {
                  return AllegrexInsnPtr(VCMOVT);
                }
                else
                {
                  return ((opcode & 0x01000000) == 0x00000000)
                      ? AllegrexInsnPtr(VF2IZ)
                      : AllegrexInsnPtr(VWBN);
                }
              }
            }
          }

          break;

        case 9:
          if ((opcode & 0x01800000) == 0x00800000)
          {
            return AllegrexInsnPtr(VCMOVT);
          }
          else
          {
            return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2IZ) : AllegrexInsnPtr(VWBN);
          }

          break;

        case 10:
          if ((opcode & 0x01800000) == 0x00800000)
          {
            return AllegrexInsnPtr(VCMOVF);
          }
          else
          {
            return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2IZ) : AllegrexInsnPtr(VWBN);
          }

          break;

        case 11:
          if ((opcode & 0x01800000) == 0x00800000)
          {
            return AllegrexInsnPtr(VCMOVF);
          }
          else
          {
            return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2IZ) : AllegrexInsnPtr(VWBN);
          }

          break;

        case 12:
          if ((opcode & 0x02010000) == 0x00000000)
          {
            return AllegrexInsnPtr(VF2H);
          }
          else
          {
            if ((opcode & 0x02000000) == 0x00000000)
            {
              return AllegrexInsnPtr(VH2F);
            }
            else
            {
              return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2IZ) : AllegrexInsnPtr(VWBN);
            }
          }

          break;

        case 13:
          if ((opcode & 0x02010000) == 0x00000000)
          {
            return AllegrexInsnPtr(VSBZ);
          }
          else
          {
            if ((opcode & 0x02000000) == 0x00000000)
            {
              return AllegrexInsnPtr(VLGB);
            }
            else
            {
              return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2IZ) : AllegrexInsnPtr(VWBN);
            }
          }

          break;

        case 14:
          if ((opcode & 0x02010000) == 0x00000000)
          {
            if ((opcode & 0x00020000) == 0x00000000)
            {
              return AllegrexInsnPtr(VUC2I);
            }
            else
            {
              return AllegrexInsnPtr(VUS2I);
            }
          }
          else
          {
            if ((opcode & 0x02020000) == 0x00000000)
            {
              return AllegrexInsnPtr(VC2I);
            }
            else
            {
              if ((opcode & 0x02000000) == 0x00000000)
              {
                return AllegrexInsnPtr(VS2I);
              }
              else
              {
                return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2IZ) : AllegrexInsnPtr(VWBN);
              }
            }
          }

          break;

        case 15:
          if ((opcode & 0x02010000) == 0x00000000)
          {
            return ((opcode & 0x00020000) == 0x00000000) ? AllegrexInsnPtr(VI2UC) : AllegrexInsnPtr(VI2US);
          }
          else
          {
            if ((opcode & 0x02020000) == 0x00000000)
            {
              return AllegrexInsnPtr(VI2C);
            }
            else
            {
              if ((opcode & 0x02000000) == 0x00000000)
              {
                return AllegrexInsnPtr(VI2S);
              }
              else
              {
                return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2IZ) : AllegrexInsnPtr(VWBN);
              }
            }
          }

          break;

        case 16:
          if ((opcode & 0x02010000) == 0x00000000)
          {
            return ((opcode & 0x00020000) == 0x00000000) ? AllegrexInsnPtr(VSRT1) : AllegrexInsnPtr(VBFY1);
          }
          else
          {
            if ((opcode & 0x02020000) == 0x00000000)
            {
              return AllegrexInsnPtr(VSRT2);
            }
            else
            {
              if ((opcode & 0x02000000) == 0x00000000)
              {
                return AllegrexInsnPtr(VBFY2);
              }
              else
              {
                return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2IU) : AllegrexInsnPtr(VWBN);
              }
            }
          }

          break;

        case 17:
          if ((opcode & 0x02010000) == 0x00000000)
          {
            return ((opcode & 0x00020000) == 0x00000000) ? AllegrexInsnPtr(VOCP) : AllegrexInsnPtr(VFAD);
          }
          else
          {
            if ((opcode & 0x02020000) == 0x00000000)
            {
              return AllegrexInsnPtr(VSOCP);
            }
            else
            {
              if ((opcode & 0x02000000) == 0x00000000)
              {
                return AllegrexInsnPtr(VAVG);
              }
              else
              {
                return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2IU) : AllegrexInsnPtr(VWBN);
              }
            }
          }

          break;

        case 18:
          if ((opcode & 0x02010000) == 0x00000000)
          {
            return AllegrexInsnPtr(VSRT3);
          }
          else
          {
            if ((opcode & 0x02000000) == 0x00000000)
            {
              return AllegrexInsnPtr(VSRT4);
            }
            else
            {
              return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2IU) : AllegrexInsnPtr(VWBN);
            }
          }

          break;

        case 19:
          return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2IU) : AllegrexInsnPtr(VWBN);

        case 20:
          if ((opcode & 0x02000080) == 0x00000000)
          {
            return AllegrexInsnPtr(VMFVC);
          }
          else
          {
            if ((opcode & 0x02000000) == 0x00000000)
            {
              return AllegrexInsnPtr(VMTVC);
            }
            else
            {
              return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2IU) : AllegrexInsnPtr(VWBN);
            }
          }

          break;

        case 21:
          return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2IU) : AllegrexInsnPtr(VWBN);

        case 22:
          if ((opcode & 0x02010000) == 0x00010000)
          {
            return ((opcode & 0x00020000) == 0x00000000) ? AllegrexInsnPtr(VT4444) : AllegrexInsnPtr(VT5650);
          }
          else
          {
            if ((opcode & 0x02000000) == 0x00000000)
            {
              return AllegrexInsnPtr(VT5551);
            }
            else
            {
              return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2IU) : AllegrexInsnPtr(VWBN);
            }
          }

          break;

        case 23:
          return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2IU) : AllegrexInsnPtr(VWBN);

        case 24:
          if ((opcode & 0x02000000) == 0x00000000)
          {
            return AllegrexInsnPtr(VCST);
          }
          else
          {
            return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2ID) : AllegrexInsnPtr(VWBN);
          }

          break;

        case 25:
          if ((opcode & 0x02000000) == 0x00000000)
          {
            return AllegrexInsnPtr(VCST);
          }
          else
          {
            return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2ID) : AllegrexInsnPtr(VWBN);
          }

          break;

        case 26:
          if ((opcode & 0x02000000) == 0x00000000)
          {
            return AllegrexInsnPtr(VCST);
          }
          else
          {
            return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2ID) : AllegrexInsnPtr(VWBN);
          }

          break;

        case 27:
          if ((opcode & 0x02000000) == 0x00000000)
          {
            return AllegrexInsnPtr(VCST);
          }
          else
          {
            return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2ID) : AllegrexInsnPtr(VWBN);
          }

          break;

        case 28:
          if ((opcode & 0x02000000) == 0x00000000)
          {
            return AllegrexInsnPtr(VCST);
          }
          else
          {
            return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2ID) : AllegrexInsnPtr(VWBN);
          }

          break;

        case 29:
          if ((opcode & 0x02000000) == 0x00000000)
          {
            return AllegrexInsnPtr(VCST);
          }
          else
          {
            return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2ID) : AllegrexInsnPtr(VWBN);
          }

          break;

        case 30:
          if ((opcode & 0x02000000) == 0x00000000)
          {
            return AllegrexInsnPtr(VCST);
          }
          else
          {
            return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2ID) : AllegrexInsnPtr(VWBN);
          }

          break;

        case 31:
          if ((opcode & 0x02000000) == 0x00000000)
          {
            return AllegrexInsnPtr(VCST);
          }
          else
          {
            return ((opcode & 0x01000000) == 0x00000000) ? AllegrexInsnPtr(VF2ID) : AllegrexInsnPtr(VWBN);
          }
      }

      break;

    case 53:
      return ((opcode & 0x00000002) == 0x00000000) ? AllegrexInsnPtr(LVLQ) : AllegrexInsnPtr(LVRQ);

    case 54:
      return AllegrexInsnPtr(LVQ);

    case 55: /* VFPU5 */
      switch ((opcode >> 24) & 0x00000003)
      {
        case 0:
          return AllegrexInsnPtr(VPFXS);
        case 1:
          return AllegrexInsnPtr(VPFXT);
        case 2:
          return AllegrexInsnPtr(VPFXD);
        case 3:
          return ((opcode & 0x00800000) == 0x00000000) ? AllegrexInsnPtr(VIIM) : AllegrexInsnPtr(VFIM);
      }

      break;

    case 56:
      return AllegrexInsnPtr(SC);
    case 57:
      return AllegrexInsnPtr(SWC1);
    case 58:
      return AllegrexInsnPtr(SVS);

    case 59:
      break;

    case 60: /* VFPU6 */
      switch ((opcode >> 23) & 0x00000007)
      {
        case 0:
          return AllegrexInsnPtr(VMMUL);
        case 1:
          return ((opcode & 0x00000080) == 0x00000000) ? AllegrexInsnPtr(VHTFM2) : AllegrexInsnPtr(VTFM2);
        case 2:
          return ((opcode & 0x00000080) == 0x00000000) ? AllegrexInsnPtr(VHTFM3) : AllegrexInsnPtr(VTFM3);
        case 3:
          return ((opcode & 0x00000080) == 0x00000000) ? AllegrexInsnPtr(VHTFM4) : AllegrexInsnPtr(VTFM4);
        case 4:
          return AllegrexInsnPtr(VMSCL);
        case 5:
          return AllegrexInsnPtr(VQMUL);

        case 6:
          break;

        case 7:
          if ((opcode & 0x00210000) == 0x00000000)
          {
            return ((opcode & 0x00020000) == 0x00000000) ? AllegrexInsnPtr(VMMOV) : AllegrexInsnPtr(VMZERO);
          }
          else
          {
            if ((opcode & 0x00200000) == 0x00000000)
            {
              return ((opcode & 0x00040000) == 0x00000000) ? AllegrexInsnPtr(VMIDT) : AllegrexInsnPtr(VMONE);
            }
            else
            {
              return AllegrexInsnPtr(VROT);
            }
          }
      }

      break;

    case 61:
      return ((opcode & 0x00000002) == 0x00000000) ? AllegrexInsnPtr(SVLQ) : AllegrexInsnPtr(SVRQ);

    case 62:
      return ((opcode & 0x00000002) == 0x00000000) ? AllegrexInsnPtr(SVQ) : AllegrexInsnPtr(SWB);

    case 63: /* VFPU7 */
      if ((opcode & 0x00000001) == 0x00000000)
      {
        return ((opcode & 0x00000020) == 0x00000000) ? AllegrexInsnPtr(VNOP) : AllegrexInsnPtr(VSYNC);
      }
      else
      {
        return AllegrexInsnPtr(VFLUSH);
      }

      break;
  }

  return AllegrexInsnPtr(reserved_instruction);
}
