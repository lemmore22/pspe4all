template< > struct AllegrexInstructionTemplate< 0x28000000, 0xfc000000 > : AllegrexInstructionUnknown
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
      return "SLTI";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x28000000, 0xfc000000 >
  AllegrexInstruction_SLTI;

namespace Allegrex
{
  extern AllegrexInstruction_SLTI &SLTI;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_SLTI &Allegrex::SLTI =
  AllegrexInstruction_SLTI::self();
#endif
