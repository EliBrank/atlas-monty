#include "monty.h"

/**
 * push - adds node to stack
 * @head: current first element in the stack
 * @num_to_push: number to add to new node
 */
void push(stack_t **head, char *num_to_push)
{
	bool is_zero = false;
	int int_to_push = 0;

	if (strcmp(num_to_push, "0") == 0)
		is_zero = true;
	
	int_to_push = atoi(num_to_push);
	if (int_to_push == 0 && is_zero == false)
	{
		/* num_to_push passed was not an integer */
		/* ADD ERROR HANDLING AT RETURN AREA */
		return (-1)
	}
	node_init(num_to_push);
}

/**
 * pall - prints all nodes in stack
 * @head: current first element in the stack
 */
void pall(stack_t **head)
{
	stack_t *tmp = NULL;

	tmp = *head;
	while (tmp != NULL)
	{
		printf("%s\n", tmp->n);
		tmp = tmp->next;
	}
}
