/* CVT_S_W */
void AllegrexInstructionTemplate< 0x46800020, 0xffff003f >::interpret(Processor &processor, u32 opcode)
{
  processor.doCVT_S_W(fd(opcode), fs(opcode));
}
