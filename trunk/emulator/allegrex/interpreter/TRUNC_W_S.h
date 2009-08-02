/* TRUNC_W_S */
void AllegrexInstructionTemplate< 0x4600000d, 0xffff003f >::interpret(Processor &processor, u32 opcode)
{
  processor.doTRUNC_W_S(fd(opcode), fs(opcode));
}
