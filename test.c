#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    // Open the file
    file = fopen("example.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Read each line from the file
    while ((read = getline(&line, &len, file)) != -1) {
        // Process the line, for example, printing it
        printf("Line: %s", line);
    }

    // Close the file and free memory
    fclose(file);
    if (line)
        free(line);

    return 0;
}

