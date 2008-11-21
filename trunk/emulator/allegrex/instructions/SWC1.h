template< > struct allegrex_instruction_template_s< 0xe4000000, 0xfc000000 > : allegrex_instruction_unknown_s
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
      return "SWC1";
    }

    virtual void interpret(processor_s &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    allegrex_instruction_template_s() {}
};

typedef allegrex_instruction_template_s< 0xe4000000, 0xfc000000 >
  allegrex_instruction_SWC1_s;

namespace allegrex
{
  extern allegrex_instruction_SWC1_s &SWC1;
}
#ifdef IMPLEMENT_INSTRUCTION
allegrex_instruction_SWC1_s &allegrex::SWC1 =
  allegrex_instruction_SWC1_s::self();
#endif
