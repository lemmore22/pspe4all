/* CEIL_W_S */
void AllegrexInstructionTemplate< 0x4600000e, 0xffff003f >::interpret(Processor &processor, u32 opcode)
{
  processor.doCEIL_W_S(fd(opcode), fs(opcode));
}
