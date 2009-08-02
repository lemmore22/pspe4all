template< > struct AllegrexInstructionTemplate< 0x84000000, 0xfc000000 > : AllegrexInstructionUnknown
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
      return "LH";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x84000000, 0xfc000000 >
  AllegrexInstruction_LH;

namespace Allegrex
{
  extern AllegrexInstruction_LH &LH;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_LH &Allegrex::LH =
  AllegrexInstruction_LH::self();
#endif
