template< > struct allegrex_instruction_template_s< 0xbc180000, 0xfc1f0000 > : allegrex_instruction_unknown_s
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

    virtual allegrex_instruction_s *instruction(int opcode)
    {
      return this;
    }

    virtual char const *opcode_name()
    {
      return "DCACHE_CREATE_DIRTY_EXCLUSIVE";
    }

    virtual int disassemble(unsigned int address, unsigned int insn, char *opcode_name, char *operands, char *comment)
    {
      ::strcpy(opcode_name, this->opcode_name());
      ::strcpy(operands, "");
      ::strcpy(comment, "");
      return 0;
    }

  protected:
    allegrex_instruction_template_s() {}
};

typedef allegrex_instruction_template_s< 0xbc180000, 0xfc1f0000 >
  allegrex_instruction_DCACHE_CREATE_DIRTY_EXCLUSIVE_s;

namespace allegrex
{
  extern allegrex_instruction_DCACHE_CREATE_DIRTY_EXCLUSIVE_s &DCACHE_CREATE_DIRTY_EXCLUSIVE;
}
#ifdef IMPLEMENT_INSTRUCTION
allegrex_instruction_DCACHE_CREATE_DIRTY_EXCLUSIVE_s &allegrex::DCACHE_CREATE_DIRTY_EXCLUSIVE =
  allegrex_instruction_DCACHE_CREATE_DIRTY_EXCLUSIVE_s::self();
#endif
