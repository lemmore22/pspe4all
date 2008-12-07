/* DIV_S */
void allegrex_instruction_template_s< 0x46000003, 0xffe0003f >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  ::strcpy(opcode_name, "div.s");
  ::sprintf(operands, "%s, %s, %s", fpr_name[fd(opcode)], fpr_name[fs(opcode)], fpr_name[ft(opcode)]);
  ::strcpy(comment, "");
}
