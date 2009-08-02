template< > struct AllegrexInstructionTemplate< 0xd0380000, 0xffff0000 > : AllegrexInstructionUnknown
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
      return "VUC2I";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd0380000, 0xffff0000 >
  AllegrexInstruction_VUC2I;

namespace Allegrex
{
  extern AllegrexInstruction_VUC2I &VUC2I;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VUC2I &Allegrex::VUC2I =
  AllegrexInstruction_VUC2I::self();
#endif
