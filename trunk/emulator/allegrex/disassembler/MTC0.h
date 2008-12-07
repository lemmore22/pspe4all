/* MTC0 */
void allegrex_instruction_template_s< 0x40800000, 0xffe007ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  ::strcpy(opcode_name, "mtc0");
  ::sprintf(operands, "%s, %s", gpr_name[rt(opcode)], cop0_name[rd(opcode)]);
  ::strcpy(comment, "");
}
