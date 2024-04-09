#include "monty.h"

/**
 * is_number - checks if string is a number
 * @str: string to check
 *
 * Return: true if a number, otherwise false
 */
bool is_number(char *str)
{
	int atoi_output;

	if (str == NULL)
		return (false);

	atoi_output = atoi(str);

	if (strcmp(str, "-0") == 0)
		return (true);

	if ((atoi_output == 0) && strcmp(str, "0") != 0)
		return (false);
	else
		return (true);
}
