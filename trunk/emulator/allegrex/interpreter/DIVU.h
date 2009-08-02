/* DIVU */
void AllegrexInstructionTemplate< 0x0000001b, 0xfc00ffff >::interpret(Processor &processor, u32 opcode)
{
  processor.doDIVU(rs(opcode), rt(opcode));
}
