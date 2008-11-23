/*
 * bcu.h
 *
 * Branch Control Unit, handles branching and jumping operations
 *
 *  Created on: 20 nov. 2008
 *      Author: hli
 */

#ifndef BCU_H_
#define BCU_H_

    inline static bool branch_target(u32 npc, s32 simm16)
    {
      return npc + (simm16 << 2);
    }

    inline static u32 jump_target(u32 npc, u32 uimm26)
    {
      return (npc & 0xf0000000) | (uimm26 << 2);
    }

    inline u32 fetch_opcode()
    {
      npc = pc + 4;

      u32 opcode = psp::memw(pc);

      // by default, the next instruction to emulate is at the next address
      pc = npc;

      return opcode;
    }

    inline u32 fetch_delayslot_opcode()
    {
      u32 opcode = psp::memw(pc);

      // by default, the next instruction to emulate is at the next address
      pc += 4;

      return opcode;
    }

    inline void next_pc()
    {
      pc = npc;
      npc = pc + 4;
    }

    inline bool doJR(u32 rs)
    {
      npc = gpr[rs];
      return true;
    }

    inline bool doJALR(u32 rd, u32 rs)
    {
      if (rd != 0)
      {
        gpr[rd] = pc + 4;
      }
      npc = gpr[rs];
      return true;
    }

    bool doBLTZ(u32 rs, s32 simm16)
    {
      npc = (gpr[rs] < 0) ? branch_target(pc, simm16) : (pc + 4);
      return true;
    }

    inline bool doBGEZ(u32 rs, s32 simm16)
    {
      npc = (gpr[rs] >= 0) ? branch_target(pc, simm16) : (pc + 4);
      return true;
    }

    inline bool doBLTZL(u32 rs, s32 simm16)
    {
      if (gpr[rs] < 0)
      {
        npc = branch_target(pc, simm16);
        return true;
      }
      else
      {
        pc += 4;
      }
      return false;
    }

    inline bool doBGEZL(u32 rs, s32 simm16)
    {
      if (gpr[rs] >= 0)
      {
        npc = branch_target(pc, simm16);
        return true;
      }
      else
      {
        pc += 4;
      }
      return false;
    }

    inline bool doBLTZAL(u32 rs, u32 simm16)
    {
      u32 target = pc + 4;
      bool t = (gpr[rs] < 0);
      gpr[31] = target;
      npc = t ? branch_target(pc, simm16) : target;
      return true;
    }

    inline bool doBGEZAL(u32 rs, u32 simm16)
    {
      u32 target = pc + 4;
      bool t = (gpr[rs] >= 0);
      gpr[31] = target;
      npc = t ? branch_target(pc, simm16) : target;
      return true;
    }

    inline bool doBLTZALL(u32 rs, s32 simm16)
    {
      bool t = (gpr[rs] < 0);
      gpr[31] = pc + 4;
      if (t)
      {
        npc = branch_target(pc, simm16);
      }
      else
      {
        pc += 4;
      }
      return t;
    }

    inline bool doBGEZALL(u32 rs, s32 simm16)
    {
      bool t = (gpr[rs] >= 0);
      gpr[31] = pc + 4;
      if (t)
      {
        npc = branch_target(pc, simm16);
      }
      else
      {
        pc += 4;
      }
      return t;
    }

    inline bool doJ(u32 uimm26)
    {
      npc = jump_target(pc, uimm26);
      if (npc == pc - 4)
      {
        //Processor.log.info("Pausing emulator - jump to self (death loop)");
        //Emulator.PauseEmuWithStatus(Emulator.EMU_STATUS_JUMPSELF);
      }
      return true;
    }

    inline bool doJAL(u32 uimm26)
    {
      gpr[31] = pc + 4;
      npc = jump_target(pc, uimm26);
      return true;
    }

    inline bool doBEQ(u32 rs, u32 rt, s32 simm16)
    {
      npc = (gpr[rs] == gpr[rt]) ? branch_target(pc, simm16) : (pc + 4);
      if (npc == pc - 4 && rs == rt)
      {
        //Processor.log.info("Pausing emulator - branch to self (death loop)");
        //Emulator.PauseEmuWithStatus(Emulator.EMU_STATUS_JUMPSELF);
      }
      return true;
    }

    inline bool doBNE(u32 rs, u32 rt, u32 simm16)
    {
      npc = (gpr[rs] != gpr[rt]) ? branch_target(pc, simm16) : (pc + 4);
      return true;
    }

    inline bool doBLEZ(u32 rs, u32 simm16)
    {
      npc = (gpr[rs] <= 0) ? branch_target(pc, simm16) : (pc + 4);
      return true;
    }

    inline bool doBGTZ(u32 rs, u32 simm16)
    {
      npc = (gpr[rs] > 0) ? branch_target(pc, simm16) : (pc + 4);
      return true;
    }

    inline bool doBEQL(u32 rs, u32 rt, s32 simm16)
    {
      if (gpr[rs] == gpr[rt])
      {
        npc = branch_target(pc, simm16);
        return true;
      }
      else
      {
        pc += 4;
      }
      return false;
    }

    inline bool doBNEL(u32 rs, u32 rt, s32 simm16)
    {
      if (gpr[rs] != gpr[rt])
      {
        npc = branch_target(pc, simm16);
        return true;
      }
      else
      {
        pc += 4;
      }
      return false;
    }

    inline bool doBLEZL(u32 rs, s32 simm16)
    {
      if (gpr[rs] <= 0)
      {
        npc = branch_target(pc, simm16);
        return true;
      }
      else
      {
        pc += 4;
      }
      return false;
    }

    inline bool doBGTZL(u32 rs, s32 simm16)
    {
      if (gpr[rs] > 0)
      {
        npc = branch_target(pc, simm16);
        return true;
      }
      else
      {
        pc += 4;
      }
      return false;
    }

#endif /* BCU_H_ */
