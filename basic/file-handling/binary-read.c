#include <stdio.h>

int main() {
    // Array to store the data read from the file
    int numbers[5];

    // Open the file for reading in binary mode
    FILE *file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    // Read the data from the file into the array
    size_t numElementsRead = fread(numbers, sizeof(int), 5, file);
    if (numElementsRead != 5) {
        printf("Error reading from file.\n");
    } else {
        printf("Data read successfully.\n");

        // Print the read data
        for (int i = 0; i < 5; i++) {
            printf("Number %d: %d\n", i + 1, numbers[i]);
        }
    }

    // Close the file
    fclose(file);
    return 0;
}
