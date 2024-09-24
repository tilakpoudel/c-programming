#include <stdio.h>

int main() {
    // Declare and initialize a 2D array
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int (*ptr)[4];  // Declare a pointer to an array of 4 integers
    ptr = arr;      // Point to the first array (first row) of the 2D array

    // Accessing elements using the pointer
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("arr[%d][%d] = %d, *(*(ptr + %d) + %d) = %d\n", 
                   i, j, arr[i][j], i, j, *(*(ptr + i) + j));
        }
    }

    return 0;
}
