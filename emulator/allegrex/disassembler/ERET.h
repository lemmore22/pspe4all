/* ERET */
void allegrex_instruction_template_s< 0x42000018, 0xffffffff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  ::strcpy(opcode_name, "eret");
  ::strcpy(operands, "");
  ::strcpy(comment, "");
}
