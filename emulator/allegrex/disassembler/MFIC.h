/* MFIC */
void allegrex_instruction_template_s< 0x70000024, 0xfc1fffff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  ::strcpy(opcode_name, this->opcode_name());
  ::strcpy(operands, "");
  ::strcpy(comment, "");
}
