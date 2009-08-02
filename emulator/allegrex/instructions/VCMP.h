template< > struct AllegrexInstructionTemplate< 0x6c000000, 0xff800078 > : AllegrexInstructionUnknown
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
      return "VCMP";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x6c000000, 0xff800078 >
  AllegrexInstruction_VCMP;

namespace Allegrex
{
  extern AllegrexInstruction_VCMP &VCMP;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VCMP &Allegrex::VCMP =
  AllegrexInstruction_VCMP::self();
#endif
