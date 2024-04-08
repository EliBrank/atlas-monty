#include "monty.h"

/**
 * main - entrypoint for monty
 * @argc: number of args (needs to be 2)
 * @argv: arg array (executable name and path to file input)
 *
 * Return: 0 if success, else failure
 */
int main(int argc, char **argv)
{
	char *instruction, *line_buf = NULL;
	FILE *file;
	size_t buf_len = 0;
	size_t line_ct = 0;
	ssize_t read;
	stack_t *head = NULL;
	bool failure = false;

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
	while ((read = getline(&line_buf, &buf_len, file)) != -1)
	{
		instruction = string_trim(line_buf);
		if (get_instruction(instruction, &head) == 1)
		{
			printf("Line count: %zu\n", line_ct);
			line_ct++;
		}
		else
		{
			fprintf(stderr, "Line count: %zu\n", line_ct);
			failure = true;
			break;
		}
	}

	free_linked_list(head);
	head = NULL;

	fclose(file);
	if (line_buf != NULL)
		free(line_buf);

	if (failure == true)
		exit(EXIT_FAILURE);

	return (0);


	/* sends input to be read and tokenized */

	/*
	if ( == -1)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	*/
}
