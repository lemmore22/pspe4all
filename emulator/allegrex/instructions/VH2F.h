template< > struct AllegrexInstructionTemplate< 0xd0330000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VH2F";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0330000, 0xffff0000 >
  AllegrexInstruction_VH2F;

namespace Allegrex
{
  extern AllegrexInstruction_VH2F &VH2F;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VH2F &Allegrex::VH2F =
  AllegrexInstruction_VH2F::self();
#endif
