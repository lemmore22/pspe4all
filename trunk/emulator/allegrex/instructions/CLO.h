template< > struct AllegrexInstructionTemplate< 0x00000017, 0xfc1f07ff > : AllegrexInstructionUnknown
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
      return "CLO";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x00000017, 0xfc1f07ff >
  AllegrexInstruction_CLO;

namespace Allegrex
{
  extern AllegrexInstruction_CLO &CLO;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_CLO &Allegrex::CLO =
  AllegrexInstruction_CLO::self();
#endif
