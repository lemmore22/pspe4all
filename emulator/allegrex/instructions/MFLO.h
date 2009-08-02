template< > struct AllegrexInstructionTemplate< 0x00000012, 0xffff07ff > : AllegrexInstructionUnknown
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
      return "MFLO";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x00000012, 0xffff07ff >
  AllegrexInstruction_MFLO;

namespace Allegrex
{
  extern AllegrexInstruction_MFLO &MFLO;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_MFLO &Allegrex::MFLO =
  AllegrexInstruction_MFLO::self();
#endif
