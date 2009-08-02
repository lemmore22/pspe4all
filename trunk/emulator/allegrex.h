/*
 * allegrex.h
 *
 *  Created on: 11 nov. 2008
 *      Author: hli
 */

#ifndef EMULATOR_ALLEGREX_H_
#define EMULATOR_ALLEGREX_H_

#include "allegrex/instruction.h"

namespace Allegrex
{
  extern AllegrexInstruction *decode_instruction(u32 opcode);
  extern void create_instructions_directory();
  extern void create_interpreter_directory();
  extern void create_disassembler_directory();
};

#ifdef BUILD_ALLEGREX
#include <cstdio>

static void create_instructions_file(char const *filepathname, const char *name)
{
  FILE *out = ::fopen(filepathname, "a");
  if (out)
  {
    ::fprintf(out, "#include \"instructions/%s.h\"\n", name);
    ::fclose(out);
  }
}

static void create_instruction_file(
    char const *filepathname,
    const char *name,
    int signature,
    int mask)
{
  FILE *out = ::fopen(filepathname, "w");
  if (out)
  {
    ::fprintf(
        out,
          "template< > struct AllegrexInstructionTemplate< 0x%08x, 0x%08x > : AllegrexInstructionUnknown\n"
          "{\n"
          "    static AllegrexInstructionTemplate &self()\n"
          "    {\n"
          "      static AllegrexInstructionTemplate insn;\n"
          "      return insn;\n"
          "    }\n"
          "\n"
          "    static AllegrexInstructionTemplate *get_instance()\n"
          "    {\n"
          "      return &AllegrexInstructionTemplate::self();\n"
          "    }\n"
          "\n"
          "    virtual AllegrexInstructionTemplate *instruction(u32 opcode)\n"
          "    {\n"
          "      return this;\n"
          "    }\n"
          "\n"
          "    virtual char const *opcode_name()\n"
          "    {\n"
          "      return \"%s\";\n"
          "    }\n"
          "\n"
          "    virtual void interpret(processor_s &processor, u32 opcode);\n"
          "\n"
          "    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);"
          "\n"
          "  protected:\n"
          "    AllegrexInstructionTemplate() {}\n"
          "};\n"
          "\n"
          "typedef AllegrexInstructionTemplate< 0x%08x, 0x%08x >\n"
          "  AllegrexInstruction_%s;\n"
          "\n"
          "namespace Allegrex\n"
          "{\n"
          "  extern AllegrexInstruction_%s &%s;\n"
          "}\n"
          "#ifdef IMPLEMENT_INSTRUCTION\n"
          "AllegrexInstruction_%s &Allegrex::%s =\n"
          "  AllegrexInstruction_%s::self();\n"
          "#endif\n",
        signature,
        mask,
        name,
        signature,
        mask,
        name,
        name,
        name,
        name,
        name,
        name);
    ::fclose(out);
  }
}

static void create_interpreter_file(char const *filepathname, const char *name)
{
  FILE *out = ::fopen(filepathname, "a");
  if (out)
  {
    ::fprintf(out, "#include \"interpreter/%s.h\"\n", name);
    ::fclose(out);
  }
}

static void create_interpreter_file(
    char const *filepathname,
    const char *name,
    int signature,
    int mask)
{
  FILE *out = ::fopen(filepathname, "w");
  if (out)
  {
    ::fprintf(
        out,
          "/* %s */\n"
          "void AllegrexInstructionTemplate< 0x%08x, 0x%08x >::interpret(processor_s &processor, u32 opcode)\n"
          "{\n"
          "}\n",
        name,
        signature,
        mask);
    ::fclose(out);
  }
}

static void create_disassembler_file(char const *filepathname, const char *name)
{
  FILE *out = ::fopen(filepathname, "a");
  if (out)
  {
    ::fprintf(out, "#include \"disassembler/%s.h\"\n", name);
    ::fclose(out);
  }
}

static void create_disassembler_file(
    char const *filepathname,
    const char *name,
    int signature,
    int mask)
{
  FILE *out = ::fopen(filepathname, "w");
  if (out)
  {
    ::fprintf(
        out,
          "/* %s */\n"
          "void AllegrexInstructionTemplate< 0x%08x, 0x%08x >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)\n"
          "{\n"
          "  ::strcpy(opcode_name, this->opcode_name());\n"
          "  ::strcpy(operands, \"\");\n"
          "  ::strcpy(comment, \"\");\n"
          "}\n",
        name,
        signature,
        mask);
    ::fclose(out);
  }
}

#if 0
#define IDEF(n, m, s, x) typedef AllegrexInstructionTemplate< s, m > AllegrexInstruction_##n;
#include "emulator/allegrex/allegrex.def"
#undef IDEF
#define IDEF(n, m, s, x) char const *AllegrexInstructionTemplate< s, m >::opcode_name() { return #n; }
#include "emulator/allegrex/allegrex.def"
#undef IDEF
#endif

namespace Allegrex
{
  void create_instructions_directory()
  {
    FILE *out = ::fopen("emulator/allegrex/instructions.h", "w");
    if (out)
    {
      ::fclose(out);
#define IDEF(n, m, s, x) create_instructions_file("emulator/allegrex/instructions.h", #n);
#include "emulator/allegrex/allegrex.def"
#undef IDEF
#define IDEF(n, m, s, x) create_instruction_file("emulator/allegrex/instructions/" #n ".h", #n, s, m);
#include "emulator/allegrex/allegrex.def"
#undef IDEF
    }
  }

  void create_interpreter_directory()
  {
    FILE *out = ::fopen("emulator/allegrex/interpreter.h", "w");
    if (out)
    {
      ::fclose(out);
#define IDEF(n, m, s, x) create_interpreter_file("emulator/allegrex/interpreter.h", #n);
#include "emulator/allegrex/allegrex.def"
#undef IDEF
#define IDEF(n, m, s, x) create_interpreter_file("emulator/allegrex/interpreter/" #n ".h", #n, s, m);
#include "emulator/allegrex/allegrex.def"
#undef IDEF
    }
  }

  void create_disassembler_directory()
  {
    FILE *out = ::fopen("emulator/allegrex/disassembler.h", "w");
    if (out)
    {
      ::fclose(out);
#define IDEF(n, m, s, x) create_disassembler_file("emulator/allegrex/disassembler.h", #n);
#include "emulator/allegrex/allegrex.def"
#undef IDEF
#define IDEF(n, m, s, x) create_disassembler_file("emulator/allegrex/disassembler/" #n ".h", #n, s, m);
#include "emulator/allegrex/allegrex.def"
#undef IDEF
    }
  }
}
#endif

#endif /* EMULATOR_ALLEGREX_H_ */
