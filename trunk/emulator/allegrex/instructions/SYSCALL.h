template< > struct allegrex_instruction_template_s< 0x0000000c, 0xfc00003f > : allegrex_instruction_unknown_s
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
      return "SYSCALL";
    }

    virtual void interpret(processor_s &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    allegrex_instruction_template_s() {}
};

typedef allegrex_instruction_template_s< 0x0000000c, 0xfc00003f >
  allegrex_instruction_SYSCALL_s;

namespace allegrex
{
  extern allegrex_instruction_SYSCALL_s &SYSCALL;
}
#ifdef IMPLEMENT_INSTRUCTION
allegrex_instruction_SYSCALL_s &allegrex::SYSCALL =
  allegrex_instruction_SYSCALL_s::self();
#endif
