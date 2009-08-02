template< > struct AllegrexInstructionTemplate< 0xd0460000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VFAD";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0460000, 0xffff0000 >
  AllegrexInstruction_VFAD;

namespace Allegrex
{
  extern AllegrexInstruction_VFAD &VFAD;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VFAD &Allegrex::VFAD =
  AllegrexInstruction_VFAD::self();
#endif
