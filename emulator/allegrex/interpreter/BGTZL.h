/* BGTZL */
void AllegrexInstructionTemplate< 0x5c000000, 0xfc1f0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBGTZL(rs(opcode), simm16(opcode));
}
