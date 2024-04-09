#include "monty.h"

/**
 * is_number - checks if string is a number
 * @str: string to check
 *
 * Return: true if a number, otherwise false
 */
bool is_number(char *str)
{
	int atoi_output = atoi(str);

	if ((atoi_output == 0) && strcmp(str, "0") != 0)
		return (false);
	else
		return (true);
}
