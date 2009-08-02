/* FLOOR_W_S */
void AllegrexInstructionTemplate< 0x4600000f, 0xffff003f >::interpret(Processor &processor, u32 opcode)
{
  processor.doFLOOR_W_S(fd(opcode), fs(opcode));
}
