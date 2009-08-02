/* ADDIU */
void AllegrexInstructionTemplate< 0x24000000, 0xfc000000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  s32 imm = simm16(opcode);
  ::strcpy(opcode_name, "addiu");
  ::sprintf(operands, "%s, %s, 0x%08X", gpr_name[rt(opcode)], gpr_name[rs(opcode)], imm);
  ::sprintf(comment, "%d", imm);
}
