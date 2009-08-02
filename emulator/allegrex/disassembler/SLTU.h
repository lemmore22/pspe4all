/* SLTU */
void AllegrexInstructionTemplate< 0x0000002b, 0xfc0007ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "sltu");
  ::sprintf(operands, "%s, %s, %s", gpr_name[rd(opcode)], gpr_name[rs(opcode)], gpr_name[rt(opcode)]);
  ::strcpy(comment, "");
}
