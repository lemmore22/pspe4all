template< > struct AllegrexInstructionTemplate< 0xf0800080, 0xff808080 > : AllegrexInstructionUnknown
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
      return "VTFM2";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xf0800080, 0xff808080 >
  AllegrexInstruction_VTFM2;

namespace Allegrex
{
  extern AllegrexInstruction_VTFM2 &VTFM2;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VTFM2 &Allegrex::VTFM2 =
  AllegrexInstruction_VTFM2::self();
#endif
