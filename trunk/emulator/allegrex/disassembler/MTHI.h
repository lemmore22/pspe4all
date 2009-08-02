/* MTHI */
void AllegrexInstructionTemplate< 0x00000011, 0xfc1fffff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "mthi");
  ::sprintf(operands, "%s", gpr_name[rs(opcode)]);
  ::strcpy(comment, "");
}
