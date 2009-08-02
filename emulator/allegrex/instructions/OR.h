template< > struct AllegrexInstructionTemplate< 0x00000025, 0xfc0007ff > : AllegrexInstructionUnknown
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
      return "OR";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x00000025, 0xfc0007ff >
  AllegrexInstruction_OR;

namespace Allegrex
{
  extern AllegrexInstruction_OR &OR;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_OR &Allegrex::OR =
  AllegrexInstruction_OR::self();
#endif
