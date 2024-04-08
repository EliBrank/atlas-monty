#include "monty.h"

/**
 * free_linked_list - frees doubly linked list
 * @head: head node in list
 */
void free_linked_list(stack_t *head)
{
	stack_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
