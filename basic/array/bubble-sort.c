#include <stdio.h>

int main() {
    int numbers[5] = {640, 34, 65, 112, 22}; // Array to be sorted
    int size = 5; // Size of the array
    int temp; // Temporary variable for swapping

    // Printing the original array
    printf("Original array :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    // Bubble Sort algorithm
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap numbers[j] and numbers[j + 1]
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Printing the sorted array
    printf("\n Sorted array in ascending order:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
