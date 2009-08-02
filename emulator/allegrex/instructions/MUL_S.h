template< > struct AllegrexInstructionTemplate< 0x46000002, 0xffe0003f > : AllegrexInstructionUnknown
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
      return "MUL_S";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x46000002, 0xffe0003f >
  AllegrexInstruction_MUL_S;

namespace Allegrex
{
  extern AllegrexInstruction_MUL_S &MUL_S;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_MUL_S &Allegrex::MUL_S =
  AllegrexInstruction_MUL_S::self();
#endif
