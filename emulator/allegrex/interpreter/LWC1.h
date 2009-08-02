/* LWC1 */
void AllegrexInstructionTemplate< 0xc4000000, 0xfc000000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doLWC1(ft(opcode), rs(opcode), simm16(opcode));
}
