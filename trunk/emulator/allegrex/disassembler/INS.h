/* INS */
void allegrex_instruction_template_s< 0x7c000004, 0xfc00003f >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  u32 pos = sa(opcode);
  u32 len = rd(opcode) - pos + 1;

  ::strcpy(opcode_name, "ins");
  ::sprintf(operands, "%s, %s, %d, %d", gpr_name[rt(opcode)], gpr_name[rs(opcode)], pos, len);
  ::strcpy(comment, "");
}
