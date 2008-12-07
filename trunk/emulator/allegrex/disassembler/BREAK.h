/* BREAK */
void allegrex_instruction_template_s< 0x0000000d, 0xfc00003f >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  ::strcpy(opcode_name, "break");
  ::sprintf(operands, "0x%05X", uimm20(opcode));
  ::strcpy(comment, "");
}
