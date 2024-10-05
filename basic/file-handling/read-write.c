/*
Read from one file and write to another.
*/
#include <stdio.h>

int main() {
    // Open the source file for reading
    FILE *srcFile = fopen("input.txt", "r");
    if (srcFile == NULL) {
        printf("Could not open input file.\n");
        return 1;
    }

    // Open the destination file for writing
    FILE *destFile = fopen("output.txt", "w");
    if (destFile == NULL) {
        printf("Could not open output file.\n");
        fclose(srcFile);
        return 1;
    }

    // Copy contents from input.txt to output.txt
    char ch;
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close the files
    fclose(srcFile);
    fclose(destFile);

    printf("File copied successfully.\n");
    return 0;
}
