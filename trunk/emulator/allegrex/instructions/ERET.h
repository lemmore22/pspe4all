template< > struct AllegrexInstructionTemplate< 0x42000018, 0xffffffff > : AllegrexInstructionUnknown
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
      return "ERET";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x42000018, 0xffffffff >
  AllegrexInstruction_ERET;

namespace Allegrex
{
  extern AllegrexInstruction_ERET &ERET;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_ERET &Allegrex::ERET =
  AllegrexInstruction_ERET::self();
#endif
