/* BNEL */
void AllegrexInstructionTemplate< 0x54000000, 0xfc000000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBNEL(rs(opcode), rt(opcode), simm16(opcode));
}
