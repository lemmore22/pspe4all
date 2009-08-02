template< > struct AllegrexInstructionTemplate< 0x00000011, 0xfc1fffff > : AllegrexInstructionUnknown
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
      return "MTHI";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x00000011, 0xfc1fffff >
  AllegrexInstruction_MTHI;

namespace Allegrex
{
  extern AllegrexInstruction_MTHI &MTHI;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_MTHI &Allegrex::MTHI =
  AllegrexInstruction_MTHI::self();
#endif
