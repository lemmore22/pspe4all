template< > struct AllegrexInstructionTemplate< 0xd0040000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VSAT0";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0040000, 0xffff0000 >
  AllegrexInstruction_VSAT0;

namespace Allegrex
{
  extern AllegrexInstruction_VSAT0 &VSAT0;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VSAT0 &Allegrex::VSAT0 =
  AllegrexInstruction_VSAT0::self();
#endif
