/* MFC0 */
void AllegrexInstructionTemplate< 0x40000000, 0xffe007ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "mfc0");
  ::sprintf(operands, "%s, %s", gpr_name[rt(opcode)], cop0_name[rd(opcode)]);
  ::strcpy(comment, "");
}
