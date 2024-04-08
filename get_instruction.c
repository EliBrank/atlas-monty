#include "monty.h"

/**
 * get_instruction - calls matching function for input op code
 * @op_code: string to check in order to match to instruction
 *
 * Return: 1 if success, 0 if failure
 */
int get_instruction(char *op_code, stack_t **head)
{
	char *op_exec, *tmp, *str_copy;
	int x = 0;
	int *push_num = &x;
	unsigned int i = 0;
	char *delim = " \n";

	/* array of structs containing instruction and matching function */
	instruction_t ops[] = { {"push", op_push}, {"pall", op_pall},
		// {"pint", op_pint}, {"pop", op_pop}, {"swap", op_swap},
		// {"add", op_add}, {"nop", op_nop},
		{NULL, NULL} };

	str_copy = strdup(op_code);
	
	if (str_copy == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (0);
	}
	/* tokenize op_code into executable name and number (if exists) */
	op_exec = strtok(op_code, delim);
	tmp = strtok(NULL, delim);

	if (tmp != NULL)
		*push_num = atoi(tmp);
	/* checks for push without number */
	else if (strcmp(op_exec, "push") == 0)
    {
		free(str_copy);
		fprintf(stderr, "L%zu: usage: push integer\n", line_ct);
        return (0);
    }

	while (ops[i].opcode != NULL)
	{
		/* checks opcode, runs matching function */
		if (strcmp(op_exec, ops[i].opcode) == 0)
		{
			free(str_copy);
			return (ops[i].f(head, push_num));
		}
		i++;
	}

	fprintf(stderr, "L%zu: unknown instruction %s", line_ct, str_copy);
	free(str_copy);
	return (0);
}
