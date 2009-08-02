/* JALR */
void AllegrexInstructionTemplate< 0x00000009, 0xfc1f07ff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  u32 ra = rd(opcode);

  ::strcpy(opcode_name, "jalr");
  if (ra == 31)
  {
    ::sprintf(operands, "%s", gpr_name[rs(opcode)]);
  }
  else
  {
    ::sprintf(operands, "%s, %s", gpr_name[ra], gpr_name[rs(opcode)]);
  }
  ::strcpy(comment, "");
}
