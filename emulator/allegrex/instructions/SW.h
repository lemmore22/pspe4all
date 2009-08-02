template< > struct AllegrexInstructionTemplate< 0xac000000, 0xfc000000 > : AllegrexInstructionUnknown
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
      return "SW";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xac000000, 0xfc000000 >
  AllegrexInstruction_SW;

namespace Allegrex
{
  extern AllegrexInstruction_SW &SW;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_SW &Allegrex::SW =
  AllegrexInstruction_SW::self();
#endif
