/* ANDI */
void AllegrexInstructionTemplate< 0x30000000, 0xfc000000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doANDI(rt(opcode), rs(opcode), uimm16(opcode));
}
