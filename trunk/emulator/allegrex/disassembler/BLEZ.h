/* BLEZ */
void allegrex_instruction_template_s< 0x18000000, 0xfc1f0000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  s32 imm = simm16(opcode);
  ::strcpy(opcode_name, "blez");
  ::sprintf(operands, "%s, 0x%08X", gpr_name[rs(opcode)], imm * 4 + address + 4);
  ::strcpy(comment, "");
}
