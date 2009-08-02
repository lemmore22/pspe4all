template< > struct AllegrexInstructionTemplate< 0xdd000000, 0xff000000 > : AllegrexInstructionUnknown
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
      return "VPFXT";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xdd000000, 0xff000000 >
  AllegrexInstruction_VPFXT;

namespace Allegrex
{
  extern AllegrexInstruction_VPFXT &VPFXT;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VPFXT &Allegrex::VPFXT =
  AllegrexInstruction_VPFXT::self();
#endif
