/* VF2ID */
void allegrex_instruction_template_s< 0xd2600000, 0xffe00000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  ::strcpy(opcode_name, this->opcode_name());
  ::strcpy(operands, "");
  ::strcpy(comment, "");
}
