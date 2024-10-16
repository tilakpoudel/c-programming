/*
Example: Reading a file using a stream-oriented approach
*/

#include <stdio.h>

int main() {
    FILE *file;
    char buffer[256];  // Buffer to store each line

    // Open the file in read mode
    file = fopen("data.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        perror("Failed to open file");
        return 1;
    }

    // Read the file line by line
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);  // Print each line
    }

    // Close the file
    fclose(file);

    return 0;
}
