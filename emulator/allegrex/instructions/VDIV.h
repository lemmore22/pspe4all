template< > struct AllegrexInstructionTemplate< 0x63800000, 0xff800000 > : AllegrexInstructionUnknown
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
      return "VDIV";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x63800000, 0xff800000 >
  AllegrexInstruction_VDIV;

namespace Allegrex
{
  extern AllegrexInstruction_VDIV &VDIV;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VDIV &Allegrex::VDIV =
  AllegrexInstruction_VDIV::self();
#endif
