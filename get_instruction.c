#include "monty.h"

/**
 * get_instruction - calls matching function for input op code
 * @op_code: string to check in order to match to instruction
 *
 * Return: 0 if success, else failure
 */
int (get_instruction(char *op_code))(stack_t *, unsigned int)
{
	/* array of structs containing instruction and matching function */
	instruction_t ops[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop},
		{NULL, NULL}
		};
	
	stack_t **head = NULL;
	

}
