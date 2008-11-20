template< > struct allegrex_instruction_template_s< 0xd0180000, 0xffff0000 > : allegrex_instruction_unknown_s
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
      return "VNRCP";
    }

    virtual void interpret(processor_s &processor, u32 opcode);

    virtual int disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
    {
      ::strcpy(opcode_name, this->opcode_name());
      ::strcpy(operands, "");
      ::strcpy(comment, "");
      return 0;
    }

  protected:
    allegrex_instruction_template_s() {}
};

typedef allegrex_instruction_template_s< 0xd0180000, 0xffff0000 >
  allegrex_instruction_VNRCP_s;

namespace allegrex
{
  extern allegrex_instruction_VNRCP_s &VNRCP;
}
#ifdef IMPLEMENT_INSTRUCTION
allegrex_instruction_VNRCP_s &allegrex::VNRCP =
  allegrex_instruction_VNRCP_s::self();
#endif
