#include "monty.h"

/**
 * get_instruction - calls matching function for input op code
 * @op_code: string to check in order to match to instruction
 *
 * Return: 0 if success, else failure
 */
int (get_instruction(char *op_code))(stack_t *, unsigned int)
{
	char *op_exec, *tmp;
	int *op_num;

	op_exec = strtok(op_code, " ");
	tmp = strtok(NULL, " ");

	if (tmp != NULL)
	{
		op_num = num_init(tmp);
		if (op_num != NULL)
		{
			global_num = *op_num;
			free(op_num);
		}
	}
		
	/* array of structs containing instruction and matching function */
	instruction_t ops[] = { {"push", op_push}, {"pall", op_pall},
		{"pint", op_pint}, {"pop", op_pop}, {"swap", op_swap},
		{"add", op_add}, {"nop", op_nop}, {NULL, NULL} };
	
	while (ops[i].opcode != NULL)
	{
		if (strcmp(op_exec, ops[i].opcode) == 0)
		{
			free(op_exec);
			return (ops[i].f);
		}
		i++;
	}
}
