template< > struct AllegrexInstructionTemplate< 0x45020000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "BC1FL";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x45020000, 0xffff0000 >
  AllegrexInstruction_BC1FL;

namespace Allegrex
{
  extern AllegrexInstruction_BC1FL &BC1FL;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_BC1FL &Allegrex::BC1FL =
  AllegrexInstruction_BC1FL::self();
#endif
