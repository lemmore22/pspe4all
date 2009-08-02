/* MUL_S */
void AllegrexInstructionTemplate< 0x46000002, 0xffe0003f >::interpret(Processor &processor, u32 opcode)
{
  processor.doMUL_S(fd(opcode), fs(opcode), ft(opcode));
}
