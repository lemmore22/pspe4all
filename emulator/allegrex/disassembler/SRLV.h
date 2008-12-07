/* SRLV */
void allegrex_instruction_template_s< 0x00000006, 0xfc0007ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  ::strcpy(opcode_name, "srlv");
  ::sprintf(operands, "%s, %s, %s", gpr_name[rd(opcode)], gpr_name[rt(opcode)], gpr_name[rs(opcode)]);
  ::strcpy(comment, "");
}
