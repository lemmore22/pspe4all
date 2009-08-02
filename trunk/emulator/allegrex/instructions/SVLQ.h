template< > struct AllegrexInstructionTemplate< 0xf4000000, 0xfc000002 > : AllegrexInstructionUnknown
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
      return "SVLQ";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xf4000000, 0xfc000002 >
  AllegrexInstruction_SVLQ;

namespace Allegrex
{
  extern AllegrexInstruction_SVLQ &SVLQ;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_SVLQ &Allegrex::SVLQ =
  AllegrexInstruction_SVLQ::self();
#endif
