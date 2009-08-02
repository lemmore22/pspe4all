/* HALT */
void AllegrexInstructionTemplate< 0x70000000, 0xffffffff >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  ::strcpy(opcode_name, "halt");
  ::strcpy(operands, "");
  ::strcpy(comment, "");
}
