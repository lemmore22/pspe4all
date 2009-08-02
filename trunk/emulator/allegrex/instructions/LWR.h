template< > struct AllegrexInstructionTemplate< 0x98000000, 0xfc000000 > : AllegrexInstructionUnknown
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
      return "LWR";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x98000000, 0xfc000000 >
  AllegrexInstruction_LWR;

namespace Allegrex
{
  extern AllegrexInstruction_LWR &LWR;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_LWR &Allegrex::LWR =
  AllegrexInstruction_LWR::self();
#endif
