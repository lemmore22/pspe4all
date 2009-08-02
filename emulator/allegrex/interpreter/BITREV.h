/* BITREV */
void AllegrexInstructionTemplate< 0x7c000520, 0xffe007ff >::interpret(Processor &processor, u32 opcode)
{
  processor.doBITREV(rd(opcode), rt(opcode));
}
