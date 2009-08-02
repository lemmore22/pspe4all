template< > struct AllegrexInstructionTemplate< 0xd0100000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VRCP";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0100000, 0xffff0000 >
  AllegrexInstruction_VRCP;

namespace Allegrex
{
  extern AllegrexInstruction_VRCP &VRCP;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VRCP &Allegrex::VRCP =
  AllegrexInstruction_VRCP::self();
#endif
