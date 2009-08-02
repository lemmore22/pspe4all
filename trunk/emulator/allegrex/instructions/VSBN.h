template< > struct AllegrexInstructionTemplate< 0x61000000, 0xff800000 > : AllegrexInstructionUnknown
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
      return "VSBN";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x61000000, 0xff800000 >
  AllegrexInstruction_VSBN;

namespace Allegrex
{
  extern AllegrexInstruction_VSBN &VSBN;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VSBN &Allegrex::VSBN =
  AllegrexInstruction_VSBN::self();
#endif
