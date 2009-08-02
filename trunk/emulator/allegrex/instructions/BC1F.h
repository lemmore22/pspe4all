template< > struct AllegrexInstructionTemplate< 0x45000000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "BC1F";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x45000000, 0xffff0000 >
  AllegrexInstruction_BC1F;

namespace Allegrex
{
  extern AllegrexInstruction_BC1F &BC1F;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_BC1F &Allegrex::BC1F =
  AllegrexInstruction_BC1F::self();
#endif
