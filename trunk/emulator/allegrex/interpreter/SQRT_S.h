/* SQRT_S */
void AllegrexInstructionTemplate< 0x46000004, 0xffff003f >::interpret(Processor &processor, u32 opcode)
{
  processor.doSQRT_S(fd(opcode), fs(opcode));
}
