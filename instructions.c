#include "monty.h"

int push_value;

/**
 * op_push - adds node to stack
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */
int op_push(stack_t **head)
{
	stack_t *new = NULL;

	if (head == NULL)
		return (0);

	/* MALLOC ALERT */
	new = malloc(sizeof(stack_t));

	if (new == NULL)
		return (0);

	new->n = global_num;
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

	return (1);
}

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
		printf("%s\n", tmp->n);
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
