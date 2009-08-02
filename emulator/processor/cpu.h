/*
 * cpu.h
 *
 * General Purpose Registers, handles integer operations like ALU, shifter, etc.
 *
 *  Created on: 20 nov. 2008
 *      Author: hli
 */

#ifndef CPU_H_
#define CPU_H_

inline void doSLL(u32 rd, u32 rt, u32 sa)
{
  if (rd != 0)
  {
    gpr[rd] = (u32(gpr[rt]) << sa);
  }
}

inline void doSRL(u32 rd, u32 rt, u32 sa)
{
  if (rd != 0)
  {
    gpr[rd] = (u32(gpr[rt]) >> sa);
  }
}

inline void doSRA(u32 rd, u32 rt, u32 sa)
{
  if (rd != 0)
  {
    gpr[rd] = (s32(gpr[rt]) >> sa);
  }
}

inline void doSLLV(u32 rd, u32 rt, u32 rs)
{
  if (rd != 0)
  {
    gpr[rd] = (u32(gpr[rt]) << (gpr[rs] & 31));
  }
}

inline void doSRLV(u32 rd, u32 rt, u32 rs)
{
  if (rd != 0)
  {
    gpr[rd] = (u32(gpr[rt]) >> (gpr[rs] & 31));
  }
}

inline void doSRAV(u32 rd, u32 rt, u32 rs)
{
  if (rd != 0)
  {
    gpr[rd] = (s32(gpr[rt]) >> (gpr[rs] & 31));
  }
}

inline void doADDU(u32 rd, u32 rs, u32 rt)
{
  if (rd != 0)
  {
    gpr[rd] = gpr[rs] + gpr[rt];
  }
}

inline void doSUBU(u32 rd, u32 rs, u32 rt)
{
  if (rd != 0)
  {
    gpr[rd] = gpr[rs] - gpr[rt];
  }
}

inline void doAND(u32 rd, u32 rs, u32 rt)
{
  if (rd != 0)
  {
    gpr[rd] = gpr[rs] & gpr[rt];
  }
}

inline void doOR(u32 rd, u32 rs, u32 rt)
{
  if (rd != 0)
  {
    gpr[rd] = gpr[rs] | gpr[rt];
  }
}

inline void doXOR(u32 rd, u32 rs, u32 rt)
{
  if (rd != 0)
  {
    gpr[rd] = gpr[rs] ^ gpr[rt];
  }
}

inline void doNOR(u32 rd, u32 rs, u32 rt)
{
  if (rd != 0)
  {
    gpr[rd] = ~(gpr[rs] | gpr[rt]);
  }
}

inline void doSLT(u32 rd, u32 rs, u32 rt)
{
  if (rd != 0)
  {
    gpr[rd] = (s32(gpr[rs]) < s32(gpr[rt]));
  }
}

inline void doSLTU(u32 rd, u32 rs, u32 rt)
{
  if (rd != 0)
  {
    gpr[rd] = (u32(gpr[rs]) < u32(gpr[rt]));
  }
}

inline void doADDIU(u32 rt, u32 rs, s32 simm16)
{
  if (rt != 0)
  {
    gpr[rt] = gpr[rs] + simm16;
  }
}

inline void doSLTI(u32 rt, u32 rs, s32 simm16)
{
  if (rt != 0)
  {
    gpr[rt] = (s32(gpr[rs]) < simm16);
  }
}

inline void doSLTIU(u32 rt, u32 rs, s32 simm16)
{
  if (rt != 0)
  {
    gpr[rt] = (u32(gpr[rs]) < u32(simm16));
  }
}

inline void doANDI(u32 rt, u32 rs, u32 uimm16)
{
  if (rt != 0)
  {
    gpr[rt] = gpr[rs] & uimm16;
  }
}

inline void doORI(u32 rt, u32 rs, u32 uimm16)
{
  if (rt != 0)
  {
    gpr[rt] = gpr[rs] | uimm16;
  }
}

inline void doXORI(u32 rt, u32 rs, u32 uimm16)
{
  if (rt != 0)
  {
    gpr[rt] = gpr[rs] ^ uimm16;
  }
}

/* load upper 16-bit immediate */
inline void doLUI(u32 rt, u32 uimm16)
{
  if (rt != 0)
  {
    gpr[rt] = uimm16 << 16;
  }
}

/* bitwise right rotation */
inline void doROTR(u32 rd, u32 rt, u32 sa)
{
  if (rd != 0)
  {
    gpr[rd] = __host_rotr(gpr[rt], sa);
  }
}

/* bitwise right rotation */
inline void doROTRV(u32 rd, u32 rt, u32 rs)
{
  if (rd != 0)
  {
    gpr[rd] = __host_rotr(gpr[rt], gpr[rs]);
  }
}

/* move if zero */
inline void doMOVZ(u32 rd, u32 rs, u32 rt)
{
  if ((rd != 0) && (gpr[rt] == 0))
  {
    gpr[rd] = gpr[rs];
  }
}

/* move if non-zero */
inline void doMOVN(u32 rd, u32 rs, u32 rt)
{
  if ((rd != 0) && (gpr[rt] != 0))
  {
    gpr[rd] = gpr[rs];
  }
}

/* count leading zeroes */
inline void doCLZ(u32 rd, u32 rs)
{
  if (rd != 0)
  {
    gpr[rd] = __host_clz(gpr[rs]);
  }
}

/* count leading ones */
inline void doCLO(u32 rd, u32 rs)
{
  if (rd != 0)
  {
    gpr[rd] = __host_clo(gpr[rs]);
  }
}

/* maximal value between two signed integers */
inline void doMAX(u32 rd, u32 rs, u32 rt)
{
  if (rd != 0)
  {
    gpr[rd] = __host_max(gpr[rs], gpr[rt]);
  }
}

/* minimal value between two signed integers */
inline void doMIN(u32 rd, u32 rs, u32 rt)
{
  if (rd != 0)
  {
    gpr[rd] = __host_min(gpr[rs], gpr[rt]);
  }
}

/* bitwise extraction */
inline void doEXT(u32 rt, u32 rs, u32 lsb, u32 dbmalsb)
{
  if (rt != 0)
  {
    // lsb = least significant bit for bitwise extraction
    // dbmalsb = distance between most and least significant bits for bitwise extraction
    gpr[rt] = __host_ext(gpr[rs], lsb, dbmalsb + 1);
  }
}

/* bitwise insertion */
inline void doINS(u32 rt, u32 rs, u32 lsb, u32 msb)
{
  if (rt != 0)
  {
    // lsb = least significant bit for bitwise insertion
    // msb = most significant bit for bitwise insertion
    gpr[rt] = __host_ins(gpr[rt], gpr[rs], lsb, msb - lsb + 1);
  }
}

/* word swap byte within halfword : XYZW -> YXWZ */
inline void doWSBH(u32 rd, u32 rt)
{
  if (rd != 0)
  {
    gpr[rd] = __host_wsbh(gpr[rt]);
  }
}

/* word swap byte within word : XYZW -> ZWYX */
inline void doWSBW(u32 rd, u32 rt)
{
  if (rd != 0)
  {
    gpr[rd] = __host_wsbw(gpr[rt]);
  }
}

/* sign-extend byte */
inline void doSEB(u32 rd, u32 rt)
{
  if (rd != 0)
  {
    gpr[rd] = u32((s32) (s8) gpr[rt]);
  }
}

/* bit reverse */
inline void doBITREV(u32 rd, u32 rt)
{
  if (rd != 0)
  {
    gpr[rd] = __host_bitrev(gpr[rt]);
  }
}

/* sign-extend halfword */
inline void doSEH(u32 rd, u32 rt)
{
  if (rd != 0)
  {
    gpr[rd] = u32((s32) (s16) gpr[rt]);
  }
}

#endif /* CPU_H_ */
