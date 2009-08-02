template< > struct AllegrexInstructionTemplate< 0x0000002d, 0xfc0007ff > : AllegrexInstructionUnknown
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
      return "MIN";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x0000002d, 0xfc0007ff >
  AllegrexInstruction_MIN;

namespace Allegrex
{
  extern AllegrexInstruction_MIN &MIN;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_MIN &Allegrex::MIN =
  AllegrexInstruction_MIN::self();
#endif
