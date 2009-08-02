template< > struct AllegrexInstructionTemplate< 0x48600080, 0xffe0ff80 > : AllegrexInstructionUnknown
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
      return "MFVC";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x48600080, 0xffe0ff80 >
  AllegrexInstruction_MFVC;

namespace Allegrex
{
  extern AllegrexInstruction_MFVC &MFVC;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_MFVC &Allegrex::MFVC =
  AllegrexInstruction_MFVC::self();
#endif
