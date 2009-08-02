template< > struct AllegrexInstructionTemplate< 0xffff040d, 0xffffffff > : AllegrexInstructionUnknown
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
      return "VFLUSH";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xffff040d, 0xffffffff >
  AllegrexInstruction_VFLUSH;

namespace Allegrex
{
  extern AllegrexInstruction_VFLUSH &VFLUSH;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VFLUSH &Allegrex::VFLUSH =
  AllegrexInstruction_VFLUSH::self();
#endif
