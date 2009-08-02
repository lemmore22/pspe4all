template< > struct AllegrexInstructionTemplate< 0x0000000d, 0xfc00003f > : AllegrexInstructionUnknown
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
      return "BREAK";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x0000000d, 0xfc00003f >
  AllegrexInstruction_BREAK;

namespace Allegrex
{
  extern AllegrexInstruction_BREAK &BREAK;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_BREAK &Allegrex::BREAK =
  AllegrexInstruction_BREAK::self();
#endif
