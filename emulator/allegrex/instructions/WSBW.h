template< > struct AllegrexInstructionTemplate< 0x7c0000e0, 0xffe007ff > : AllegrexInstructionUnknown
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
      return "WSBW";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x7c0000e0, 0xffe007ff >
  AllegrexInstruction_WSBW;

namespace Allegrex
{
  extern AllegrexInstruction_WSBW &WSBW;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_WSBW &Allegrex::WSBW =
  AllegrexInstruction_WSBW::self();
#endif
