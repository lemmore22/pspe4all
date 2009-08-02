template< > struct AllegrexInstructionTemplate< 0xd01a0000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VNSIN";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd01a0000, 0xffff0000 >
  AllegrexInstruction_VNSIN;

namespace Allegrex
{
  extern AllegrexInstruction_VNSIN &VNSIN;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VNSIN &Allegrex::VNSIN =
  AllegrexInstruction_VNSIN::self();
#endif
