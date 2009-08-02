template< > struct AllegrexInstructionTemplate< 0xa4000000, 0xfc000000 > : AllegrexInstructionUnknown
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
      return "SH";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xa4000000, 0xfc000000 >
  AllegrexInstruction_SH;

namespace Allegrex
{
  extern AllegrexInstruction_SH &SH;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_SH &Allegrex::SH =
  AllegrexInstruction_SH::self();
#endif
