template< > struct AllegrexInstructionTemplate< 0xd03a0000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VUS2I";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd03a0000, 0xffff0000 >
  AllegrexInstruction_VUS2I;

namespace Allegrex
{
  extern AllegrexInstruction_VUS2I &VUS2I;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VUS2I &Allegrex::VUS2I =
  AllegrexInstruction_VUS2I::self();
#endif
