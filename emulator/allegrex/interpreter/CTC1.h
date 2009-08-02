/* CTC1 */
void AllegrexInstructionTemplate< 0x44c00000, 0xffe007ff >::interpret(Processor &processor, u32 opcode)
{
  processor.doCTC1(rt(opcode), fs(opcode));
}
