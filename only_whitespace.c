#include "monty.h"

/**
 * only_whitespace - find if string is made entirely of whitespace
 * @str: the string to check
 *
 * Return: false if non-whitespace found, true if string is entirely whitespace
 */
bool only_whitespace(char *str)
{
    while (*str)
	{
        if (*str != ' ' && *str != '\n' && *str != '\t')
		{
            return (false);
        }
		str++;
    }
    return (true);
}
