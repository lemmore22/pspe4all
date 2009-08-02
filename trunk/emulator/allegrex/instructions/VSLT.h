template< > struct AllegrexInstructionTemplate< 0x6e000000, 0xff800000 > : AllegrexInstructionUnknown
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
      return "VSLT";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x6e000000, 0xff800000 >
  AllegrexInstruction_VSLT;

namespace Allegrex
{
  extern AllegrexInstruction_VSLT &VSLT;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VSLT &Allegrex::VSLT =
  AllegrexInstruction_VSLT::self();
#endif
