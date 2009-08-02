/* BGEZAL */
void AllegrexInstructionTemplate< 0x04110000, 0xfc1f0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBGEZAL(rs(opcode), simm16(opcode));
}
