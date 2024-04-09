#include "monty.h"

/**
 * is_number - checks if string is a number
 * @str: string to check
 *
 * Return: true if a number, otherwise false
 */
bool is_number(char *str)
{
	size_t i, len;
	const char *s = str;

	if (str == NULL)
		return (false);

	len = strlen(str);
	
	i = 0;
	if (str[0] == '-')
		i++;

	while (i < len)
	{
		if (str[i] != '0' && (isdigit(s[i]) == 0))
			return (false);
		i++;
	}

	return (true);
}
