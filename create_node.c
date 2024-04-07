#include "monty.h"

/**
 * create_node - initializes a new stack_t node
 * @n: integer to initialize new node with
 *
 * Return: pointer to newly created node, NULL if failure
 */
stack_t *create_node(int n)
{
	stack_t *new;

	/* MALLOC ALERT */
	new = malloc(sizeof(stack_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}
