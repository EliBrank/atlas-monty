#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Main function */
int main() {
	char *str_original;
	char *str_modified;

	str_original = strdup("this is a test");
	str_modified = strdup(str_original);

	printf("string_original: %s\n", str_original);
	printf("string_modified: %s\n", str_modified);
	free(str_modified);

    return 0;
}
