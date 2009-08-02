/* ROUND_W_S */
void AllegrexInstructionTemplate< 0x4600000c, 0xffff003f >::interpret(Processor &processor, u32 opcode)
{
  processor.doROUND_W_S(fd(opcode), fs(opcode));
}
