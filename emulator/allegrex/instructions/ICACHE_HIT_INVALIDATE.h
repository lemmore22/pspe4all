template< > struct AllegrexInstructionTemplate< 0xbc080000, 0xfc1f0000 > : AllegrexInstructionUnknown
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
      return "ICACHE_HIT_INVALIDATE";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xbc080000, 0xfc1f0000 >
  AllegrexInstruction_ICACHE_HIT_INVALIDATE;

namespace Allegrex
{
  extern AllegrexInstruction_ICACHE_HIT_INVALIDATE &ICACHE_HIT_INVALIDATE;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_ICACHE_HIT_INVALIDATE &Allegrex::ICACHE_HIT_INVALIDATE =
  AllegrexInstruction_ICACHE_HIT_INVALIDATE::self();
#endif
