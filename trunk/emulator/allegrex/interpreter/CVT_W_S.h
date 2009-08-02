/* CVT_W_S */
void AllegrexInstructionTemplate< 0x46000024, 0xffff003f >::interpret(Processor &processor, u32 opcode)
{
  processor.doCVT_W_S(fd(opcode), fs(opcode));
}
