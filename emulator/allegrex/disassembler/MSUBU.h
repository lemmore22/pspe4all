/* MSUBU */
void AllegrexInstructionTemplate< 0x0000002f, 0xfc00ffff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "msubu");
  ::sprintf(operands, "%s, %s", gpr_name[rs(opcode)], gpr_name[rt(opcode)]);
  ::strcpy(comment, "");
}
