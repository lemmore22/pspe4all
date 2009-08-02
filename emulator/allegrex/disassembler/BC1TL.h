/* BC1TL */
void AllegrexInstructionTemplate< 0x45030000, 0xffff0000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  s32 imm = simm16(opcode);
  ::strcpy(opcode_name, "bc1tl");
  ::sprintf(operands, "0x%08X", imm * 4 + address + 4);
  ::strcpy(comment, "");
}
