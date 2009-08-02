template< > struct AllegrexInstructionTemplate< 0x3c000000, 0xffe00000 > : AllegrexInstructionUnknown
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
      return "LUI";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x3c000000, 0xffe00000 >
  AllegrexInstruction_LUI;

namespace Allegrex
{
  extern AllegrexInstruction_LUI &LUI;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_LUI &Allegrex::LUI =
  AllegrexInstruction_LUI::self();
#endif
