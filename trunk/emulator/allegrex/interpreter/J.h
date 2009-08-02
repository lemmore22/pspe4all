/* J */
void AllegrexInstructionTemplate< 0x08000000, 0xfc000000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doJ(uimm26(opcode));
}
