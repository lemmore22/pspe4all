/* SWC1 */
void allegrex_instruction_template_s< 0xe4000000, 0xfc000000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  ::strcpy(opcode_name, "swc1");
  ::sprintf(operands, "%s, 0x%04X(%s)", fpr_name[ft(opcode)], simm16(opcode)&0xFFFF, gpr_name[rs(opcode)]);
  ::strcpy(comment, "");
}
