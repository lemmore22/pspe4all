template< > struct AllegrexInstructionTemplate< 0x00000018, 0xfc00ffff > : AllegrexInstructionUnknown
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
      return "MULT";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x00000018, 0xfc00ffff >
  AllegrexInstruction_MULT;

namespace Allegrex
{
  extern AllegrexInstruction_MULT &MULT;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_MULT &Allegrex::MULT =
  AllegrexInstruction_MULT::self();
#endif
