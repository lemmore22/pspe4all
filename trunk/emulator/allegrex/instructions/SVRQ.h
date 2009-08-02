template< > struct AllegrexInstructionTemplate< 0xf4000002, 0xfc000002 > : AllegrexInstructionUnknown
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
      return "SVRQ";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xf4000002, 0xfc000002 >
  AllegrexInstruction_SVRQ;

namespace Allegrex
{
  extern AllegrexInstruction_SVRQ &SVRQ;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_SVRQ &Allegrex::SVRQ =
  AllegrexInstruction_SVRQ::self();
#endif
