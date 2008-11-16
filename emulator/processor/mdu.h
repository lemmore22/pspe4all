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

    inline u32 &lo() { return (reinterpret_cast< u32[2] >(&hilo))[0]; }
    inline u32 &hi() { return (reinterpret_cast< u32[2] >(&hilo))[1]; }

    inline void doMFHI(int rd)
    {
        if (rd != 0)
        {
            gpr[rd] = (u32)(hilo>>32);
        }
    }

    inline void doMTHI(int rs)
    {
        hi() = gpr[rs];
    }

    inline void doMFLO(int rd)
    {
        if (rd != 0)
        {
            gpr[rd] = (u32)hilo;
        }
    }

    inline void doMTLO(int rs)
    {
        lo() = gpr[rs];
    }

    inline void doMULT(int rs, int rt)
    {
        hilo = ((s64) gpr[rs]) * ((s64) gpr[rt]);
    }

    inline void doMULTU(int rs, int rt)
    {
        hilo = ((u64) gpr[rs]) * ((u64) gpr[rt]);
    }

    inline void doDIV(int rs, int rt)
    {
      lo() = gpr[rs] / gpr[rt];
      hi() = gpr[rs] % gpr[rt];
    }

    inline void doMADD(int rs, int rt)
    {
        hilo += ((s64) gpr[rs]) * ((s64) gpr[rt]);
    }

    inline void doMADDU(int rs, int rt)
    {
        hilo += ((u64) gpr[rs]) * ((u64) gpr[rt]);
    }

    inline void doMSUB(int rs, int rt)
    {
        hilo -= ((s64) gpr[rs]) * ((s64) gpr[rt]);
    }

    inline void doMSUBU(int rs, int rt)
    {
        hilo -= ((u64) gpr[rs]) * ((u64) gpr[rt]);
    }
}

#endif /* MDU_H_ */
