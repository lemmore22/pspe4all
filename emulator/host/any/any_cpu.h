/*
 * any_cpu.h
 *
 *  Created on: 22 nov. 2008
 *      Author: hli
 */

#ifndef ANY_CPU_H_
#define ANY_CPU_H_

#undef __host_rotr
#define __host_rotr($rt, $sa) \
  ({ ($rt >> $sa)|($rt << (32-$sa)); })

#undef __host_rotrv
#define __host_rotrv($rt, $rs) \
  ({ u32 $sa = $rt & 31; ($rt >> $sa)|($rt << (32-$sa)); })

#undef __host_clz
#define __host_clz($rs) \
  ({ $rs ? u32(__builtin_clz(s32($rs))) : u32(32); })

#undef __host_clo
#define __host_clo($rs) \
  ({ u32 x = ~$rs; __host_clz(x); })

#undef __host_min
#define __host_min($rs, $rt) \
  ({ u32 x = $rs, y = $rt; (x < y) ? x : y; })

#undef __host_max
#define __host_max($rs, $rt) \
  ({ u32 x = $rs, y = $rt; (x > y) ? x : y; })

#undef __host_wsbh
#define __host_wsbh($rt) \
  ({ u32 x = $rt; ((x & 0x00ff00ff) << 8)|((x & 0xff00ff00) >> 8); })

#undef __host_wsbw
#define __host_wsbw($rt) \
  __host_rotr(__host_wsbh($rt), 16)

#undef __host_bitrev
#define __host_bitrev($rt) \
  ({ \
    u32 x = __host_wsbw($rt); \
    ((x & 0x01010101) << 7)| \
    ((x & 0x02020202) << 6)| \
    ((x & 0x04040404) << 5)| \
    ((x & 0x08080808) << 4)| \
    ((x & 0x10101010) >> 4)| \
    ((x & 0x20202020) >> 5)| \
    ((x & 0x40404040) >> 6)| \
    ((x & 0x80808080) >> 7); \
  })

#undef __host_ext
#define __host_ext($rs, pos, len) \
  ({ ($rs >> pos) & ~(~0 << len); })

#undef __host_ins
#define __host_ins($rt, $rs, pos, len) \
  ({ u32 x = ~(~0 << len) << pos;  ($rt & ~x) | (($rs << pos) & x); })

#undef __host_mult
#define __host_mult(x, y) \
  ({ s64 hilo = ((s32) x) * ((s32) y); hilo; })

#undef __host_multu
#define __host_multu(x, y) \
  ({ s64 hilo = ((s32) x) * ((s32) y); hilo; })

#undef __host_madd
#define __host_madd(x, y, hilo) \
  ({ ((s64) hilo) + ((s64) x) * ((s32) y); })

#undef __host_maddu
#define __host_maddu(x, y, hilo) \
  ({ ((u64) hilo) + ((u64) x) * ((u32) y); })

#undef __host_msub
#define __host_msub(x, y, hilo) \
  ({ ((s64) hilo) - ((s64) x) * ((s32) y); })

#undef __host_msubu
#define __host_msubu(x, y) \
  ({ ((u64) hilo) - ((u64) x) * ((u32) y); })

#endif /* ANY_CPU_H_ */
