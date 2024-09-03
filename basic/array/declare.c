#include <stdio.h>

int main() {
    int numbers[6] = {10, 20, 30, 40, 50}; // Declaring and initializing an array

    printf("%d\n", numbers[5]);

    // Printing the elements of the array
    printf("Array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    // Changing an element of the array
    numbers[2] = 60;

    // Printing the modified array
    printf("Modified array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
