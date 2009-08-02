template< > struct AllegrexInstructionTemplate< 0x46800020, 0xffff003f > : AllegrexInstructionUnknown
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
      return "CVT_S_W";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x46800020, 0xffff003f >
  AllegrexInstruction_CVT_S_W;

namespace Allegrex
{
  extern AllegrexInstruction_CVT_S_W &CVT_S_W;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_CVT_S_W &Allegrex::CVT_S_W =
  AllegrexInstruction_CVT_S_W::self();
#endif
