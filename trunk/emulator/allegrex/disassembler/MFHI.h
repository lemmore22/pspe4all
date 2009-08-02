/* MFHI */
void AllegrexInstructionTemplate< 0x00000010, 0xffff07ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "mfhi");
  ::sprintf(operands, "%s", gpr_name[rd(opcode)]);
  ::strcpy(comment, "");
}
