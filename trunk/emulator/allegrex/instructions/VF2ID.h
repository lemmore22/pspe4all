template< > struct AllegrexInstructionTemplate< 0xd2600000, 0xffe00000 > : AllegrexInstructionUnknown
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
      return "VF2ID";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xd2600000, 0xffe00000 >
  AllegrexInstruction_VF2ID;

namespace Allegrex
{
  extern AllegrexInstruction_VF2ID &VF2ID;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VF2ID &Allegrex::VF2ID =
  AllegrexInstruction_VF2ID::self();
#endif
