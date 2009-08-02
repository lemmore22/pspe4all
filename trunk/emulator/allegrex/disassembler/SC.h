/* SC */
void AllegrexInstructionTemplate< 0xe0000000, 0xfc000000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "sc");
  ::sprintf(operands, "%s, 0x%04X(%s)", gpr_name[rt(opcode)], simm16(opcode)&0xFFFF, gpr_name[rs(opcode)]);
  ::strcpy(comment, "");
}
