/* SQRT_S */
void allegrex_instruction_template_s< 0x46000004, 0xffff003f >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  ::strcpy(opcode_name, "sqrt.s");
  ::sprintf(operands, "%s, %s", fpr_name[fd(opcode)], fpr_name[fs(opcode)]);
  ::strcpy(comment, "");
}
