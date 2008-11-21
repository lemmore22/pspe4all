/* VMTVC */
void allegrex_instruction_template_s< 0xd0510080, 0xffff8080 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  ::strcpy(opcode_name, this->opcode_name());
  ::strcpy(operands, "");
  ::strcpy(comment, "");
}
