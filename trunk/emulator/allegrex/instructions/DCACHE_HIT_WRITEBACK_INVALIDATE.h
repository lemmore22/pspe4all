template< > struct allegrex_instruction_template_s< 0xbc1b0000, 0xfc1f0000 > : allegrex_instruction_unknown_s
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
      return "DCACHE_HIT_WRITEBACK_INVALIDATE";
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

typedef allegrex_instruction_template_s< 0xbc1b0000, 0xfc1f0000 >
  allegrex_instruction_DCACHE_HIT_WRITEBACK_INVALIDATE_s;

namespace allegrex
{
  extern allegrex_instruction_DCACHE_HIT_WRITEBACK_INVALIDATE_s &DCACHE_HIT_WRITEBACK_INVALIDATE;
}
#ifdef IMPLEMENT_INSTRUCTION
allegrex_instruction_DCACHE_HIT_WRITEBACK_INVALIDATE_s &allegrex::DCACHE_HIT_WRITEBACK_INVALIDATE =
  allegrex_instruction_DCACHE_HIT_WRITEBACK_INVALIDATE_s::self();
#endif
