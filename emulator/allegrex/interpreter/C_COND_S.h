/* C_COND_S */
void AllegrexInstructionTemplate< 0x46000030, 0xffe007f0 >::interpret(Processor &processor, u32 opcode)
{
  processor.doC_COND_S(cconds(opcode), fd(opcode), fs(opcode));
}
