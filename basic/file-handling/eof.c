#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "r");  // Open file for reading
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF) {  // Read until EOF
        putchar(ch);  // Print each character to the console
    }

    fclose(file);  // Close the file
    return 0;
}
