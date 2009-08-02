/*
 * Multiply Divide Unit, handles accumulators.
 *
 * mdu.h
 *
 *  Created on: 15 nov. 2008
 *      Author: hli
 */

#ifndef MDU_H_
#define MDU_H_

inline u32 &lo()
{
  return (reinterpret_cast< u32 * > (&hilo))[0];
}
inline u32 &hi()
{
  return (reinterpret_cast< u32 * > (&hilo))[1];
}

inline void doMFHI(u32 rd)
{
  if (rd != 0)
  {
    gpr[rd] = (u32) (hilo >> 32);
  }
}

inline void doMTHI(u32 rs)
{
  hi() = gpr[rs];
}

inline void doMFLO(u32 rd)
{
  if (rd != 0)
  {
    gpr[rd] = (u32) hilo;
  }
}

inline void doMTLO(u32 rs)
{
  lo() = gpr[rs];
}

inline void doMULT(u32 rs, u32 rt)
{
  hilo = (u64) (((s64) gpr[rs]) * ((s64) gpr[rt]));
}

inline void doMULTU(u32 rs, u32 rt)
{
  hilo = ((u64) gpr[rs]) * ((u64) gpr[rt]);
}

inline void doDIV(u32 rs, u32 rt)
{
  lo() = (u32) (((s32) gpr[rs]) / ((s32) gpr[rt]));
  hi() = (u32) (((s32) gpr[rs]) % ((s32) gpr[rt]));
}

inline void doDIVU(u32 rs, u32 rt)
{
  lo() = ((u32) gpr[rs]) / ((u32) gpr[rt]);
  hi() = ((u32) gpr[rs]) % ((s32) gpr[rt]);
}

inline void doMADD(u32 rs, u32 rt)
{
  hilo += (u64) (((s64) gpr[rs]) * ((s64) gpr[rt]));
}

inline void doMADDU(u32 rs, u32 rt)
{
  hilo += (u64) (((u64) gpr[rs]) * ((u64) gpr[rt]));
}

inline void doMSUB(u32 rs, u32 rt)
{
  hilo -= (u64) (((s64) gpr[rs]) * ((s64) gpr[rt]));
}

inline void doMSUBU(u32 rs, u32 rt)
{
  hilo -= ((u64) gpr[rs]) * ((u64) gpr[rt]);
}

#endif /* MDU_H_ */
