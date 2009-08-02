template< > struct AllegrexInstructionTemplate< 0xde000000, 0xff000000 > : AllegrexInstructionUnknown
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
      return "VPFXD";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xde000000, 0xff000000 >
  AllegrexInstruction_VPFXD;

namespace Allegrex
{
  extern AllegrexInstruction_VPFXD &VPFXD;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VPFXD &Allegrex::VPFXD =
  AllegrexInstruction_VPFXD::self();
#endif
