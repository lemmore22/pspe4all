/* BGEZ */
void AllegrexInstructionTemplate< 0x04010000, 0xfc1f0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBGEZ(rs(opcode), simm16(opcode));
}
