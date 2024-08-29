#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5}; // Original array
    int reversed[5]; // Array to store reversed elements
    int size = 5;

    // Reversing the array
    for (int i = 0; i < size; i++) {
        reversed[i] = numbers[size - 1 - i]; // Copy from end to start
    }

    // Printing the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    return 0;
}
