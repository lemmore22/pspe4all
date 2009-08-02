template< > struct AllegrexInstructionTemplate< 0xd0170000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VASIN";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0170000, 0xffff0000 >
  AllegrexInstruction_VASIN;

namespace Allegrex
{
  extern AllegrexInstruction_VASIN &VASIN;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VASIN &Allegrex::VASIN =
  AllegrexInstruction_VASIN::self();
#endif
