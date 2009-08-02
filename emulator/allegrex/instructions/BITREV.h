template< > struct AllegrexInstructionTemplate< 0x7c000520, 0xffe007ff > : AllegrexInstructionUnknown
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
      return "BITREV";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x7c000520, 0xffe007ff >
  AllegrexInstruction_BITREV;

namespace Allegrex
{
  extern AllegrexInstruction_BITREV &BITREV;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_BITREV &Allegrex::BITREV =
  AllegrexInstruction_BITREV::self();
#endif
