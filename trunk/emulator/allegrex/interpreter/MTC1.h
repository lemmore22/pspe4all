/* MTC1 */
void AllegrexInstructionTemplate< 0x44800000, 0xffe007ff >::interpret(Processor &processor, u32 opcode)
{
  processor.doMTC1(rt(opcode), fs(opcode));
}
