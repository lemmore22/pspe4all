template< > struct allegrex_instruction_template_s< 0x0000000f, 0xffffffff > : allegrex_instruction_unknown_s
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
      return "SYNC";
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

typedef allegrex_instruction_template_s< 0x0000000f, 0xffffffff >
  allegrex_instruction_SYNC_s;

namespace allegrex
{
  extern allegrex_instruction_SYNC_s &SYNC;
}
#ifdef IMPLEMENT_INSTRUCTION
allegrex_instruction_SYNC_s &allegrex::SYNC =
  allegrex_instruction_SYNC_s::self();
#endif