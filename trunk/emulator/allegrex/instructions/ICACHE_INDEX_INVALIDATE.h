template< > struct AllegrexInstructionTemplate< 0xbc040000, 0xfc1f0000 > : AllegrexInstructionUnknown
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
      return "ICACHE_INDEX_INVALIDATE";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xbc040000, 0xfc1f0000 >
  AllegrexInstruction_ICACHE_INDEX_INVALIDATE;

namespace Allegrex
{
  extern AllegrexInstruction_ICACHE_INDEX_INVALIDATE &ICACHE_INDEX_INVALIDATE;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_ICACHE_INDEX_INVALIDATE &Allegrex::ICACHE_INDEX_INVALIDATE =
  AllegrexInstruction_ICACHE_INDEX_INVALIDATE::self();
#endif
