template< > struct AllegrexInstructionTemplate< 0xd0430000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VBFY2";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0430000, 0xffff0000 >
  AllegrexInstruction_VBFY2;

namespace Allegrex
{
  extern AllegrexInstruction_VBFY2 &VBFY2;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VBFY2 &Allegrex::VBFY2 =
  AllegrexInstruction_VBFY2::self();
#endif
