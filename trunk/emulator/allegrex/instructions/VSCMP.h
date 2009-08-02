template< > struct AllegrexInstructionTemplate< 0x6e800000, 0xff800000 > : AllegrexInstructionUnknown
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
      return "VSCMP";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x6e800000, 0xff800000 >
  AllegrexInstruction_VSCMP;

namespace Allegrex
{
  extern AllegrexInstruction_VSCMP &VSCMP;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VSCMP &Allegrex::VSCMP =
  AllegrexInstruction_VSCMP::self();
#endif
