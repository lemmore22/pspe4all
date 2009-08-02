template< > struct AllegrexInstructionTemplate< 0xffff0000, 0xffffffff > : AllegrexInstructionUnknown
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
      return "VNOP";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xffff0000, 0xffffffff >
  AllegrexInstruction_VNOP;

namespace Allegrex
{
  extern AllegrexInstruction_VNOP &VNOP;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VNOP &Allegrex::VNOP =
  AllegrexInstruction_VNOP::self();
#endif
