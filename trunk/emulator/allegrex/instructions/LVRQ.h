template< > struct AllegrexInstructionTemplate< 0xd4000002, 0xfc000002 > : AllegrexInstructionUnknown
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
      return "LVRQ";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd4000002, 0xfc000002 >
  AllegrexInstruction_LVRQ;

namespace Allegrex
{
  extern AllegrexInstruction_LVRQ &LVRQ;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_LVRQ &Allegrex::LVRQ =
  AllegrexInstruction_LVRQ::self();
#endif
