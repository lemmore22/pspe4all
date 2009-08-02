template< > struct AllegrexInstructionTemplate< 0x7c000004, 0xfc00003f > : AllegrexInstructionUnknown
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
      return "INS";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x7c000004, 0xfc00003f >
  AllegrexInstruction_INS;

namespace Allegrex
{
  extern AllegrexInstruction_INS &INS;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_INS &Allegrex::INS =
  AllegrexInstruction_INS::self();
#endif
