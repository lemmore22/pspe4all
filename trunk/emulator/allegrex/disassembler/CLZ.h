/* CLZ */
void allegrex_instruction_template_s< 0x00000016, 0xfc1f07ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  ::strcpy(opcode_name, "clz");
  ::sprintf(operands, "%s, %s", gpr_name[rd(opcode)], gpr_name[rt(opcode)]);
  ::strcpy(comment, "");
}
