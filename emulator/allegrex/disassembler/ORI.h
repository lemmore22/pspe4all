/* ORI */
void allegrex_instruction_template_s< 0x34000000, 0xfc000000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  u32 imm = uimm16(opcode);
  ::strcpy(opcode_name, "ori");
  ::sprintf(operands, "%s, %s, 0x%08X", gpr_name[rt(opcode)], gpr_name[rs(opcode)], imm);
  ::sprintf(comment, "%u", imm);
}
