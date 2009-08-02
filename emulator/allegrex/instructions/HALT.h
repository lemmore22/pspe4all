template< > struct AllegrexInstructionTemplate< 0x70000000, 0xffffffff > : AllegrexInstructionUnknown
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
      return "HALT";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x70000000, 0xffffffff >
  AllegrexInstruction_HALT;

namespace Allegrex
{
  extern AllegrexInstruction_HALT &HALT;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_HALT &Allegrex::HALT =
  AllegrexInstruction_HALT::self();
#endif
