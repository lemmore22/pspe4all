/* SLTI */
void allegrex_instruction_template_s< 0x28000000, 0xfc000000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  s32 imm = uimm16(opcode);
  ::strcpy(opcode_name, "slti");
  ::sprintf(operands, "%s, %s, 0x%04X", gpr_name[rt(opcode)], gpr_name[rs(opcode)], imm);
  ::sprintf(comment, "%d", imm);
}
