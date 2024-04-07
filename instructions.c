#include "monty.h"

/**
 * op_push - adds node to stack
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */
int op_push(stack_t **head, int n)
{
	stack_t *new;
	
	new = create_node(n);

	if (*head == NULL)
	{
		*head = new;
		return (0);
	}

	new->next = *head;
	(*head)->prev = new;

	*head = new;

	return (1);
}

/**
 * op_pall - prints all nodes in stack
 * @head: current first element in the stack
 *
 * Return: 1 (always success)
 */
int op_pall(stack_t **head, int n)
{
	(void)n;
	stack_t *tmp = NULL;

	tmp = *head;
	
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}

	return (1);
}

/**
 * pint - prints the value at the top of the stack
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */

/**
 * pop - removes the top element of the stack
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */

/**
 * swap - swaps the position of the first two elements in the stack
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */

/**
 * add - adds the top two elements of the stack together
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */

/**
 * nop - does nothing
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */
