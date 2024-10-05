#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");  // Open file for writing
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    char data[] = "Hello, World!";
    for (int i = 0; data[i] != '\0'; i++) {
        fputc(data[i], file);  // Write each character to the file
    }

    fclose(file);  // Close the file
    printf("Data written to file successfully.\n");
    return 0;
}
