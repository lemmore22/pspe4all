template< > struct AllegrexInstructionTemplate< 0x48e00000, 0xffe0ff80 > : AllegrexInstructionUnknown
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
      return "MTV";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x48e00000, 0xffe0ff80 >
  AllegrexInstruction_MTV;

namespace Allegrex
{
  extern AllegrexInstruction_MTV &MTV;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_MTV &Allegrex::MTV =
  AllegrexInstruction_MTV::self();
#endif
