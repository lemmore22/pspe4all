/* MTLO */
void allegrex_instruction_template_s< 0x00000013, 0xfc1fffff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  ::strcpy(opcode_name, "mtlo");
  ::sprintf(operands, "%s", gpr_name[rs(opcode)]);
  ::strcpy(comment, "");
}
