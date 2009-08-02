template< > struct AllegrexInstructionTemplate< 0xbc160000, 0xfc1f0000 > : AllegrexInstructionUnknown
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
      return "DCACHE_INDEX_UNLOCK";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xbc160000, 0xfc1f0000 >
  AllegrexInstruction_DCACHE_INDEX_UNLOCK;

namespace Allegrex
{
  extern AllegrexInstruction_DCACHE_INDEX_UNLOCK &DCACHE_INDEX_UNLOCK;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_DCACHE_INDEX_UNLOCK &Allegrex::DCACHE_INDEX_UNLOCK =
  AllegrexInstruction_DCACHE_INDEX_UNLOCK::self();
#endif
