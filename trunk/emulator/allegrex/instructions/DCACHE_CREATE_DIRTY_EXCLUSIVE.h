template< > struct AllegrexInstructionTemplate< 0xbc180000, 0xfc1f0000 > : AllegrexInstructionUnknown
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
      return "DCACHE_CREATE_DIRTY_EXCLUSIVE";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xbc180000, 0xfc1f0000 >
  AllegrexInstruction_DCACHE_CREATE_DIRTY_EXCLUSIVE;

namespace Allegrex
{
  extern AllegrexInstruction_DCACHE_CREATE_DIRTY_EXCLUSIVE &DCACHE_CREATE_DIRTY_EXCLUSIVE;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_DCACHE_CREATE_DIRTY_EXCLUSIVE &Allegrex::DCACHE_CREATE_DIRTY_EXCLUSIVE =
  AllegrexInstruction_DCACHE_CREATE_DIRTY_EXCLUSIVE::self();
#endif
