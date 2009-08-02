/* DIV */
void AllegrexInstructionTemplate< 0x0000001a, 0xfc00ffff >::interpret(Processor &processor, u32 opcode)
{
  processor.doDIV(rs(opcode), rt(opcode));
}
