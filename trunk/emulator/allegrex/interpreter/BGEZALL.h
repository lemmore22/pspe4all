/* BGEZALL */
void AllegrexInstructionTemplate< 0x04130000, 0xfc1f0000 >::interpret(Processor &processor, u32 opcode)
{
  processor.doBGEZALL(rs(opcode), simm16(opcode));
}
