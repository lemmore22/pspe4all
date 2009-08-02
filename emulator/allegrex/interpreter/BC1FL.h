/* BC1FL */
void AllegrexInstructionTemplate< 0x45020000, 0xffff0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBC1FL(simm16(opcode));
}
