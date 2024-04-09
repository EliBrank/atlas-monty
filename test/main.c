#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Main function */
int main() {
	char str[64] = "    this    is    a    test     ";
	char *token;
	char *delim = " \n";

	token = strtok(str, delim);

	while (token != NULL)
	{
		printf("%s ", token);
		token = strtok(NULL, delim);
	}
	
	printf("\n");

    return 0;
}
