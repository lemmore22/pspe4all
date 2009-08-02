/* ADD_S */
void AllegrexInstructionTemplate< 0x46000000, 0xffe0003f >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "add.s");
  ::sprintf(operands, "%s, %s, %s", fpr_name[fd(opcode)], fpr_name[fs(opcode)], fpr_name[ft(opcode)]);
  ::strcpy(comment, "");
}
