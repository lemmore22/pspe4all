template< > struct AllegrexInstructionTemplate< 0x00000016, 0xfc1f07ff > : AllegrexInstructionUnknown
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
      return "CLZ";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x00000016, 0xfc1f07ff >
  AllegrexInstruction_CLZ;

namespace Allegrex
{
  extern AllegrexInstruction_CLZ &CLZ;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_CLZ &Allegrex::CLZ =
  AllegrexInstruction_CLZ::self();
#endif
