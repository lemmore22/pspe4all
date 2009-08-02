/* BEQ */
void AllegrexInstructionTemplate< 0x10000000, 0xfc000000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBEQ(rs(opcode), rt(opcode), simm16(opcode));
}
