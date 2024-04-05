#include "monty.h"

/**
 * main - entrypoint for monty
 * @argc: number of args (needs to be 2)
 * @argv: arg array (executable name and path to file input)
 *
 * Return: 0 if 
 */
int main(int argc, char **argv)
{
	char *instruction;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	if (access(argv[1], R_OK) == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	/* sends input to be read and tokenized */
	instruction = string_trim(argv[1]);

	/*
	if ( == -1)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_num, op_code);
		exit(EXIT_FAILURE);
	}
	*/

	/*
	if ( == -1)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	*/
}
