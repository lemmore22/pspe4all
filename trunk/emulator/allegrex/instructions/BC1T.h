template< > struct AllegrexInstructionTemplate< 0x45010000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "BC1T";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x45010000, 0xffff0000 >
  AllegrexInstruction_BC1T;

namespace Allegrex
{
  extern AllegrexInstruction_BC1T &BC1T;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_BC1T &Allegrex::BC1T =
  AllegrexInstruction_BC1T::self();
#endif
