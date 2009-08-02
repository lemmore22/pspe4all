template< > struct AllegrexInstructionTemplate< 0xd0600000, 0xffe07f00 > : AllegrexInstructionUnknown
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
      return "VCST";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0600000, 0xffe07f00 >
  AllegrexInstruction_VCST;

namespace Allegrex
{
  extern AllegrexInstruction_VCST &VCST;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VCST &Allegrex::VCST =
  AllegrexInstruction_VCST::self();
#endif
