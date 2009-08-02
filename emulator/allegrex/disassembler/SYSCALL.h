/* SYSCALL */
void AllegrexInstructionTemplate< 0x0000000c, 0xfc00003f >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace Allegrex;

  ::strcpy(opcode_name, "syscall");
  ::sprintf(operands, "0x%05X", uimm20(opcode));
  ::strcpy(comment, "");
}
