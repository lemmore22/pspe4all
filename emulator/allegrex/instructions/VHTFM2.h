template< > struct AllegrexInstructionTemplate< 0xf0800000, 0xff808080 > : AllegrexInstructionUnknown
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
      return "VHTFM2";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xf0800000, 0xff808080 >
  AllegrexInstruction_VHTFM2;

namespace Allegrex
{
  extern AllegrexInstruction_VHTFM2 &VHTFM2;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VHTFM2 &Allegrex::VHTFM2 =
  AllegrexInstruction_VHTFM2::self();
#endif
