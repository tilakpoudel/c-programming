#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Declare and initialize a 1D array
    int *ptr;                           // Declare a pointer to an integer

    ptr = arr;  // Point the pointer to the first element of the array

    // Accessing array elements using the pointer
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, *(ptr + %d) = %d\n", i, arr[i], i, *(ptr + i));
    }

    return 0;
}
