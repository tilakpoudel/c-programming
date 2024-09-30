#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *ptr_a, *ptr_b;  // Declare two pointers

    // 1. Pointer Assignment: Assign the address of 'a' and 'b' to the pointers
    ptr_a = &a;
    ptr_b = &b;

    // 2. Dereferencing: Access and modify the values via the pointers
    printf("Value of a (via pointer): %d\n", *ptr_a);
    printf("Value of b (via pointer): %d\n", *ptr_b);

    // Modify the values using dereferencing
    *ptr_a = 30;
    *ptr_b = 40;

    printf("New value of a (after dereferencing): %d\n", *ptr_a);
    printf("New value of b (after dereferencing): %d\n", *ptr_b);

    // 3. Pointer Arithmetic: Adding/subtracting integers to/from pointers
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr_arr = arr;  // Pointer to the first element of the array

    printf("\nArray elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, *(ptr_arr + %d) = %d\n", i, arr[i], i, *(ptr_arr + i));
    }

    // Incrementing the pointer (moving to the next element)
    ptr_arr++;  // Now it points to the second element of the array
    printf("\nAfter incrementing pointer, it now points to the second element: %d\n", *ptr_arr);

    // 4. Pointer Comparison
    if (ptr_a == ptr_b) {
        printf("\nPointers ptr_a and ptr_b point to the same address.\n");
    } else {
        printf("\nPointers ptr_a and ptr_b do not point to the same address.\n");
    }

    return 0;
}
