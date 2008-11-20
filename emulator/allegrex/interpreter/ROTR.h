/* ROTR */
void allegrex_instruction_template_s< 0x00200002, 0xffe0003f >::interpret(processor_s &processor, u32 opcode)
{
  processor.doROTR(rd(opcode), rt(opcode), sa(opcode));
}
