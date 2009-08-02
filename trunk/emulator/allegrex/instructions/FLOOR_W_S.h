template< > struct AllegrexInstructionTemplate< 0x4600000f, 0xffff003f > : AllegrexInstructionUnknown
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
      return "FLOOR_W_S";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x4600000f, 0xffff003f >
  AllegrexInstruction_FLOOR_W_S;

namespace Allegrex
{
  extern AllegrexInstruction_FLOOR_W_S &FLOOR_W_S;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_FLOOR_W_S &Allegrex::FLOOR_W_S =
  AllegrexInstruction_FLOOR_W_S::self();
#endif
