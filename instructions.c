#include "monty.h"

int push_value;

/**
 * op_push - adds node to stack
 * @head: current first element in the stack
 */
void op_push(stack_t **head)
{
	stack_t *new = NULL;

	if (head == NULL)
		return (NULL);

	/* MALLOC ALERT */
	new = malloc(sizeof(stack_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	new->next = *head;
	(*head)->prev = new;

	*head = new;

	return (*head);
}

/**
 * op_pall - prints all nodes in stack
 * @head: current first element in the stack
 */
void op_pall(stack_t **head)
{
	stack_t *tmp = NULL;

	tmp = *head;
	while (tmp != NULL)
	{
		printf("%s\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 * pint - prints the value at the top of the stack
 * @head: current first element in the stack
 */

/**
 * pop - removes the top element of the stack
 * @head: current first element in the stack
 */

/**
 * swap - swaps the position of the first two elements in the stack
 * @head: current first element in the stack
 */

/**
 * add - adds the top two elements of the stack together
 * @head: current first element in the stack
 */

/**
 * nop - does nothing
 * @head: current first element in the stack
 */
