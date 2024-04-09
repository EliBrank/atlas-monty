#ifndef _MONTY_
#define _MONTY_

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	int (*f)(stack_t **stack);
} instruction_t;

extern size_t line_ct;

/* regular functions */
int get_instruction(char *op_code, stack_t **head);
/* char *string_trim(char *str); */
stack_t *create_node(int n);
/* int *num_init(char *str_to_convert); */
void free_linked_list(stack_t *head);
bool only_whitespace(char *str);

/* op functions */
int op_push(stack_t **head);
int op_pall(stack_t **head);
int op_pint(stack_t **head);
int op_pop(stack_t **head);
int op_swap(stack_t **head);
int op_add(stack_t **head);
int op_nop(stack_t **head);

#endif
