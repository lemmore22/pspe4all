/*
 * memory.cpp
 *
 *  Created on: 15 nov. 2008
 *      Author: hli
 */

/*
 * specific.h
 *
 *  Created on: 2 nov. 2008
 *      Author: hli
 */

#include "emulator/memory.h"

void *psp::memory = 0;
int psp::memory_exception = 0;

#include <windows.h>

static HANDLE psp_memory_handle;

static bool mapped_buffer(unsigned int address, unsigned int times, unsigned int offset, unsigned int size)
{
  void *buffer =
    ::MapViewOfFileEx
      (
          psp_memory_handle,
          FILE_MAP_READ|FILE_MAP_WRITE,
          0,
          offset,
          size,
          (LPVOID)(reinterpret_cast< unsigned int >(psp::memory) + address)
      );

  if (!buffer)
  {
    return false;
  }

  for (unsigned int i = 1; i < times; ++i)
  {
    address += size;
    void *p =
      ::MapViewOfFileEx
      (
          psp_memory_handle,
          FILE_MAP_READ,
          0,
          offset,
          size,
          (LPVOID)(reinterpret_cast< unsigned int >(psp::memory) + address)
      );
    if (!p)
    {
      return false;
    }
  }

  return true;
}


static bool unused_buffer(unsigned int start, unsigned int end)
{
  start = (start + 0xFFFF)&~0xFFFF;
  void *buffer =
    ::VirtualAlloc
    (
        (LPVOID)(reinterpret_cast< unsigned int >(psp::memory) + start),
        end - start,
        MEM_RESERVE,
        PAGE_NOACCESS
    );
  if (buffer == 0)
  {
    return false;
  }
  return true;
}

void *psp::reserve_memory()
{
  psp_memory_handle =
    ::CreateFileMapping
    (
        INVALID_HANDLE_VALUE,
        0,
        PAGE_READWRITE,
        0,
        SRAM_SIZE + VRAM_SIZE + MRAM_SIZE,
        0
    );

  if (psp_memory_handle == INVALID_HANDLE_VALUE)
  {
    return 0;
  }

  psp::memory =
    ::VirtualAlloc
    (
        (void *)0,
        VMEM_SIZE,
        MEM_RESERVE,
        PAGE_NOACCESS
    );

  if (!psp::memory)
  {
    return 0;
  }

  ::VirtualFree(psp::memory, 0, MEM_RELEASE);

  //      0×00010000      0×00004000 (16 KiB)     Scratchpad
  //      0×04000000      0×00200000 (2 MiB)      Lower video ram
  //      0×04200000      0×00200000 (2 MiB)      Upper video ram (SLIM only)
  //      0×08000000      0×02000000 (32 MiB)     Lower main ram
  //      0×0A000000      0×02000000 (32 MiB)     Upper main ram (SLIM only)

  if
  (
      true
      && unused_buffer(0x00000000, 0x00010000)
      && mapped_buffer(0x00010000, 1, MRAM_SIZE + VRAM_SIZE, SRAM_SIZE)
      && unused_buffer(0x00014000, 0x04000000)
      && mapped_buffer(0x04000000, 1, MRAM_SIZE, VRAM_SIZE)
      && unused_buffer(0x04400000, 0x08000000)
      && mapped_buffer(0x08000000, 1, 0, MRAM_SIZE)
      && unused_buffer(0x0C000000, 0x10000000)
  )
  {
    return psp::memory;
  }
  return 0;
}

void psp::release_memory()
{
  if (psp::memory)
  {
    ::UnmapViewOfFile(psp::memory);
  }

  if (psp_memory_handle != INVALID_HANDLE_VALUE)
  {
    ::CloseHandle(psp_memory_handle);
  }
}

int psp::exception_handler(unsigned int dwCode, void *pExceptionPointers)
{
  EXCEPTION_POINTERS *ep = (EXCEPTION_POINTERS *)pExceptionPointers;

  EXCEPTION_RECORD *pExceptionRecord = ep->ExceptionRecord;

  psp::memory_exception = 0;

  if (dwCode != EXCEPTION_ACCESS_VIOLATION)
    return EXCEPTION_CONTINUE_SEARCH;

  unsigned int address = (unsigned int)pExceptionRecord->ExceptionInformation[1] - (unsigned int)psp::memory;

  if (address < 0x00010000)
  {
    psp::memory_exception = -1;
    return EXCEPTION_EXECUTE_HANDLER;
  }
  else if (address < 0x00014000)
  {
    psp::memory_exception = 3;
    return EXCEPTION_CONTINUE_EXECUTION;
  }
  else if (address < 0x04000000)
  {
    psp::memory_exception = -1;
    return EXCEPTION_EXECUTE_HANDLER;
  }
  else if (address < 0x04400000)
  {
    psp::memory_exception = 2;
    return EXCEPTION_CONTINUE_EXECUTION;
  }
  else if (address < 0x08010000)
  {
    psp::memory_exception = -1;
    return EXCEPTION_EXECUTE_HANDLER;
  }
  else if (address < 0x0C000000)
  {
    psp::memory_exception = 1;
    return EXCEPTION_CONTINUE_EXECUTION;
  }
  else
  {
    psp::memory_exception = -1;
    return EXCEPTION_EXECUTE_HANDLER;
  }

  return EXCEPTION_CONTINUE_SEARCH;
}
