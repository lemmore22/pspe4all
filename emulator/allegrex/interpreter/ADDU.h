/* ADDU */
void AllegrexInstructionTemplate< 0x00000021, 0xfc0007ff >::interpret(Processor &processor, u32 opcode)
{
  processor.doADDU(rd(opcode), rs(opcode), rt(opcode));
}
