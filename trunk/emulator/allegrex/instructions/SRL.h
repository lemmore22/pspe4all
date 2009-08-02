template< > struct AllegrexInstructionTemplate< 0x00000002, 0xffe0003f > : AllegrexInstructionUnknown
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
      return "SRL";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x00000002, 0xffe0003f >
  AllegrexInstruction_SRL;

namespace Allegrex
{
  extern AllegrexInstruction_SRL &SRL;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_SRL &Allegrex::SRL =
  AllegrexInstruction_SRL::self();
#endif
