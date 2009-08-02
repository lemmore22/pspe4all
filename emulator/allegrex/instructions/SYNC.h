template< > struct AllegrexInstructionTemplate< 0x0000000f, 0xffffffff > : AllegrexInstructionUnknown
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
      return "SYNC";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x0000000f, 0xffffffff >
  AllegrexInstruction_SYNC;

namespace Allegrex
{
  extern AllegrexInstruction_SYNC &SYNC;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_SYNC &Allegrex::SYNC =
  AllegrexInstruction_SYNC::self();
#endif
