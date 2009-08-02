template< > struct AllegrexInstructionTemplate< 0x64000000, 0xff800000 > : AllegrexInstructionUnknown
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
      return "VMUL";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x64000000, 0xff800000 >
  AllegrexInstruction_VMUL;

namespace Allegrex
{
  extern AllegrexInstruction_VMUL &VMUL;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VMUL &Allegrex::VMUL =
  AllegrexInstruction_VMUL::self();
#endif
