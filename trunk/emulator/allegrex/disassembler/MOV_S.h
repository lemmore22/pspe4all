/* MOV_S */
void AllegrexInstructionTemplate< 0x46000006, 0xffff003f >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "mov.s");
  ::sprintf(operands, "%s, %s", fpr_name[fd(opcode)], fpr_name[fs(opcode)]);
  ::strcpy(comment, "");
}
