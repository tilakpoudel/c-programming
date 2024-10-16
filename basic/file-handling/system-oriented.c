/*
    Example: Reading a binary file using system-oriented approach
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int buffer;  // Buffer to store integer data

    // Open the file in binary read mode
    file = fopen("data.bin", "rb");

    // Check if the file opened successfully
    if (file == NULL) {
        perror("Failed to open file");
        return 1;
    }

    // Move the file pointer to the 2nd integer (assuming 4 bytes per int)
    fseek(file, sizeof(int), SEEK_SET);

    // Read the 2nd integer from the file
    fread(&buffer, sizeof(int), 1, file);
    printf("2nd integer in file: %d\n", buffer);

    // Move the pointer back to the beginning
    fseek(file, 0, SEEK_SET);

    // Read the 1st integer from the file
    fread(&buffer, sizeof(int), 1, file);
    printf("1st integer in file: %d\n", buffer);

    // Close the file
    fclose(file);

    return 0;
}
