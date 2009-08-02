template< > struct AllegrexInstructionTemplate< 0xd0060000, 0xffff7f00 > : AllegrexInstructionUnknown
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
      return "VZERO";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0060000, 0xffff7f00 >
  AllegrexInstruction_VZERO;

namespace Allegrex
{
  extern AllegrexInstruction_VZERO &VZERO;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VZERO &Allegrex::VZERO =
  AllegrexInstruction_VZERO::self();
#endif
