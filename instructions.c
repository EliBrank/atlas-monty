#include "monty.h"

/**
 * push - adds node to stack
 * @head: current first element in the stack
 * @int_to_push: number to add to new node
 */
void push(stack_t **head, char *int_to_push)
{

}

/**
 * pall - prints all nodes in stack in LIFO order
 * @head: current first element in the stack
 */
void pall(stack_t **head)
{
	stack_t *tmp = NULL;

	tmp = *head;
	while (tmp != NULL)
	{
		printf("%s", tmp->n);
		tmp = tmp->next;
	}
}
