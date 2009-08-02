/* BLTZAL */
void AllegrexInstructionTemplate< 0x04100000, 0xfc1f0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBLTZAL(rs(opcode), simm16(opcode));
}
