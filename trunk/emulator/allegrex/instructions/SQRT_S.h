template< > struct AllegrexInstructionTemplate< 0x46000004, 0xffff003f > : AllegrexInstructionUnknown
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
      return "SQRT_S";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x46000004, 0xffff003f >
  AllegrexInstruction_SQRT_S;

namespace Allegrex
{
  extern AllegrexInstruction_SQRT_S &SQRT_S;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_SQRT_S &Allegrex::SQRT_S =
  AllegrexInstruction_SQRT_S::self();
#endif
