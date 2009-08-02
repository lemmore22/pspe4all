/* BC1T */
void AllegrexInstructionTemplate< 0x45010000, 0xffff0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBC1T(simm16(opcode));
}
