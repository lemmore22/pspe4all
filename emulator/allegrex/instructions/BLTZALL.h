template< > struct AllegrexInstructionTemplate< 0x04120000, 0xfc1f0000 > : AllegrexInstructionUnknown
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
      return "BLTZALL";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x04120000, 0xfc1f0000 >
  AllegrexInstruction_BLTZALL;

namespace Allegrex
{
  extern AllegrexInstruction_BLTZALL &BLTZALL;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_BLTZALL &Allegrex::BLTZALL =
  AllegrexInstruction_BLTZALL::self();
#endif
