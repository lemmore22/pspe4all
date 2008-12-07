/* CFC0 */
void allegrex_instruction_template_s< 0x40400000, 0xffe007ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  ::strcpy(opcode_name, "cfc0");
  ::sprintf(operands, "%s, $%d", gpr_name[rt(opcode)], rd(opcode));
  ::strcpy(comment, "");
}
