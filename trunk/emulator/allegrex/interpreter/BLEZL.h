/* BLEZL */
void AllegrexInstructionTemplate< 0x58000000, 0xfc1f0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBLEZL(rs(opcode), simm16(opcode));
}
