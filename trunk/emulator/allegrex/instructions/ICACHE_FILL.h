template< > struct AllegrexInstructionTemplate< 0xbc0a0000, 0xfc1f0000 > : AllegrexInstructionUnknown
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
      return "ICACHE_FILL";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xbc0a0000, 0xfc1f0000 >
  AllegrexInstruction_ICACHE_FILL;

namespace Allegrex
{
  extern AllegrexInstruction_ICACHE_FILL &ICACHE_FILL;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_ICACHE_FILL &Allegrex::ICACHE_FILL =
  AllegrexInstruction_ICACHE_FILL::self();
#endif
