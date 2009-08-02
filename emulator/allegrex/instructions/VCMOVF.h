template< > struct AllegrexInstructionTemplate< 0xd2a80000, 0xfff80000 > : AllegrexInstructionUnknown
{
    static AllegrexInstructionTemplate &self()
    {
      static AllegrexInstructionTemplate insn;
      return insn;
    }

    static AllegrexInstruction *get_instance()
    {
      return &AllegrexInstructionTemplate::self();
    }

    virtual AllegrexInstruction *instruction(u32 opcode)
    {
      return this;
    }

    virtual char const *opcode_name()
    {
      return "VCMOVF";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd2a80000, 0xfff80000 >
  AllegrexInstruction_VCMOVF;

namespace Allegrex
{
  extern AllegrexInstruction_VCMOVF &VCMOVF;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VCMOVF &Allegrex::VCMOVF =
  AllegrexInstruction_VCMOVF::self();
#endif
