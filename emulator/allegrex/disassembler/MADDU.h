/* MADDU */
void allegrex_instruction_template_s< 0x0000001d, 0xfc00ffff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  ::strcpy(opcode_name, this->opcode_name());
  ::strcpy(operands, "");
  ::strcpy(comment, "");
}
