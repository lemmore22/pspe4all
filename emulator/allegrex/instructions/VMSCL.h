template< > struct AllegrexInstructionTemplate< 0xf2000000, 0xff800000 > : AllegrexInstructionUnknown
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
      return "VMSCL";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xf2000000, 0xff800000 >
  AllegrexInstruction_VMSCL;

namespace Allegrex
{
  extern AllegrexInstruction_VMSCL &VMSCL;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VMSCL &Allegrex::VMSCL =
  AllegrexInstruction_VMSCL::self();
#endif
