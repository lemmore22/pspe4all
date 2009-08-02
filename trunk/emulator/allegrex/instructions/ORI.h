template< > struct AllegrexInstructionTemplate< 0x34000000, 0xfc000000 > : AllegrexInstructionUnknown
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
      return "ORI";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x34000000, 0xfc000000 >
  AllegrexInstruction_ORI;

namespace Allegrex
{
  extern AllegrexInstruction_ORI &ORI;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_ORI &Allegrex::ORI =
  AllegrexInstruction_ORI::self();
#endif
