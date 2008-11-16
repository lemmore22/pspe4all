/*
 * Load Store Unit, handles memory operations.
 *
 * lsu.h
 *
 *  Created on: 15 nov. 2008
 *      Author: hli
 */

#ifndef LSU_H_
#define LSU_H_

    static bool const CHECK_ALIGNMENT = true;

    inline void doLB(u32 rt, u32 rs, s32 simm16)
    {
      u32 value = (u32)psp::memb(gpr[rs] + simm16);
      if (rt != 0)
      {
        gpr[rt] = value;
      }
    }

    inline void doLBU(u32 rt, u32 rs, s32 simm16)
    {
      u32 value = (s32)psp::memb(gpr[rs] + simm16);
      if (rt != 0)
      {
        gpr[rt] = value;
      }
    }

    inline void doLH(u32 rt, u32 rs, s32 simm16)
    {
      u32 address = gpr[rs] + simm16;
      if (CHECK_ALIGNMENT && (address & 1) != 0)
      {
        //log(memory).errorf("LH unaligned addr:0x%08x pc:0x%08x", address, pc);
      }
      else
      {
        u32 value = (u32)psp::memh(gpr[rs] + simm16);
        if (rt != 0)
        {
          gpr[rt] = value;
        }
      }
    }

    inline void doLHU(u32 rt, u32 rs, s32 simm16)
    {
      u32 address = gpr[rs] + simm16;
      if (CHECK_ALIGNMENT && (address & 1) != 0)
      {
        //log(memory).errorf("LHU unaligned addr:0x%08x pc:0x%08x", address, pc);
      }
      else
      {
        u32 value = (u32)psp::memh(gpr[rs] + simm16);
        if (rt != 0)
        {
          gpr[rt] = value;
        }
      }
    }


    inline void doLWL(u32 rt, u32 rs, s32 simm16)
    {
      static u32 const lwl_mask[4] = { 0xffffff, 0xffff, 0xff, 0 };
      static u32 const lwl_shift[4] = { 24, 16, 8, 0 };
      u32 address = gpr[rs] + simm16;
      u32 offset = address & 0x3;
      u32 value = gpr[rt];

      u32 data = psp::memw(address & 0xfffffffc);
      if (rt != 0)
      {
        gpr[rt] = (data << lwl_shift[offset]) | (value & lwl_mask[offset]);
      }
    }

    inline void doLW(u32 rt, u32 rs, s32 simm16)
    {
      u32 address = gpr[rs] + simm16;
      if (CHECK_ALIGNMENT && (address & 3) != 0)
      {
        //log(memory).errorf("LW unaligned addr:0x%08x pc:0x%08x", address, pc);
      }
      else
      {
        u32 value = (u32)psp::memw(address);
        if (rt != 0)
        {
          gpr[rt] = value;
        }
      }
    }

    inline void doLWR(u32 rt, u32 rs, s32 simm16)
    {
      static u32 const lwr_mask[4] = { 0, 0xff000000, 0xffff0000, 0xffffff00 };
      static u32 const lwr_shift[4] = { 0, 8, 16, 24 };
      u32 address = gpr[rs] + simm16;
      u32 offset = address & 0x3;
      u32 value = gpr[rt];

      u32 data = psp::memw(address & 0xfffffffc);
      if (rt != 0)
      {
        gpr[rt] = (data >> lwr_shift[offset]) | (value & lwr_mask[offset]);
      }
    }

    inline void doSB(u32 rt, u32 rs, u32 simm16)
    {
      psp::memb(gpr[rs] + simm16) = (u8)gpr[rt];
    }

    inline void doSB(u32 rt, u32 rs, u32 simm16)
    {
      u32 address = gpr[rs] + simm16;
      if (CHECK_ALIGNMENT && (address & 1) != 0)
      {
        //log(memory).errorf("SW unaligned addr:0x%08x pc:0x%08x", address, pc);
      }
      else
      {
        psp::memh(gpr[rs] + simm16) = (u16)gpr[rt];
      }
    }

#if 0
    public void doSH(u32 rt, u32 rs, u32 simm16) {
        if (CHECK_ALIGNMENT) {
            CpuState cpu = Emulator.getProcessor().cpu;
            u32 address = gpr[rs] + simm16;
            if ((address & 1) != 0) {
                Memory.log.error(String.format("SH unaligned addr:0x%08x pc:0x%08x", address, cpu.pc));
            }
        }

        memory.write16(gpr[rs] + simm16, (short) (gpr[rt] & 0xFFFF));
    }

    private static final u32[] swlMask = { 0xffffff00, 0xffff0000, 0xff000000, 0 };
    private static final u32[] swlShift = { 24, 16, 8, 0 };

    public void doSWL(u32 rt, u32 rs, u32 simm16) {
        u32 address = gpr[rs] + simm16;
        u32 offset = address & 0x3;
        u32 value = gpr[rt];
        u32 data = memory.read32(address & 0xfffffffc);

        data = (value >>> swlShift[offset]) | (data & swlMask[offset]);

        memory.write32(address & 0xfffffffc, data);
    }

    public void doSW(u32 rt, u32 rs, u32 simm16) {
        if (CHECK_ALIGNMENT) {
            CpuState cpu = Emulator.getProcessor().cpu;
            u32 address = gpr[rs] + simm16;
            if ((address & 3) != 0) {
                Memory.log.error(String.format("SW unaligned addr:0x%08x pc:0x%08x", address, cpu.pc));
            }
        }

        memory.write32(gpr[rs] + simm16, gpr[rt]);
    }

    private static final u32[] swrMask = { 0, 0xff, 0xffff, 0xffffff };
    private static final u32[] swrShift = { 0, 8, 16, 24 };

    public void doSWR(u32 rt, u32 rs, u32 simm16) {
        u32 address = gpr[rs] + simm16;
        u32 offset = address & 0x3;
        u32 value = gpr[rt];
        u32 data = memory.read32(address & 0xfffffffc);

        data = (value << swrShift[offset]) | (data & swrMask[offset]);

        memory.write32(address & 0xfffffffc, data);
    }

    public void doLL(u32 rt, u32 rs, u32 simm16) {
        u32 word = memory.read32(gpr[rs] + simm16);
        if (rt != 0) {
            gpr[rt] = word;
        }
        //ll_bit = 1;
    }

    public void doSC(u32 rt, u32 rs, u32 simm16) {
        memory.write32(gpr[rs] + simm16, gpr[rt]);
        if (rt != 0) {
            gpr[rt] = 1; // = ll_bit;
        }
    }
}
#endif


#endif /* LSU_H_ */
