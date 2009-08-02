template< > struct AllegrexInstructionTemplate< 0xd0508000, 0xffff8080 > : AllegrexInstructionUnknown
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
      return "VMFVC";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0508000, 0xffff8080 >
  AllegrexInstruction_VMFVC;

namespace Allegrex
{
  extern AllegrexInstruction_VMFVC &VMFVC;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VMFVC &Allegrex::VMFVC =
  AllegrexInstruction_VMFVC::self();
#endif
