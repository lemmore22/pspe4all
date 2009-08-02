template< > struct AllegrexInstructionTemplate< 0xdc000000, 0xff000000 > : AllegrexInstructionUnknown
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
      return "VPFXS";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xdc000000, 0xff000000 >
  AllegrexInstruction_VPFXS;

namespace Allegrex
{
  extern AllegrexInstruction_VPFXS &VPFXS;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VPFXS &Allegrex::VPFXS =
  AllegrexInstruction_VPFXS::self();
#endif
