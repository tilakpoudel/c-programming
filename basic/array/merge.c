#include <stdio.h>

int main() {
    int array1[3] = {1, 3, 5}; // First array
    int array2[3] = {2, 4, 6}; // Second array
    int merged[6]; // Array to store merged elements
    int size1 = 3;
    int size2 = 3;

    // Merging arrays
    for (int i = 0; i < size1; i++) {
        merged[i] = array1[i]; // Copy elements from array1
    }
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = array2[i]; // Copy elements from array2
    }

    // Printing the merged array
    printf("Merged array:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
