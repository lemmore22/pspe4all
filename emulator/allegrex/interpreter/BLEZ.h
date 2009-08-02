/* BLEZ */
void AllegrexInstructionTemplate< 0x18000000, 0xfc1f0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBLEZ(rs(opcode), simm16(opcode));
}
