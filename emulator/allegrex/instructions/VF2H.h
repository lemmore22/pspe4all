template< > struct AllegrexInstructionTemplate< 0xd0320000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VF2H";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0320000, 0xffff0000 >
  AllegrexInstruction_VF2H;

namespace Allegrex
{
  extern AllegrexInstruction_VF2H &VF2H;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VF2H &Allegrex::VF2H =
  AllegrexInstruction_VF2H::self();
#endif
