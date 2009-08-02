/* DCACHE_HIT_WRITEBACK */
void AllegrexInstructionTemplate< 0xbc1a0000, 0xfc1f0000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "cache");
  ::sprintf(operands, "0x%02X, 0x%04X(%s)", rt(opcode), simm16(opcode)&0xFFFF, gpr_name[rs(opcode)]);
  ::strcpy(comment, "dcache - hit writeback");
}
