template< > struct AllegrexInstructionTemplate< 0xd0590000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VT4444";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0590000, 0xffff0000 >
  AllegrexInstruction_VT4444;

namespace Allegrex
{
  extern AllegrexInstruction_VT4444 &VT4444;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VT4444 &Allegrex::VT4444 =
  AllegrexInstruction_VT4444::self();
#endif
