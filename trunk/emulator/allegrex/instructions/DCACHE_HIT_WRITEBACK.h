template< > struct AllegrexInstructionTemplate< 0xbc1a0000, 0xfc1f0000 > : AllegrexInstructionUnknown
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
      return "DCACHE_HIT_WRITEBACK";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xbc1a0000, 0xfc1f0000 >
  AllegrexInstruction_DCACHE_HIT_WRITEBACK;

namespace Allegrex
{
  extern AllegrexInstruction_DCACHE_HIT_WRITEBACK &DCACHE_HIT_WRITEBACK;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_DCACHE_HIT_WRITEBACK &Allegrex::DCACHE_HIT_WRITEBACK =
  AllegrexInstruction_DCACHE_HIT_WRITEBACK::self();
#endif
