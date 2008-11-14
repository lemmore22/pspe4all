/*
 * allegrex.h
 *
 *  Created on: 11 nov. 2008
 *      Author: hli
 */

#ifndef ALLEGREX_H_
#define ALLEGREX_H_

#include "allegrex/instruction.h"

#if 0

void create_instructions_file(char const *filepathname, const char *name)
{
	FILE *out = fopen(filepathname, "a");
	if (out)
	{
		fprintf(out, "#include \"instructions/%s.h\"\n", name);
		fclose(out);
	}
}

void create_instruction_file(char const *filepathname, const char *name, int signature, int mask)
{
	FILE *out = fopen(filepathname, "w");
	if (out)
	{
		fprintf
		(
			out,
                        "template< > struct allegrex_instruction_template_s< 0x%08x, 0x%08x > : allegrex_instruction_unknown_s\n"
			"{\n"
			"	static allegrex_instruction_template_s &self()\n"
			"	{\n"
			"		static allegrex_instruction_template_s insn;\n"
			"		return insn;\n"
			"	}\n"
			"\n"
			"	static allegrex_instruction_s *get_instance()\n"
			"	{\n"
			"		return &allegrex_instruction_template_s::self();\n"
			"	}\n"
			"\n"
			"	virtual allegrex_instruction_s *instruction(int opcode)\n"
			"	{\n"
			"		return this;\n"
			"	}\n"
			"\n"
			"	virtual char const *opcode_name()\n"
			"	{\n"
			"		return \"%s\";\n"
			"	}\n"
			"\n"
			"	virtual int disassemble(unsigned int address, unsigned int insn, char *opcode_name, char *operands, char *comment)\n"
			"	{\n"
			"		::strcpy(opcode_name, this->opcode_name());\n"
			"		::strcpy(operands, \"\");\n"
			"		::strcpy(comment, \"\");\n"
			"		return 0;\n"
			"	}\n"
			"\n"
			"protected:\n"
			"	allegrex_instruction_template_s() {}\n"
			"};\n"
			"\n"
			"typedef allegrex_instruction_template_s< 0x%08x, 0x%08x >\n"
			"	allegrex_instruction_%s_s;\n"
			"\n"
			"namespace allegrex_n\n"
			"{\n"
			"	allegrex_instruction_%s_s &%s =\n"
			"		allegrex_instruction_%s_s::self();\n"
			"}\n",
			signature,
			mask,
			name,
			signature,
			mask,
			name,
			name,
			name,
			name
		);
		fclose(out);
	}
}

#define IDEF(n, m, s, x) typedef allegrex_instruction_template_s< s, m > allegrex_instruction_##n##_s;
#include "allegrex/allegrex.def"
#undef IDEF
#define IDEF(n, m, s, x) char const *allegrex_instruction_template_s< s, m >::opcode_name() { return #n; }
#include "allegrex/allegrex.def"
#undef IDEF
#define IDEF(n, m, s, x) create_instruction_file("emulator/allegrex/instructions/" #n ".h", #n, s, m);
#include "emulator/allegrex/allegrex.def"
#undef IDEF
#else
#include "allegrex/instructions.h"
#endif

namespace allegrex_n
{
  static allegrex_instruction_s *decode_instruction(int opcode);
};

#endif /* ALLEGREX_H_ */
