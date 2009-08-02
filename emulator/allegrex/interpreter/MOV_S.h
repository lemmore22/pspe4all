/* MOV_S */
void AllegrexInstructionTemplate< 0x46000006, 0xffff003f >::interpret(Processor &processor, u32 opcode)
{
  processor.doMOV_S(fd(opcode), fs(opcode));
}
