template< > struct AllegrexInstructionTemplate< 0x49020000, 0xffe30000 > : AllegrexInstructionUnknown
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
      return "BVFL";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x49020000, 0xffe30000 >
  AllegrexInstruction_BVFL;

namespace Allegrex
{
  extern AllegrexInstruction_BVFL &BVFL;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_BVFL &Allegrex::BVFL =
  AllegrexInstruction_BVFL::self();
#endif
