template< > struct AllegrexInstructionTemplate< 0x49010000, 0xffe30000 > : AllegrexInstructionUnknown
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
      return "BVT";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x49010000, 0xffe30000 >
  AllegrexInstruction_BVT;

namespace Allegrex
{
  extern AllegrexInstruction_BVT &BVT;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_BVT &Allegrex::BVT =
  AllegrexInstruction_BVT::self();
#endif
