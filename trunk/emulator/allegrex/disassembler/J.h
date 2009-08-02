/* J */
void AllegrexInstructionTemplate< 0x08000000, 0xfc000000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "j");
  ::sprintf(operands, "0x%08X", Processor::jump_target(address + 4, uimm26(opcode)));
  ::strcpy(comment, "");
}
