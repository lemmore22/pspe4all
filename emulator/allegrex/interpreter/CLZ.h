/* CLZ */
void AllegrexInstructionTemplate< 0x00000016, 0xfc1f07ff >::interpret(Processor &processor, u32 opcode)
{
  processor.doCLZ(rd(opcode), rs(opcode));
}
