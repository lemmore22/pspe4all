template< > struct AllegrexInstructionTemplate< 0xf3a00000, 0xffe00000 > : AllegrexInstructionUnknown
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
      return "VROT";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xf3a00000, 0xffe00000 >
  AllegrexInstruction_VROT;

namespace Allegrex
{
  extern AllegrexInstruction_VROT &VROT;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VROT &Allegrex::VROT =
  AllegrexInstruction_VROT::self();
#endif
