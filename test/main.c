#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Main function */
int main() {
	char str[64] = "123a is a number";
	char *token;
	char *delim = " \n";
	int x;

	token = strtok(str, delim);

	x = atoi(token);

	printf("x = %d\n", x);
	while (token != NULL)
	{
		printf("%s ", token);
		token = strtok(NULL, delim);
	}
	
	printf("\n");

    return 0;
}
