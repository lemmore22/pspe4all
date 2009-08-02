template< > struct AllegrexInstructionTemplate< 0xd2800000, 0xffe00000 > : AllegrexInstructionUnknown
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
      return "VI2F";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd2800000, 0xffe00000 >
  AllegrexInstruction_VI2F;

namespace Allegrex
{
  extern AllegrexInstruction_VI2F &VI2F;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VI2F &Allegrex::VI2F =
  AllegrexInstruction_VI2F::self();
#endif
