/* BC1F */
void AllegrexInstructionTemplate< 0x45000000, 0xffff0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBC1F(simm16(opcode));
}
