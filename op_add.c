#include "monty.h"

/**
 * op_add - adds the top two elements of the stack together
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */
int op_add(stack_t **head)
{
	stack_t *tmp = *head;
	stack_t *combine = NULL;

	if (tmp != NULL && tmp->next != NULL)
		combine = (tmp->next);
	else
		{
		fprintf(stderr, "L%zu: can't add, stack too short\n", line_ct);
		return (0);
	}

	combine->n = combine->n + tmp->n;

	op_pop(head);

	return (1);
}
