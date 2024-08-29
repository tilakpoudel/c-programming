#include <stdio.h>

int main() {
    int numbers[8] = {1, 2, 2, 3, 4, 4, 5, 5}; // Array with duplicates
    int size = 8;
    int newSize = 0;
    int unique[8]; // Array to store unique elements

    // Removing duplicates
    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < newSize; j++) {
            if (numbers[i] == unique[j]) {
                isDuplicate = 1; // Element is already in unique array
                break;
            }
        }
        if (!isDuplicate) {
            unique[newSize] = numbers[i]; // Add to unique array
            newSize++;
        }
    }

    // Printing the unique elements
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
