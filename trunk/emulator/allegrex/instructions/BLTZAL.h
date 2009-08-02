template< > struct AllegrexInstructionTemplate< 0x04100000, 0xfc1f0000 > : AllegrexInstructionUnknown
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
      return "BLTZAL";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x04100000, 0xfc1f0000 >
  AllegrexInstruction_BLTZAL;

namespace Allegrex
{
  extern AllegrexInstruction_BLTZAL &BLTZAL;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_BLTZAL &Allegrex::BLTZAL =
  AllegrexInstruction_BLTZAL::self();
#endif
