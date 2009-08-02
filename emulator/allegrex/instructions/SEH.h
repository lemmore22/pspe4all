template< > struct AllegrexInstructionTemplate< 0x7c000620, 0xffe007ff > : AllegrexInstructionUnknown
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
      return "SEH";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x7c000620, 0xffe007ff >
  AllegrexInstruction_SEH;

namespace Allegrex
{
  extern AllegrexInstruction_SEH &SEH;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_SEH &Allegrex::SEH =
  AllegrexInstruction_SEH::self();
#endif
