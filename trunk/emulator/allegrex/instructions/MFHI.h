template< > struct AllegrexInstructionTemplate< 0x00000010, 0xffff07ff > : AllegrexInstructionUnknown
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
      return "MFHI";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x00000010, 0xffff07ff >
  AllegrexInstruction_MFHI;

namespace Allegrex
{
  extern AllegrexInstruction_MFHI &MFHI;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_MFHI &Allegrex::MFHI =
  AllegrexInstruction_MFHI::self();
#endif
