/* ABS_S */
void AllegrexInstructionTemplate< 0x46000005, 0xffff003f >::interpret(Processor &processor, u32 opcode)
{
  processor.doABS_S(fd(opcode), fs(opcode));
}
