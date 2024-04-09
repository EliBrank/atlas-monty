#include "monty.h"

/**
 * op_swap - swaps the position of the first two elements in the stack
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */
int op_swap(stack_t **head)
{
	stack_t *tmp = *head;
	stack_t *swap = NULL;

	if (tmp != NULL && tmp->next != NULL)
		swap = (tmp->next);
	else
		{
		fprintf(stderr, "L%zu: can't swap, stack too short\n", line_ct);
		return (0);
	}
	swap->prev = tmp->prev;
	tmp->next = swap->next;
	if (swap->next != NULL)
		swap->next->prev = tmp;
	if (tmp->prev != NULL)
		tmp->prev->next = swap;
	swap->next = tmp;
	tmp->prev = swap;

	*head = swap;

	return (1);
}
