template< > struct AllegrexInstructionTemplate< 0x46000003, 0xffe0003f > : AllegrexInstructionUnknown
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
      return "DIV_S";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x46000003, 0xffe0003f >
  AllegrexInstruction_DIV_S;

namespace Allegrex
{
  extern AllegrexInstruction_DIV_S &DIV_S;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_DIV_S &Allegrex::DIV_S =
  AllegrexInstruction_DIV_S::self();
#endif
