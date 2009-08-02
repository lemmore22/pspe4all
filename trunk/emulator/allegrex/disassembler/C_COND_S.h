/* C_COND_S */
void AllegrexInstructionTemplate< 0x46000030, 0xffe007f0 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::sprintf(opcode_name, "%s", cconds_name[cconds(opcode)]);
  ::sprintf(operands, "%s, %s", fpr_name[fs(opcode)], fpr_name[ft(opcode)]);
  ::strcpy(comment, "");
}
