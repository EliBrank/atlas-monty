#include "monty.h"

/**
 * get_instruction - calls matching function for input op code
 * @op_code: string to check in order to match to instruction
 * @head: first node in stack_t list
 *
 * Return: 1 if success, 0 if failure
 */
int get_instruction(char *op_code, stack_t **head)
{
	char *op_token;
	unsigned int i = 0;
	char *delim = " \n";

	/* array of structs containing instruction and matching function */
	instruction_t ops[] = { {"push", op_push}, {"pall", op_pall},
		{"pint", op_pint}, {"pop", op_pop}, {"swap", op_swap},
		{"add", op_add}, {"nop", op_nop}, {NULL, NULL} };

	/* tokenize op_code into executable name and number (if exists) */
	op_token = strtok(op_code, delim);

	while (ops[i].opcode != NULL && op_token != NULL)
	{
		/* checks opcode, runs matching function */
		if (strcmp(op_token, ops[i].opcode) == 0)
		{
			return (ops[i].f(head));
		}
		i++;
	}

	fprintf(stderr, "L%zu: unknown instruction %s\n", line_ct, op_token);
	return (0);
}
