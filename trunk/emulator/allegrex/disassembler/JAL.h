/* JAL */
void allegrex_instruction_template_s< 0x0c000000, 0xfc000000 >::disassemble(u32 address, u32 opcode, char *opcode_name, char *operands, char *comment)
{
  using namespace allegrex;

  ::strcpy(opcode_name, "jal");
  ::sprintf(operands, "0x%08X", processor_s::jump_target(address + 4, uimm26(opcode)));
  ::strcpy(comment, "");
}
