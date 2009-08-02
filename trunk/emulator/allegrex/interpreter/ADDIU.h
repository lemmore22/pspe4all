/* ADDIU */
void AllegrexInstructionTemplate< 0x24000000, 0xfc000000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doADDIU(rt(opcode), rs(opcode), simm16(opcode));
}
