#include "monty.h"

/**
 * num_init - converts string to integer and sets global_num
 * @num_to_convert: string to convert (if integer)
 *
 * Return: 0 if success, else failure
 */
int num_init(char *num_to_convert)
{
	bool is_zero = false;
	int new_int = 0;

	/* set is_zero flag to true if num_to_convert is actually "0" */
	if (strcmp(num_to_convert, "0") == 0)
		is_zero = true;
	
	/* change num_to_convert into an integer */
	new_int = atoi(num_to_convert);
	if (new_int == 0 && is_zero == false)
	{
		/* num_to_convert was not an integer */
		/* ADD ERROR HANDLING AT RETURN AREA */
		return (-1);
	}
}
