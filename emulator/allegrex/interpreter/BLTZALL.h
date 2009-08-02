/* BLTZALL */
void AllegrexInstructionTemplate< 0x04120000, 0xfc1f0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBLTZALL(rs(opcode), simm16(opcode));
}
