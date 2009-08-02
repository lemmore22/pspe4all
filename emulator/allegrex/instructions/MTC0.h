template< > struct AllegrexInstructionTemplate< 0x40800000, 0xffe007ff > : AllegrexInstructionUnknown
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
      return "MTC0";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x40800000, 0xffe007ff >
  AllegrexInstruction_MTC0;

namespace Allegrex
{
  extern AllegrexInstruction_MTC0 &MTC0;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_MTC0 &Allegrex::MTC0 =
  AllegrexInstruction_MTC0::self();
#endif
