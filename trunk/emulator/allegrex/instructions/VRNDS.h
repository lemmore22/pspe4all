template< > struct AllegrexInstructionTemplate< 0xd0200000, 0xffff007f > : AllegrexInstructionUnknown
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
      return "VRNDS";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0200000, 0xffff007f >
  AllegrexInstruction_VRNDS;

namespace Allegrex
{
  extern AllegrexInstruction_VRNDS &VRNDS;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VRNDS &Allegrex::VRNDS =
  AllegrexInstruction_VRNDS::self();
#endif
