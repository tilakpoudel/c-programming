#include <stdio.h>

int main() {
    // Array of integers to write
    int numbers[] = {10, 20, 30, 40, 50};

    // Open a file for writing in binary mode
    FILE *file = fopen("data.bin", "wb");
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    // Write the array to the file
    size_t numElementsWritten = fwrite(numbers, sizeof(int), 5, file);
    if (numElementsWritten != 5) {
        printf("Error writing to file.\n");
    } else {
        printf("Data written successfully.\n");
    }

    // Close the file
    fclose(file);
    return 0;
}
