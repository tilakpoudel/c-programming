#include <stdio.h>

int main() {
    // Array of strings (array of pointers to char)
    const char *arr[] = {
        "Hello",
        "World",
        "This",
        "is",
        "an",
        "array",
        "of",
        "strings"
    };

    // Size of the array (number of strings)
    int size = sizeof(arr) / sizeof(arr[0]);
    // printf("size of array is %d %d", sizeof(arr), sizeof(arr[0]));

    // Printing each string using pointers
    printf("Array of strings:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }

    // Accessing individual characters in each string using pointers
    printf("\nIndividual characters of each string:\n");
    for (int i = 0; i < size; i++) {
        const char *ptr = arr[i];  // Pointer to the first character of the string
        printf("String %d: ", i + 1);
        while (*ptr != '\0') {
            printf("%c ", *ptr);  // Dereference the pointer to get the character
            ptr++;                // Move the pointer to the next character
        }
        printf("\n");
    }

    return 0;
}
