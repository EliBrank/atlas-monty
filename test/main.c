#include <stdio.h>
#include "your_header.h"


/* Increment the global variable */
void increment_line_count() {
    line_ct++;
}

/* Main function */
int main() {
	/* Define and initialize the global variable */
	size_t line_ct = 0;

    increment_line_count();  // Incrementing line count
    print_line_count();      // Printing line count
    return 0;
}
