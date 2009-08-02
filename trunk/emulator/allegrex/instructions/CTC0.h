template< > struct AllegrexInstructionTemplate< 0x40c00000, 0xffe007ff > : AllegrexInstructionUnknown
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
      return "CTC0";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x40c00000, 0xffe007ff >
  AllegrexInstruction_CTC0;

namespace Allegrex
{
  extern AllegrexInstruction_CTC0 &CTC0;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_CTC0 &Allegrex::CTC0 =
  AllegrexInstruction_CTC0::self();
#endif
