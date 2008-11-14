template< > struct allegrex_instruction_template_s< 0x50000000, 0xfc000000 > : allegrex_instruction_unknown_s
{
	static allegrex_instruction_template_s &self()
	{
		static allegrex_instruction_template_s insn;
		return insn;
	}

	static allegrex_instruction_s *get_instance()
	{
		return &allegrex_instruction_template_s::self();
	}

	virtual allegrex_instruction_s *instruction(int opcode)
	{
		return this;
	}

	virtual char const *opcode_name()
	{
		return "BEQL";
	}

	virtual int disassemble(unsigned int address, unsigned int insn, char *opcode_name, char *operands, char *comment)
	{
		::strcpy(opcode_name, this->opcode_name());
		::strcpy(operands, "");
		::strcpy(comment, "");
		return 0;
	}

protected:
	allegrex_instruction_template_s() {}
};

typedef allegrex_instruction_template_s< 0x50000000, 0xfc000000 >
	allegrex_instruction_BEQL_s;

namespace allegrex_n
{
	allegrex_instruction_BEQL_s &BEQL =
		allegrex_instruction_BEQL_s::self();
}
