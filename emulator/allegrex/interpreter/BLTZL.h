/* BLTZL */
void AllegrexInstructionTemplate< 0x04020000, 0xfc1f0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBLTZL(rs(opcode), simm16(opcode));
}
