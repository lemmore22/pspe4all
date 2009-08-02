template< > struct AllegrexInstructionTemplate< 0x46000006, 0xffff003f > : AllegrexInstructionUnknown
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
      return "MOV_S";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x46000006, 0xffff003f >
  AllegrexInstruction_MOV_S;

namespace Allegrex
{
  extern AllegrexInstruction_MOV_S &MOV_S;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_MOV_S &Allegrex::MOV_S =
  AllegrexInstruction_MOV_S::self();
#endif
