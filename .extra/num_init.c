#include "monty.h"

/**
 * num_init - converts string to integer and sets global_num
 * @str_to_convert: string to convert (if integer)
 *
 * Return: pointer to converted num if success, NULL if failure
 */
int *num_init(char *str_to_convert)
{
	bool is_zero = false;
	int *new_int;

	/* set is_zero flag to true if str_to_convert is actually "0" */
	if (strcmp(str_to_convert, "0") == 0)
		is_zero = true;
	
	/* change str_to_convert into an integer */
	*new_int = atoi(str_to_convert);
	if (*new_int == 0 && is_zero == false)
	{
		/* str_to_convert was not an integer */
		/* ADD ERROR HANDLING AT RETURN AREA */
		return (NULL);
	}

	return (new_int);
}
