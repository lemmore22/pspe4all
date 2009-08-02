template< > struct AllegrexInstructionTemplate< 0x00200002, 0xffe0003f > : AllegrexInstructionUnknown
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
      return "ROTR";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0x00200002, 0xffe0003f >
  AllegrexInstruction_ROTR;

namespace Allegrex
{
  extern AllegrexInstruction_ROTR &ROTR;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_ROTR &Allegrex::ROTR =
  AllegrexInstruction_ROTR::self();
#endif
