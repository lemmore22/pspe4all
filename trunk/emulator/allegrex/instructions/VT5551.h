template< > struct AllegrexInstructionTemplate< 0xd05a0000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VT5551";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd05a0000, 0xffff0000 >
  AllegrexInstruction_VT5551;

namespace Allegrex
{
  extern AllegrexInstruction_VT5551 &VT5551;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VT5551 &Allegrex::VT5551 =
  AllegrexInstruction_VT5551::self();
#endif
