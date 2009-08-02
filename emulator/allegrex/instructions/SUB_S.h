template< > struct AllegrexInstructionTemplate< 0x46000001, 0xffe0003f > : AllegrexInstructionUnknown
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
      return "SUB_S";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x46000001, 0xffe0003f >
  AllegrexInstruction_SUB_S;

namespace Allegrex
{
  extern AllegrexInstruction_SUB_S &SUB_S;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_SUB_S &Allegrex::SUB_S =
  AllegrexInstruction_SUB_S::self();
#endif
