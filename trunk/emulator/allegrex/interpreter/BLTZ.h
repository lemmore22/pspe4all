/* BLTZ */
void AllegrexInstructionTemplate< 0x04000000, 0xfc1f0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBLTZ(rs(opcode), simm16(opcode));
}
