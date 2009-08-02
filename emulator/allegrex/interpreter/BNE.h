/* BNE */
void AllegrexInstructionTemplate< 0x14000000, 0xfc000000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBNE(rs(opcode), rt(opcode), simm16(opcode));
}
