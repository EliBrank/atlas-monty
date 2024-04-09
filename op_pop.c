#include "monty.h"

/**
 * op_pop - removes the top element of the stack
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */
int op_pop(stack_t **head)
{
	stack_t *tmp = NULL;

	if (*head == NULL)
	{
		fprintf(stderr, "L%zu: can't pop an empty stack\n", line_ct);
		return (0);
	}

	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (1);
}
