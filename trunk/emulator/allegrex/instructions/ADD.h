template< > struct allegrex_instruction_template_s< 0x00000020, 0xfc0007ff > : allegrex_instruction_unknown_s
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
      return "ADD";
    }

    virtual void interpret(processor_s &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    allegrex_instruction_template_s() {}
};

typedef allegrex_instruction_template_s< 0x00000020, 0xfc0007ff >
  allegrex_instruction_ADD_s;

namespace allegrex
{
  extern allegrex_instruction_ADD_s &ADD;
}
#ifdef IMPLEMENT_INSTRUCTION
allegrex_instruction_ADD_s &allegrex::ADD =
  allegrex_instruction_ADD_s::self();
#endif
