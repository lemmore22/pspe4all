template< > struct AllegrexInstructionTemplate< 0xd03d0000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VI2C";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd03d0000, 0xffff0000 >
  AllegrexInstruction_VI2C;

namespace Allegrex
{
  extern AllegrexInstruction_VI2C &VI2C;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VI2C &Allegrex::VI2C =
  AllegrexInstruction_VI2C::self();
#endif
