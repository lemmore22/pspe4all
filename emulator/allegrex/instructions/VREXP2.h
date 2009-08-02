template< > struct AllegrexInstructionTemplate< 0xd01c0000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VREXP2";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd01c0000, 0xffff0000 >
  AllegrexInstruction_VREXP2;

namespace Allegrex
{
  extern AllegrexInstruction_VREXP2 &VREXP2;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VREXP2 &Allegrex::VREXP2 =
  AllegrexInstruction_VREXP2::self();
#endif
