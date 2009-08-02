/* BGTZ */
void AllegrexInstructionTemplate< 0x1c000000, 0xfc1f0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBGTZ(rs(opcode), simm16(opcode));
}
