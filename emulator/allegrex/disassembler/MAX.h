/* MAX */
void allegrex_instruction_template_s< 0x0000002c, 0xfc0007ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  ::strcpy(opcode_name, "max");
  ::sprintf(operands, "%s, %s, %s", gpr_name[rd(opcode)], gpr_name[rs(opcode)], gpr_name[rt(opcode)]);
  ::strcpy(comment, "");
}
