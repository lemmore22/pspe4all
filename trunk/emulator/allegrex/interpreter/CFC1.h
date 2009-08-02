/* CFC1 */
void AllegrexInstructionTemplate< 0x44400000, 0xffe007ff >::interpret(Processor &processor, u32 opcode)
{
  processor.doCFC1(rt(opcode), fs(opcode));
}
