template< > struct allegrex_instruction_template_s< 0xbc1c0000, 0xfc1f0000 > : allegrex_instruction_unknown_s
{
    static allegrex_instruction_template_s &self()
    {
      static allegrex_instruction_template_s insn;
      return insn;
    }

    static allegrex_instruction_s *get_instance()
    {
      return &allegrex_instruction_template_s::self();
    }

    virtual allegrex_instruction_s *instruction(u32 opcode)
    {
      return this;
    }

    virtual char const *opcode_name()
    {
      return "DCACHE_CREATE_DIRTY_EXCLUSIVE_WITH_LOCK";
    }

    virtual void interpret(processor_s &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    allegrex_instruction_template_s() {}
};

typedef allegrex_instruction_template_s< 0xbc1c0000, 0xfc1f0000 >
  allegrex_instruction_DCACHE_CREATE_DIRTY_EXCLUSIVE_WITH_LOCK_s;

namespace allegrex
{
  extern allegrex_instruction_DCACHE_CREATE_DIRTY_EXCLUSIVE_WITH_LOCK_s &DCACHE_CREATE_DIRTY_EXCLUSIVE_WITH_LOCK;
}
#ifdef IMPLEMENT_INSTRUCTION
allegrex_instruction_DCACHE_CREATE_DIRTY_EXCLUSIVE_WITH_LOCK_s &allegrex::DCACHE_CREATE_DIRTY_EXCLUSIVE_WITH_LOCK =
  allegrex_instruction_DCACHE_CREATE_DIRTY_EXCLUSIVE_WITH_LOCK_s::self();
#endif
