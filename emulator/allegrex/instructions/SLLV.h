template< > struct AllegrexInstructionTemplate< 0x00000004, 0xfc0007ff > : AllegrexInstructionUnknown
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
      return "SLLV";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x00000004, 0xfc0007ff >
  AllegrexInstruction_SLLV;

namespace Allegrex
{
  extern AllegrexInstruction_SLLV &SLLV;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_SLLV &Allegrex::SLLV =
  AllegrexInstruction_SLLV::self();
#endif
