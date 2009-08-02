/* EXT */
void AllegrexInstructionTemplate< 0x7c000000, 0xfc00003f >::interpret(Processor &processor, u32 opcode)
{
  processor.doEXT(rt(opcode), rs(opcode), sa(opcode), rd(opcode));
}
