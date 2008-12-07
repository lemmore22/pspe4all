/* MTIC */
void allegrex_instruction_template_s< 0x70000026, 0xfc1fffff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  ::strcpy(opcode_name, "mtic");
  ::sprintf(operands, "%s", gpr_name[rt(opcode)]);
  ::strcpy(comment, "");
}
