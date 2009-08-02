template< > struct AllegrexInstructionTemplate< 0xd0400000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VSRT1";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0400000, 0xffff0000 >
  AllegrexInstruction_VSRT1;

namespace Allegrex
{
  extern AllegrexInstruction_VSRT1 &VSRT1;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VSRT1 &Allegrex::VSRT1 =
  AllegrexInstruction_VSRT1::self();
#endif
