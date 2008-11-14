/*
 * instruction.h
 *
 *  Created on: 26 oct. 2008
 *      Author: hli
 */

#ifndef ALLEGREX_INSTRUCTION_H_
#define ALLEGREX_INSTRUCTION_H_

#include <new>
#include <cstring>

struct allegrex_instruction_base_s;
struct allegrex_instruction_s;
template< int signature, int mask > struct allegrex_instruction_template_s;
struct basic_block_s;
struct super_block_s;

typedef allegrex_instruction_base_s allegrex_instruction_base_t;
typedef allegrex_instruction_s allegrex_instruction_t;

struct allegrex_instruction_base_s
{
	typedef int index_t;

	virtual ~allegrex_instruction_base_s() {}

protected:
	allegrex_instruction_base_s() {}
};


struct allegrex_instruction_s : allegrex_instruction_base_s
{
	typedef int index_t;

	int opcode;
	unsigned int address;
#ifdef USE_DYNAREC
	basic_block_s *parent;
	index_t delayed;
	index_t prefix;
	index_t register_writes[2]; // rd, rt, hi:lo, fd, vd
	index_t register_reads[3]; // rs, rt, rd, fs, ft, vs, vt
	short branch_target : 1, count : 7;
#else
	int branch_target : 1;
#endif

	virtual ~allegrex_instruction_s() {}

	virtual allegrex_instruction_s *instruction(int opcode) = 0;

	virtual char const *opcode_name() = 0;

	virtual int disassemble(unsigned int address, unsigned int insn, char *opcode_name, char *operands, char *comment) = 0;

	virtual bool is_branch()
	{
		return false;
	}

	virtual bool is_return_jump()
	{
		return false;
	}

	virtual bool is_register_indirect_jump()
	{
		return false;
	}

	unsigned int get_opcode()
	{
		return (unsigned int)opcode;
	}

	bool is_branch_target()
	{
		return this->branch_target;
	}

	void set_branch_target();

	virtual bool is_nop()
	{
		return false;
	}

	int get_rt() { return (int)((((unsigned int)this->opcode) >> 16)&31); }

	int get_rs() { return (int)((((unsigned int)this->opcode) >> 11)&31); }

	int get_rd() { return (int)((((unsigned int)this->opcode) >> 6)&31); }

	int get_simm16() { return (int)(short)this->opcode; }

	int get_uimm16() { return (int)(unsigned short)this->opcode; }

	int get_uimm26() { return this->opcode & 0x03FFFFFF; }

#ifdef USE_DYNAREC
	virtual allegrex_instruction_s *clone() = 0;

	virtual bool pass1() = 0;

	virtual bool pass2() = 0;

	virtual int get_max_stack_height()
	{
		return 2;
	}

	virtual bool has_delay_slot()
	{
		return this->is_branch();
	}

	virtual bool is_delay_slot_nop()
	{
		return false;
	}

	virtual int fill_outputs(int *p) { return 0; };

	virtual int fill_inputs(int *p) { return 0; };

	typedef struct factory_s
	{
		static allegrex_instruction_s *create(unsigned int address, unsigned int opcode);

		static allegrex_instruction_s *create_nop(unsigned int address);

		static allegrex_instruction_s *create_delay_slot_nop(unsigned int address);

		static allegrex_instruction_s *create_tail_call_jump(unsigned int address, int extra);

		static allegrex_instruction_s __attribute__((aligned(32))) instructions[32768];

		static allegrex_instruction_s *free_instructions;

		factory_s()
		{
			::memset(instructions, 0, sizeof(instructions));

			allegrex_instruction_s *free_instruction = 0;

			for (allegrex_instruction_s *i = instructions + 32767; i >= instructions; --i)
			{
				*((allegrex_instruction_s **)i) = free_instruction;
				free_instruction = i;
			}
			free_instructions = free_instruction;
		}
	} factory_t;

	void set_delayed(allegrex_instruction_s *delayed)
	{
		this->delayed = delayed - &(factory_t::instructions[0]);
	}

	allegrex_instruction_s *get_delayed()
	{
		return &factory_t::instructions[this->delayed];
	}

	bool has_delayed()
	{
		return this->delayed != 0;
	}

	void set_prefix(allegrex_instruction_s *prefix)
	{
		this->prefix = prefix - &(factory_t::instructions[0]);
	}

	bool has_prefix()
	{
		return this->prefix != 0;
	}

	allegrex_instruction_s *get_prefix()
	{
		return &factory_t::instructions[this->prefix];
	}

	allegrex_instruction_s *get_previous_register_write(int which)
	{
		return &factory_t::instructions[this->register_writes[which]];
	}

	allegrex_instruction_s *get_previous_register_read(int which)
	{
		return &factory_t::instructions[this->register_reads[which]];
	}

	void set_previous_register_read(allegrex_instruction_s *insn, int which)
	{
		this->register_reads[which] = insn - &(factory_t::instructions[0]);
	}

	void set_previous_register_write(allegrex_instruction_s *insn, int which)
	{
		this->register_writes[which] = insn - &(factory_t::instructions[0]);
	}
#endif

};

struct allegrex_instruction_unknown_s : allegrex_instruction_s
{
	static allegrex_instruction_unknown_s &self()
	{
		static allegrex_instruction_unknown_s insn;
		return insn;
	}

	static allegrex_instruction_s *get_instance()
	{
		return &allegrex_instruction_unknown_s::self();
	}

	virtual allegrex_instruction_s *instruction(int opcode)
	{
		return this;
	}

	virtual char const *opcode_name()
	{
		return "???";
	}

	virtual int disassemble(unsigned int address, unsigned int insn, char *opcode_name, char *operands, char *comment)
	{
		::strcpy(opcode_name, this->opcode_name());
		::strcpy(operands, "");
		::strcpy(comment, "unknown or reserved instruction");
		return 0;
	}

#ifdef USE_DYNAREC
	virtual allegrex_instruction_s *clone()
	{
//		return (instruction_s *)instruction_s::new(this) allegrex_n::intruction_template_s< opcode, mask >(opcode);
		return (allegrex_instruction_s *)0; //new allegrex_n::instruction_template_s(opcode);
	}

	virtual bool pass1()
	{
		return false;
	}

	virtual bool pass2()
	{
		return false;
	}

#endif
};

template< int signature, int mask > struct allegrex_instruction_template_s : allegrex_instruction_unknown_s
{
	static allegrex_instruction_template_s &self()
	{
		static allegrex_instruction_template_s insn;
		return insn;
	}

	static allegrex_instruction_s *get_instance()
	{
		return &allegrex_instruction_template_s::self();
	}

	virtual allegrex_instruction_s *instruction(int opcode)
	{
		return this;
	}

	virtual char const *opcode_name();

	virtual int disassemble(unsigned int address, unsigned int insn, char *opcode_name, char *operands, char *comment)
	{
		::strcpy(opcode_name, this->opcode_name());
		::strcpy(operands, "");
		::strcpy(comment, "!!!");
		return 0;
	}

#ifdef USE_DYNAREC
	virtual allegrex_instruction_s *clone()
	{
//		return (instruction_s *)instruction_s::new(this) allegrex_n::intruction_template_s< opcode, mask >(opcode);
		return (allegrex_instruction_s *)0; //new allegrex_n::instruction_template_s(opcode);
	}

	virtual bool pass1()
	{
		return false;
	}

	virtual bool pass2()
	{
		return false;
	}

#endif
};

namespace allegrex_n
{
	allegrex_instruction_unknown_s &reserved_instruction =
		allegrex_instruction_unknown_s::self();
}
#endif /* ALLEGREX_INSTRUCTION_H_ */
