template< > struct AllegrexInstructionTemplate< 0xd0180000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VNRCP";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0180000, 0xffff0000 >
  AllegrexInstruction_VNRCP;

namespace Allegrex
{
  extern AllegrexInstruction_VNRCP &VNRCP;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VNRCP &Allegrex::VNRCP =
  AllegrexInstruction_VNRCP::self();
#endif
