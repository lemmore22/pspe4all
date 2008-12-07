/* LUI */
void allegrex_instruction_template_s< 0x3c000000, 0xffe00000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  u32 imm = uimm16(opcode);
  ::strcpy(opcode_name, "lui");
  ::sprintf(operands, "%s, 0x%04X", gpr_name[rt(opcode)], imm&0xFFFF);
  ::sprintf(comment, "%u", imm<<16);
}
