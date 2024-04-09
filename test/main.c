#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Main function */
int main() {
	char str[64] = "    this    is    a    test     ";
	char *token;
	char *delim = " \n";

	token = strtok(str, delim);

	printf("str: %s\n", str);
	printf("token: %s\n", token);

	token = strtok(NULL, delim);

	printf("str: %s\n", str);
	printf("token: %s\n", token);

    return 0;
}
