/* CVT_S_W */
void allegrex_instruction_template_s< 0x46800020, 0xffff003f >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  ::strcpy(opcode_name, this->opcode_name());
  ::strcpy(operands, "");
  ::strcpy(comment, "");
}
