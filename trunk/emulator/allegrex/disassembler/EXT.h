/* EXT */
void allegrex_instruction_template_s< 0x7c000000, 0xfc00003f >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  u32 pos = sa(opcode);
  u32 len = rd(opcode) + 1;

  ::strcpy(opcode_name, "ext");
  ::sprintf(operands, "%s, %s, %d, %d", gpr_name[rt(opcode)], gpr_name[rs(opcode)], pos, len);
  ::strcpy(comment, "");
}
