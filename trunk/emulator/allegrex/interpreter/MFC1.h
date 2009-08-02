/* MFC1 */
void AllegrexInstructionTemplate< 0x44000000, 0xffe007ff >::interpret(Processor &processor, u32 opcode)
{
  processor.doMFC1(rt(opcode), fs(opcode));
}
