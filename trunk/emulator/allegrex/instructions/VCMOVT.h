template< > struct AllegrexInstructionTemplate< 0xd2a00000, 0xfff80000 > : AllegrexInstructionUnknown
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
      return "VCMOVT";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd2a00000, 0xfff80000 >
  AllegrexInstruction_VCMOVT;

namespace Allegrex
{
  extern AllegrexInstruction_VCMOVT &VCMOVT;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VCMOVT &Allegrex::VCMOVT =
  AllegrexInstruction_VCMOVT::self();
#endif
