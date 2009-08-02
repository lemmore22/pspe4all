/* MTIC */
void AllegrexInstructionTemplate< 0x70000026, 0xfc1fffff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "mtic");
  ::sprintf(operands, "%s", gpr_name[rt(opcode)]);
  ::strcpy(comment, "");
}
