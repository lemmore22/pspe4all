/* SYNC */
void AllegrexInstructionTemplate< 0x0000000f, 0xffffffff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  ::strcpy(opcode_name, "sync");
  ::strcpy(operands, "");
  ::strcpy(comment, "");
}
