template< > struct AllegrexInstructionTemplate< 0x00000006, 0xfc0007ff > : AllegrexInstructionUnknown
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
      return "SRLV";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x00000006, 0xfc0007ff >
  AllegrexInstruction_SRLV;

namespace Allegrex
{
  extern AllegrexInstruction_SRLV &SRLV;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_SRLV &Allegrex::SRLV =
  AllegrexInstruction_SRLV::self();
#endif
