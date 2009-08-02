template< > struct AllegrexInstructionTemplate< 0x49030000, 0xffe30000 > : AllegrexInstructionUnknown
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
      return "BVTL";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x49030000, 0xffe30000 >
  AllegrexInstruction_BVTL;

namespace Allegrex
{
  extern AllegrexInstruction_BVTL &BVTL;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_BVTL &Allegrex::BVTL =
  AllegrexInstruction_BVTL::self();
#endif
