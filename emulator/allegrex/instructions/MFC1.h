template< > struct AllegrexInstructionTemplate< 0x44000000, 0xffe007ff > : AllegrexInstructionUnknown
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
      return "MFC1";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x44000000, 0xffe007ff >
  AllegrexInstruction_MFC1;

namespace Allegrex
{
  extern AllegrexInstruction_MFC1 &MFC1;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_MFC1 &Allegrex::MFC1 =
  AllegrexInstruction_MFC1::self();
#endif
