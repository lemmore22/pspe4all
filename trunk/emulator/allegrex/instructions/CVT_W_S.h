template< > struct allegrex_instruction_template_s< 0x46000024, 0xffff003f > : allegrex_instruction_unknown_s
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
      return "CVT_W_S";
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

typedef allegrex_instruction_template_s< 0x46000024, 0xffff003f >
  allegrex_instruction_CVT_W_S_s;

namespace allegrex
{
  extern allegrex_instruction_CVT_W_S_s &CVT_W_S;
}
#ifdef IMPLEMENT_INSTRUCTION
allegrex_instruction_CVT_W_S_s &allegrex::CVT_W_S =
  allegrex_instruction_CVT_W_S_s::self();
#endif