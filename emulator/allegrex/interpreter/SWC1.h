/* SWC1 */
void AllegrexInstructionTemplate< 0xe4000000, 0xfc000000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doSWC1(ft(opcode), rs(opcode), simm16(opcode));
}
