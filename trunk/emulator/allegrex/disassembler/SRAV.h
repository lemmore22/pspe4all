/* SRAV */
void AllegrexInstructionTemplate< 0x00000007, 0xfc0007ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "srav");
  ::sprintf(operands, "%s, %s, %s", gpr_name[rd(opcode)], gpr_name[rt(opcode)], gpr_name[rs(opcode)]);
  ::strcpy(comment, "");
}
