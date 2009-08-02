/* SLL */
void AllegrexInstructionTemplate< 0x00000000, 0xffe0003f >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "sll");
  ::sprintf(operands, "%s, %s, %d", gpr_name[rd(opcode)], gpr_name[rt(opcode)], sa(opcode));
  ::strcpy(comment, "");
}
