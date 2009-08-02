template< > struct AllegrexInstructionTemplate< 0x48600000, 0xffe0ff80 > : AllegrexInstructionUnknown
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
      return "MFV";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x48600000, 0xffe0ff80 >
  AllegrexInstruction_MFV;

namespace Allegrex
{
  extern AllegrexInstruction_MFV &MFV;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_MFV &Allegrex::MFV =
  AllegrexInstruction_MFV::self();
#endif
