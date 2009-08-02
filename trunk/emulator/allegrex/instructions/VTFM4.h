template< > struct AllegrexInstructionTemplate< 0xf1808080, 0xff808080 > : AllegrexInstructionUnknown
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
      return "VTFM4";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xf1808080, 0xff808080 >
  AllegrexInstruction_VTFM4;

namespace Allegrex
{
  extern AllegrexInstruction_VTFM4 &VTFM4;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VTFM4 &Allegrex::VTFM4 =
  AllegrexInstruction_VTFM4::self();
#endif
