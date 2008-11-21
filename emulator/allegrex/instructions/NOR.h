template< > struct allegrex_instruction_template_s< 0x00000027, 0xfc0007ff > : allegrex_instruction_unknown_s
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
      return "NOR";
    }

    virtual void interpret(processor_s &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    allegrex_instruction_template_s() {}
};

typedef allegrex_instruction_template_s< 0x00000027, 0xfc0007ff >
  allegrex_instruction_NOR_s;

namespace allegrex
{
  extern allegrex_instruction_NOR_s &NOR;
}
#ifdef IMPLEMENT_INSTRUCTION
allegrex_instruction_NOR_s &allegrex::NOR =
  allegrex_instruction_NOR_s::self();
#endif
