template< > struct AllegrexInstructionTemplate< 0xc8000000, 0xfc000000 > : AllegrexInstructionUnknown
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
      return "LVS";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xc8000000, 0xfc000000 >
  AllegrexInstruction_LVS;

namespace Allegrex
{
  extern AllegrexInstruction_LVS &LVS;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_LVS &Allegrex::LVS =
  AllegrexInstruction_LVS::self();
#endif
