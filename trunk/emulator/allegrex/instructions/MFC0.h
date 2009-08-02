template< > struct AllegrexInstructionTemplate< 0x40000000, 0xffe007ff > : AllegrexInstructionUnknown
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
      return "MFC0";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x40000000, 0xffe007ff >
  AllegrexInstruction_MFC0;

namespace Allegrex
{
  extern AllegrexInstruction_MFC0 &MFC0;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_MFC0 &Allegrex::MFC0 =
  AllegrexInstruction_MFC0::self();
#endif
