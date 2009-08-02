/* CTC0 */
void AllegrexInstructionTemplate< 0x40c00000, 0xffe007ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "ctc0");
  ::sprintf(operands, "%s, $%d", gpr_name[rt(opcode)], rd(opcode));
  ::strcpy(comment, "");
}
