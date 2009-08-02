template< > struct AllegrexInstructionTemplate< 0x04030000, 0xfc1f0000 > : AllegrexInstructionUnknown
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
      return "BGEZL";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x04030000, 0xfc1f0000 >
  AllegrexInstruction_BGEZL;

namespace Allegrex
{
  extern AllegrexInstruction_BGEZL &BGEZL;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_BGEZL &Allegrex::BGEZL =
  AllegrexInstruction_BGEZL::self();
#endif
