/* AND */
void AllegrexInstructionTemplate< 0x00000024, 0xfc0007ff >::interpret(Processor &processor, u32 opcode)
{
  processor.doAND(rd(opcode), rs(opcode), rt(opcode));
}
