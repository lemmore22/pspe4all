template< > struct AllegrexInstructionTemplate< 0x45030000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "BC1TL";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x45030000, 0xffff0000 >
  AllegrexInstruction_BC1TL;

namespace Allegrex
{
  extern AllegrexInstruction_BC1TL &BC1TL;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_BC1TL &Allegrex::BC1TL =
  AllegrexInstruction_BC1TL::self();
#endif
