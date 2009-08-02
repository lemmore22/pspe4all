/* CFC1 */
void AllegrexInstructionTemplate< 0x44400000, 0xffe007ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "cfc1");
  ::sprintf(operands, "%s, %s", gpr_name[rt(opcode)], fcr_name[fs(opcode)]);
  ::strcpy(comment, "");
}
