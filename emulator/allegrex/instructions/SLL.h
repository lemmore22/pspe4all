template< > struct AllegrexInstructionTemplate< 0x00000000, 0xffe0003f > : AllegrexInstructionUnknown
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
      return "SLL";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x00000000, 0xffe0003f >
  AllegrexInstruction_SLL;

namespace Allegrex
{
  extern AllegrexInstruction_SLL &SLL;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_SLL &Allegrex::SLL =
  AllegrexInstruction_SLL::self();
#endif
