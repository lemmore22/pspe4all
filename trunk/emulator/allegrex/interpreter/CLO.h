/* CLO */
void AllegrexInstructionTemplate< 0x00000017, 0xfc1f07ff >::interpret(Processor &processor, u32 opcode)
{
  processor.doCLO(rd(opcode), rs(opcode));
}
