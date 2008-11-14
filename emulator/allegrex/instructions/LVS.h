template< > struct allegrex_instruction_template_s< 0xc8000000, 0xfc000000 > : allegrex_instruction_unknown_s
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
		return "LVS";
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

typedef allegrex_instruction_template_s< 0xc8000000, 0xfc000000 >
	allegrex_instruction_LVS_s;

namespace allegrex_n
{
	allegrex_instruction_LVS_s &LVS =
		allegrex_instruction_LVS_s::self();
}
