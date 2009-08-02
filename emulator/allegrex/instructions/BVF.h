template< > struct AllegrexInstructionTemplate< 0x49000000, 0xffe30000 > : AllegrexInstructionUnknown
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
      return "BVF";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x49000000, 0xffe30000 >
  AllegrexInstruction_BVF;

namespace Allegrex
{
  extern AllegrexInstruction_BVF &BVF;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_BVF &Allegrex::BVF =
  AllegrexInstruction_BVF::self();
#endif
