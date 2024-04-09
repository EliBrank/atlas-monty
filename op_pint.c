#include "monty.h"

/**
 * op_pint - prints the value at the top of the stack
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */
int op_pint(stack_t **head)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%zu: can't pint, stack empty\n", line_ct);
		return (0);
	}
	else
	{
		printf("%d\n", (*head)->n);
		return (1);
	}
}
