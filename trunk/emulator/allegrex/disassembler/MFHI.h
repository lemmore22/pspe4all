/* MFHI */
void allegrex_instruction_template_s< 0x00000010, 0xffff07ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  ::strcpy(opcode_name, "mfhi");
  ::sprintf(operands, "%s", gpr_name[rd(opcode)]);
  ::strcpy(comment, "");
}
