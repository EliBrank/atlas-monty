#include "monty.h"

/**
 * op_push - adds node to stack
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */
int op_push(stack_t **head, int *n)
{
	stack_t *new;

	if (n == NULL)
		return (0);

	new = create_node(*n);

	if (new == NULL)
		return (0);

	if (*head == NULL)
	{
		*head = new;
		return (1);
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
int op_pall(stack_t **head, int *n)
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
int op_pint(stack_t **head, int *n)
{
	(void)n;
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

/**
 * pop - removes the top element of the stack
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */
int op_pop(stack_t **head, int *n)
{
	(void)n;
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

/**
 * swap - swaps the position of the first two elements in the stack
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */
int op_swap(stack_t **head, int *n)
{
	(void)n;
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

/**
 * add - adds the top two elements of the stack together
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */
int op_add(stack_t **head, int *n)
{
	(void)n;
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
	
	*head = combine;

	return (1);
}

/**
 * nop - does nothing
 * @head: current first element in the stack
 *
 * Return: 1 (always success)
 */
int op_nop(stack_t **head, int *n)
{
	(void)head;
	(void)n;

	return (1);
}
