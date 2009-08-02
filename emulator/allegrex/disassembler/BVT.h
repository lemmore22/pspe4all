/* BVT */
void AllegrexInstructionTemplate< 0x49010000, 0xffe30000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  s32 imm = simm16(opcode);
  ::strcpy(opcode_name, "bvt");
  ::sprintf(operands, "%d, 0x%08X", -1, imm * 4 + address + 4);
  ::strcpy(comment, "");
}
