/* DIV */
void allegrex_instruction_template_s< 0x0000001a, 0xfc00ffff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  ::strcpy(opcode_name, "div");
  ::sprintf(operands, "%s, %s", gpr_name[rs(opcode)], gpr_name[rt(opcode)]);
  ::strcpy(comment, "");
}
