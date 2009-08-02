template< > struct AllegrexInstructionTemplate< 0x04000000, 0xfc1f0000 > : AllegrexInstructionUnknown
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
      return "BLTZ";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x04000000, 0xfc1f0000 >
  AllegrexInstruction_BLTZ;

namespace Allegrex
{
  extern AllegrexInstruction_BLTZ &BLTZ;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_BLTZ &Allegrex::BLTZ =
  AllegrexInstruction_BLTZ::self();
#endif
