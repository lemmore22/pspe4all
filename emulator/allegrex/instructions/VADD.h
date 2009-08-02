template< > struct AllegrexInstructionTemplate< 0x60000000, 0xff800000 > : AllegrexInstructionUnknown
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
      return "VADD";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x60000000, 0xff800000 >
  AllegrexInstruction_VADD;

namespace Allegrex
{
  extern AllegrexInstruction_VADD &VADD;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VADD &Allegrex::VADD =
  AllegrexInstruction_VADD::self();
#endif
