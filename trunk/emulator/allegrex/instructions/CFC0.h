template< > struct AllegrexInstructionTemplate< 0x40400000, 0xffe007ff > : AllegrexInstructionUnknown
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
      return "CFC0";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x40400000, 0xffe007ff >
  AllegrexInstruction_CFC0;

namespace Allegrex
{
  extern AllegrexInstruction_CFC0 &CFC0;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_CFC0 &Allegrex::CFC0 =
  AllegrexInstruction_CFC0::self();
#endif
