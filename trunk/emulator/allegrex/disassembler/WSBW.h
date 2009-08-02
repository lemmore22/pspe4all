/* WSBW */
void AllegrexInstructionTemplate< 0x7c0000e0, 0xffe007ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "wsbw");
  ::sprintf(operands, "%s, %s", gpr_name[rd(opcode)], gpr_name[rt(opcode)]);
  ::strcpy(comment, "");
}
