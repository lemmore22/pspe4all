template< > struct AllegrexInstructionTemplate< 0x70000024, 0xfc1fffff > : AllegrexInstructionUnknown
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
      return "MFIC";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x70000024, 0xfc1fffff >
  AllegrexInstruction_MFIC;

namespace Allegrex
{
  extern AllegrexInstruction_MFIC &MFIC;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_MFIC &Allegrex::MFIC =
  AllegrexInstruction_MFIC::self();
#endif
