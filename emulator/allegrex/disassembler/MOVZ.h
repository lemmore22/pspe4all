/* MOVZ */
void AllegrexInstructionTemplate< 0x0000000a, 0xfc0007ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "movz");
  ::sprintf(operands, "%s, %s, %s", gpr_name[rd(opcode)], gpr_name[rs(opcode)], gpr_name[rt(opcode)]);
  ::strcpy(comment, "");
}
