/* BC1TL */
void allegrex_instruction_template_s< 0x45030000, 0xffff0000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  s32 imm = simm16(opcode);
  ::strcpy(opcode_name, "bc1tl");
  ::sprintf(operands, "0x%08X", imm * 4 + address + 4);
  ::strcpy(comment, "");
}
