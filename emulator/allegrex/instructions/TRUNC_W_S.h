template< > struct allegrex_instruction_template_s< 0x4600000d, 0xffff003f > : allegrex_instruction_unknown_s
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

    virtual allegrex_instruction_s *instruction(u32 opcode)
    {
      return this;
    }

    virtual char const *opcode_name()
    {
      return "TRUNC_W_S";
    }

    virtual void interpret(processor_s &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    allegrex_instruction_template_s() {}
};

typedef allegrex_instruction_template_s< 0x4600000d, 0xffff003f >
  allegrex_instruction_TRUNC_W_S_s;

namespace allegrex
{
  extern allegrex_instruction_TRUNC_W_S_s &TRUNC_W_S;
}
#ifdef IMPLEMENT_INSTRUCTION
allegrex_instruction_TRUNC_W_S_s &allegrex::TRUNC_W_S =
  allegrex_instruction_TRUNC_W_S_s::self();
#endif
