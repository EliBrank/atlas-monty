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
	char *instruction, *line_buf = NULL;
	FILE *file;
	size_t buf_len = 0;
	ssize_t read;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	/* central loop to get instructions from file */
	/* REMEMBER TO FREE LINE_BUF */
	while ((read = getline(&line_buf, &buf_len, file)) != -1)
	{
		/* REMEMBER TO FREE INSTRUCTION */
		instruction = string_trim(line_buf);
		get_instruction(instruction);
	}

	/* sends input to be read and tokenized */

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
