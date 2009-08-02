/* BNE */
void AllegrexInstructionTemplate< 0x14000000, 0xfc000000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  s32 imm = simm16(opcode);
  ::strcpy(opcode_name, "bne");
  ::sprintf(operands, "%s, %s, 0x%08X", gpr_name[rs(opcode)], gpr_name[rt(opcode)], imm * 4 + address + 4);
  ::strcpy(comment, "");
}
