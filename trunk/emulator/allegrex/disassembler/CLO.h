/* CLO */
void AllegrexInstructionTemplate< 0x00000017, 0xfc1f07ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "clo");
  ::sprintf(operands, "%s, %s", gpr_name[rd(opcode)], gpr_name[rt(opcode)]);
  ::strcpy(comment, "");
}
