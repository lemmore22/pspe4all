/* ADD_S */
void AllegrexInstructionTemplate< 0x46000000, 0xffe0003f >::interpret(Processor &processor, u32 opcode)
{
  processor.doADD_S(fd(opcode), fs(opcode), ft(opcode));
}
