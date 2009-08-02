template< > struct AllegrexInstructionTemplate< 0xf8000002, 0xfc000002 > : AllegrexInstructionUnknown
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
      return "SWB";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xf8000002, 0xfc000002 >
  AllegrexInstruction_SWB;

namespace Allegrex
{
  extern AllegrexInstruction_SWB &SWB;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_SWB &Allegrex::SWB =
  AllegrexInstruction_SWB::self();
#endif
