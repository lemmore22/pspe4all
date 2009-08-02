template< > struct AllegrexInstructionTemplate< 0x0000001c, 0xfc00ffff > : AllegrexInstructionUnknown
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
      return "MADD";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x0000001c, 0xfc00ffff >
  AllegrexInstruction_MADD;

namespace Allegrex
{
  extern AllegrexInstruction_MADD &MADD;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_MADD &Allegrex::MADD =
  AllegrexInstruction_MADD::self();
#endif
