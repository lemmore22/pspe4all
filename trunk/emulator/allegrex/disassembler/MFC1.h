/* MFC1 */
void AllegrexInstructionTemplate< 0x44000000, 0xffe007ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "mfc1");
  ::sprintf(operands, "%s, %s", gpr_name[rt(opcode)], fpr_name[fs(opcode)]);
  ::strcpy(comment, "");
}
