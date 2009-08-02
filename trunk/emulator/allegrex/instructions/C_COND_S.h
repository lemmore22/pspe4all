template< > struct AllegrexInstructionTemplate< 0x46000030, 0xffe007f0 > : AllegrexInstructionUnknown
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
      return "C_COND_S";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x46000030, 0xffe007f0 >
  AllegrexInstruction_C_COND_S;

namespace Allegrex
{
  extern AllegrexInstruction_C_COND_S &C_COND_S;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_C_COND_S &Allegrex::C_COND_S =
  AllegrexInstruction_C_COND_S::self();
#endif
