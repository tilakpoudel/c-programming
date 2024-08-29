#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5}; // Initial array
    int size = 5;

    // Shifting elements to the left
    int first = numbers[0]; // Store the first element
    for (int i = 0; i < size - 1; i++) {
        numbers[i] = numbers[i + 1]; // Shift elements left
    }
    numbers[size - 1] = first; // Place the first element at the end

    // Printing the shifted array
    printf("Array after left shift:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
