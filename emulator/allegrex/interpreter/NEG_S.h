/* NEG_S */
void AllegrexInstructionTemplate< 0x46000007, 0xffff003f >::interpret(Processor &processor, u32 opcode)
{
  processor.doNEG_S(fd(opcode), fs(opcode));
}
