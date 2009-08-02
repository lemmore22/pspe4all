/* BGEZAL */
void AllegrexInstructionTemplate< 0x04110000, 0xfc1f0000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  s32 imm = simm16(opcode);
  ::strcpy(opcode_name, "bgezal");
  ::sprintf(operands, "%s, 0x%08X", gpr_name[rs(opcode)], imm * 4 + address + 4);
  ::strcpy(comment, "");
}
