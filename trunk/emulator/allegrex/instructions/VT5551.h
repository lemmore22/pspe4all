template< > struct allegrex_instruction_template_s< 0xd05a0000, 0xffff0000 > : allegrex_instruction_unknown_s
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
      return "VT5551";
    }

    virtual void interpret(processor_s &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    allegrex_instruction_template_s() {}
};

typedef allegrex_instruction_template_s< 0xd05a0000, 0xffff0000 >
  allegrex_instruction_VT5551_s;

namespace allegrex
{
  extern allegrex_instruction_VT5551_s &VT5551;
}
#ifdef IMPLEMENT_INSTRUCTION
allegrex_instruction_VT5551_s &allegrex::VT5551 =
  allegrex_instruction_VT5551_s::self();
#endif
