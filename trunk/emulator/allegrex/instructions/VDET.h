template< > struct AllegrexInstructionTemplate< 0x66800000, 0xff800000 > : AllegrexInstructionUnknown
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
      return "VDET";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x66800000, 0xff800000 >
  AllegrexInstruction_VDET;

namespace Allegrex
{
  extern AllegrexInstruction_VDET &VDET;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VDET &Allegrex::VDET =
  AllegrexInstruction_VDET::self();
#endif
