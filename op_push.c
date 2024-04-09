#include "monty.h"

/**
 * op_push - adds node to stack
 * @head: current first element in the stack
 *
 * Return: 1 if success, else 0
 */
int op_push(stack_t **head)
{
	stack_t *new;
	char *tmp;
	int push_num;

	tmp = strtok(NULL, " \n");

	if (tmp != NULL)
		push_num = atoi(tmp);

	/* checks for push without number */
	if (is_number(tmp) == false)
	{
		fprintf(stderr, "L%zu: usage: push integer\n", line_ct);
		return (0);
	}

	new = create_node(push_num);

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
