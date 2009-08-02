/* DIV_S */
void AllegrexInstructionTemplate< 0x46000003, 0xffe0003f >::interpret(Processor &processor, u32 opcode)
{
  processor.doDIV_S(fd(opcode), fs(opcode), ft(opcode));
}
