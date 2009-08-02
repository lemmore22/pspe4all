/* INS */
void AllegrexInstructionTemplate< 0x7c000004, 0xfc00003f >::interpret(Processor &processor, u32 opcode)
{
  processor.doINS(rt(opcode), rs(opcode), sa(opcode), rd(opcode));
}
