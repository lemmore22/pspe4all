template< > struct AllegrexInstructionTemplate< 0xd0220000, 0xffff7f00 > : AllegrexInstructionUnknown
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
      return "VRNDF1";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0220000, 0xffff7f00 >
  AllegrexInstruction_VRNDF1;

namespace Allegrex
{
  extern AllegrexInstruction_VRNDF1 &VRNDF1;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VRNDF1 &Allegrex::VRNDF1 =
  AllegrexInstruction_VRNDF1::self();
#endif
