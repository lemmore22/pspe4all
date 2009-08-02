template< > struct AllegrexInstructionTemplate< 0x94000000, 0xfc000000 > : AllegrexInstructionUnknown
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
      return "LHU";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x94000000, 0xfc000000 >
  AllegrexInstruction_LHU;

namespace Allegrex
{
  extern AllegrexInstruction_LHU &LHU;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_LHU &Allegrex::LHU =
  AllegrexInstruction_LHU::self();
#endif
