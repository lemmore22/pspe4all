/* BEQL */
void AllegrexInstructionTemplate< 0x50000000, 0xfc000000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBEQL(rs(opcode), rt(opcode), simm16(opcode));
}
