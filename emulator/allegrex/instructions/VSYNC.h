template< > struct AllegrexInstructionTemplate< 0xffff0320, 0xffffffff > : AllegrexInstructionUnknown
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
      return "VSYNC";
    }

    virtual void interpret(Processor &processor, u32 opcode);

    virtual void disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment);
  protected:
    AllegrexInstructionTemplate() {}
};

typedef AllegrexInstructionTemplate< 0xffff0320, 0xffffffff >
  AllegrexInstruction_VSYNC;

namespace Allegrex
{
  extern AllegrexInstruction_VSYNC &VSYNC;
}
#ifdef IMPLEMENT_INSTRUCTION
AllegrexInstruction_VSYNC &Allegrex::VSYNC =
  AllegrexInstruction_VSYNC::self();
#endif
