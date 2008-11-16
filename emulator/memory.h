/*
 * memory.h
 *
 *  Created on: 2 nov. 2008
 *      Author: hli
 */

#ifndef EMULATOR_MEMORY_H_
#define EMULATOR_MEMORY_H_

#include "emulator.h"

//	0×00010000	0×00004000 (16 KiB)	Scratchpad
//	0×04000000	0×00200000 (2 MiB)	Lower video ram
//	0×04200000	0×00200000 (2 MiB)	Upper video ram (SLIM only)
//	0×08000000	0×02000000 (32 MiB)	Lower main ram
//	0×0A000000	0×02000000 (32 MiB)	Upper main ram (SLIM only)

#define VMEM_START 0x00000000
#define SRAM_START 0x00010000
#define VRAM_START 0x04000000
#define MRAM_START 0x08000000
#define SRAM_SIZE 0x00004000
#define VRAM_SIZE 0x00400000
#define MRAM_SIZE 0x04000000
#define VMEM_SIZE 0x10000000

#ifndef KB
#define KB *1024
#endif
#ifndef MB
#define MB *1024 KB
#endif
#ifndef GB
#define GB *1024 * MB
#endif

union vmem_u
{
    char b[VMEM_SIZE];
    unsigned char bu[VMEM_SIZE];
    short h[VMEM_SIZE/2];
    unsigned short hu[VMEM_SIZE/2];
    int w[VMEM_SIZE/4];
    float f[VMEM_SIZE/4];
};

union sram_u
{
    char b[SRAM_SIZE];
    unsigned char bu[SRAM_SIZE];
    short h[SRAM_SIZE/2];
    unsigned short hu[SRAM_SIZE/2];
    int w[SRAM_SIZE/4];
    float f[SRAM_SIZE/4];
};

union vram_u
{
    char b[VRAM_SIZE];
    unsigned char bu[VRAM_SIZE];
    short h[VRAM_SIZE/2];
    unsigned short hu[VRAM_SIZE/2];
    int w[VRAM_SIZE/4];
    float f[VRAM_SIZE/4];
};

union mram_u
{
    char b[MRAM_SIZE];
    unsigned char bu[MRAM_SIZE];
    short h[MRAM_SIZE/2];
    unsigned short hu[MRAM_SIZE/2];
    int w[MRAM_SIZE/4];
    float f[MRAM_SIZE/4];
};

namespace psp
{
  extern void *memory;

  extern int memory_exception;

  int exception_handler(unsigned int dwCode, void *pExceptionPointers);

  template< typename T > static inline T *addr(int address)
  {
    return reinterpret_cast< T * > (reinterpret_cast< unsigned int > (psp::memory)
        + (address & (VMEM_SIZE - 1)));
  }
  inline static char *addrb(int address)
  {
    return addr< char > (address);
  }
  inline static unsigned char *addrbu(int address)
  {
    return addr< unsigned char > (address);
  }
  inline static short *addrh(int address)
  {
    return addr< short > (address);
  }
  inline static unsigned short *addrhu(int address)
  {
    return addr< unsigned short > (address);
  }
  inline static int *addrw(int address)
  {
    return addr< int > (address);
  }
  inline static float *addrf(int address)
  {
    return addr< float > (address);
  }

  template< typename T > static inline T &mem(int address)
  {
    return *addr< T > (address);
  }
  inline static char &memb(int address)
  {
    return *addrb(address);
  }
  inline static unsigned char &membu(int address)
  {
    return *addrbu(address);
  }
  inline static short &memh(int address)
  {
    return *addrh(address);
  }
  inline static unsigned short &memhu(int address)
  {
    return *addrhu(address);
  }
  inline static int &memw(int address)
  {
    return *addrw(address);
  }
  inline static float &memf(int address)
  {
    return *addrf(address);
  }

  inline static vmem_u &vmem()
  {
    return mem< vmem_u > (0);
  }
  inline static sram_u &sram()
  {
    return mem< sram_u > (SRAM_START);
  }
  inline static vram_u &vram()
  {
    return mem< vram_u > (VRAM_START);
  }
  inline static mram_u &mram()
  {
    return mem< mram_u > (MRAM_START);
  }

  void *reserve_memory();
  void release_memory();

  inline bool memory_reserved()
  {
    return psp::memory != 0;
  }
}

#endif /* EMULATOR_MEMORY_H_ */
