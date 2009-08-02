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
  s32 value = (s32) psp::memb(gpr[rs] + simm16);
  if (rt != 0)
  {
    gpr[rt] = (u32) value;
  }
}

inline void doLBU(u32 rt, u32 rs, s32 simm16)
{
  u32 value = (u32) psp::membu(gpr[rs] + simm16);
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
    errorf(memory, "LH unaligned addr:0x%08x pc:0x%08x", address, pc);
  }
  else
  {
    u32 value = (u32) psp::memh(address);
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
    errorf(memory, "LHU unaligned addr:0x%08x pc:0x%08x", address, pc);
  }
  else
  {
    u32 value = (u32) psp::memhu(address);
    if (rt != 0)
    {
      gpr[rt] = value;
    }
  }
}

inline void doLWL(u32 rt, u32 rs, s32 simm16)
{
  static u32 const lwl_mask[4] =
    { 0xffffff, 0xffff, 0xff, 0 };
  static u32 const lwl_shift[4] =
    { 24, 16, 8, 0 };
  u32 address = gpr[rs] + simm16;
  u32 offset = address & 0x3;
  u32 data = psp::memw(address & 0xfffffffc);
  if (rt != 0)
  {
    gpr[rt] = (data << lwl_shift[offset]) | (gpr[rt] & lwl_mask[offset]);
  }
}

inline void doLW(u32 rt, u32 rs, s32 simm16)
{
  u32 address = gpr[rs] + simm16;
  if (CHECK_ALIGNMENT && (address & 3) != 0)
  {
    errorf(memory, "LW unaligned addr:0x%08x pc:0x%08x", address, pc);
  }
  else
  {
    u32 value = (u32) psp::memw(address);
    if (rt != 0)
    {
      gpr[rt] = value;
    }
  }
}

inline void doLWR(u32 rt, u32 rs, s32 simm16)
{
  static u32 const lwr_mask[4] =
    { 0, 0xff000000, 0xffff0000, 0xffffff00 };
  static u32 const lwr_shift[4] =
    { 0, 8, 16, 24 };
  u32 address = gpr[rs] + simm16;
  u32 offset = address & 0x3;
  u32 data = psp::memw(address & 0xfffffffc);
  if (rt != 0)
  {
    gpr[rt] = (data >> lwr_shift[offset]) | (gpr[rt] & lwr_mask[offset]);
  }
}

inline void doSB(u32 rt, u32 rs, u32 simm16)
{
  psp::memb(gpr[rs] + simm16) = (u8) gpr[rt];
}

inline void doSH(u32 rt, u32 rs, u32 simm16)
{
  u32 address = gpr[rs] + simm16;
  if (CHECK_ALIGNMENT && (address & 1) != 0)
  {
    errorf(memory, "SH unaligned addr:0x%08x pc:0x%08x", address, pc);
  }
  else
  {
    psp::memh( address) = (u16) gpr[rt];
  }
}

inline void doSWL(u32 rt, u32 rs, s32 simm16)
{
  static u32 const swl_mask[4] =
    { 0xffffff00, 0xffff0000, 0xff000000, 0 };
  static u32 const swl_shift[4] =
    { 24, 16, 8, 0 };
  u32 address = gpr[rs] + simm16;
  u32 offset = address & 0x3;
  address &= 0xfffffffc;
  psp::memw( address) = (gpr[rt] >> swl_shift[offset]) | (psp::memw(address)
      & swl_mask[offset]);
}

inline void doSW(u32 rt, u32 rs, u32 simm16)
{
  u32 address = gpr[rs] + simm16;
  if (CHECK_ALIGNMENT && (address & 3) != 0)
  {
    errorf(memory, "SW unaligned addr:0x%08x pc:0x%08x", address, pc);
  }
  else
  {
    psp::memw( address) = gpr[rt];
  }
}

inline void doSWR(u32 rt, u32 rs, s32 simm16)
{
  static u32 const swl_mask[4] =
    { 0, 0xff, 0xffff, 0xffffff };
  static u32 const swl_shift[4] =
    { 0, 8, 16, 24 };
  u32 address = gpr[rs] + simm16;
  u32 offset = address & 0x3;
  address &= 0xfffffffc;
  psp::memw( address) = (gpr[rt] << swl_shift[offset]) | (psp::memw(address)
      & swl_mask[offset]);
}

inline void doLL(u32 rt, u32 rs, s32 simm16)
{
  u32 address = gpr[rs] + simm16;
  if (CHECK_ALIGNMENT && (address & 3) != 0)
  {
    errorf(memory, "LL unaligned addr:0x%08x pc:0x%08x", address, pc);
  }
  else
  {
    u32 value = (u32) psp::memw(address);
    if (rt != 0)
    {
      gpr[rt] = value;
    }
    // llbit = 1;
  }
}

inline void doSC(u32 rt, u32 rs, u32 simm16)
{
  u32 address = gpr[rs] + simm16;
  if (CHECK_ALIGNMENT && (address & 3) != 0)
  {
    errorf(memory, "SC unaligned addr:0x%08x pc:0x%08x", address, pc);
  }
  else
  {
    psp::memw( address) = gpr[rt];
    gpr[rt] = 1; // = ll_bit;
  }
}

inline void doLWC1(u32 ft, u32 rs, u32 simm16)
{
  u32 address = gpr[rs] + simm16;
  if (CHECK_ALIGNMENT && (address & 3) != 0)
  {
    errorf(memory, "LWC1 unaligned addr:0x%08x pc:0x%08x", address, pc);
  }
  else
  {
    fpr[ft] = psp::memf(address);
  }
}

inline void doSWC1(u32 ft, u32 rs, u32 simm16)
{
  u32 address = gpr[rs] + simm16;
  if (CHECK_ALIGNMENT && (address & 3) != 0)
  {
    errorf(memory, "SWC1 unaligned addr:0x%08x pc:0x%08x", address, pc);
  }
  else
  {
    psp::memf(address) = fpr[ft];
  }
}

#endif /* LSU_H_ */
