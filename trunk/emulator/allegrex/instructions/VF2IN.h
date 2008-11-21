template< > struct allegrex_instruction_template_s< 0xd2000000, 0xffe00000 > : allegrex_instruction_unknown_s
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
      return "VF2IN";
    }

    virtual void interpret(processor_s &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    allegrex_instruction_template_s() {}
};

typedef allegrex_instruction_template_s< 0xd2000000, 0xffe00000 >
  allegrex_instruction_VF2IN_s;

namespace allegrex
{
  extern allegrex_instruction_VF2IN_s &VF2IN;
}
#ifdef IMPLEMENT_INSTRUCTION
allegrex_instruction_VF2IN_s &allegrex::VF2IN =
  allegrex_instruction_VF2IN_s::self();
#endif
