template< > struct AllegrexInstructionTemplate< 0xd0510080, 0xffff8080 > : AllegrexInstructionUnknown
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
      return "VMTVC";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0510080, 0xffff8080 >
  AllegrexInstruction_VMTVC;

namespace Allegrex
{
  extern AllegrexInstruction_VMTVC &VMTVC;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VMTVC &Allegrex::VMTVC =
  AllegrexInstruction_VMTVC::self();
#endif
