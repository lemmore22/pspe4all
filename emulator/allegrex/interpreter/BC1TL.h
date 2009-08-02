/* BC1TL */
void AllegrexInstructionTemplate< 0x45030000, 0xffff0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBC1TL(simm16(opcode));
}
