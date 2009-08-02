template< > struct AllegrexInstructionTemplate< 0xd3000000, 0xff000000 > : AllegrexInstructionUnknown
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
      return "VWBN";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd3000000, 0xff000000 >
  AllegrexInstruction_VWBN;

namespace Allegrex
{
  extern AllegrexInstruction_VWBN &VWBN;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VWBN &Allegrex::VWBN =
  AllegrexInstruction_VWBN::self();
#endif
