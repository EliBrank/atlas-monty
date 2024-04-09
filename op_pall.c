#include "monty.h"

/**
 * op_pall - prints all nodes in stack
 * @head: current first element in the stack
 *
 * Return: 1 (always success)
 */
int op_pall(stack_t **head)
{
	stack_t *tmp = NULL;

	tmp = *head;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}

	return (1);
}
