template< > struct AllegrexInstructionTemplate< 0xf3800000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VMMOV";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xf3800000, 0xffff0000 >
  AllegrexInstruction_VMMOV;

namespace Allegrex
{
  extern AllegrexInstruction_VMMOV &VMMOV;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VMMOV &Allegrex::VMMOV =
  AllegrexInstruction_VMMOV::self();
#endif
