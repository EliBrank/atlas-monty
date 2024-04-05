#include "monty.h"

/**
 * string_trim - removes extraneous spaces from strings
 * @str: input string to clean up
 *
 * Return: copy of string without extraneous spaces
 */
char *string_trim(char *str)
{
	bool word_flag = false;
	int len = strlen(str);
	int i, j;
	/* MALLOC ALERT */
	char *str_trimmed = (char *)malloc((len + 1) * sizeof(char));

	if (str_trimmed == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	memset(str_trimmed, 0, (len + 1) * sizeof(char));

	j = 0;
    for (i = 0; i < len; i++)
    {
        /* copies over str's next character if not a space */
        /* also copies spaces, but only if following char is not a space */
        if (isspace(str[i]) == 0)
        {
            str_trimmed[j] = str[i];
            word_flag = true;
            j++;
        }
        else
        {
          if (word_flag == true)
          {
            str_trimmed[j] = str[i];
            j++;
          }
          word_flag = false;
        }
    }
	if (j > 0 && (str_trimmed[j - 1] == ' '))
		str_trimmed[j - 1] = '\0';

    return (str_trimmed);
}
