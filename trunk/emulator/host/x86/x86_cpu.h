/*
 * x86_cpu.h
 *
 *  Created on: 22 nov. 2008
 *      Author: hli
 */

#ifndef X86_CPU_H_
#define X86_CPU_H_

#include "../any/any_cpu.h"

#undef __host_rotr
#define __host_rotr(rt, sa) \
  ({ u32 rd = rt; __asm__ __volatile__ ("rorl %%cl, %0" : "+r"(rd) : "c"(sa)); rd; })

#undef __host_rotrv
#define __host_rotrv(rt, rs) \
  ({ u32 rd = rt; __asm__ __volatile__ ("rorl %%cl, %0" : "+r"(rd) : "c"(rs&31)); rd; })

#endif /* X86_CPU_H_ */
