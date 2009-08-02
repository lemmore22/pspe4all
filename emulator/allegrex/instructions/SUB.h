template< > struct AllegrexInstructionTemplate< 0x00000022, 0xfc0007ff > : AllegrexInstructionUnknown
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
      return "SUB";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x00000022, 0xfc0007ff >
  AllegrexInstruction_SUB;

namespace Allegrex
{
  extern AllegrexInstruction_SUB &SUB;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_SUB &Allegrex::SUB =
  AllegrexInstruction_SUB::self();
#endif
