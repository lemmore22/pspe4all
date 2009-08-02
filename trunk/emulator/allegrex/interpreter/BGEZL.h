/* BGEZL */
void AllegrexInstructionTemplate< 0x04030000, 0xfc1f0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBGEZL(rs(opcode), simm16(opcode));
}
