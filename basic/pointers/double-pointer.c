#include <stdio.h>

int main() {
    int a = 10;
    int *ptr1 = &a;  // ptr1 points to the address of a
    int **ptr2 = &ptr1;  // ptr2 points to the address of ptr1

    // Output the values
    printf("Value of a: %d\n", a);            // Value of a
    printf("Value of *ptr1 (value of a): %d\n", *ptr1);  // Value at address stored in ptr1
    printf("Value of **ptr2 (value of a): %d\n", **ptr2); // Value at address stored in ptr2, which is the address of ptr1

    // Output the addresses
    printf("Address of a: %p\n", &a);
    printf("Value of ptr1 (address of a): %p\n", ptr1);    // ptr1 holds the address of a
    printf("Value of ptr2 (address of ptr1): %p\n", ptr2);  // ptr2 holds the address of ptr1
    printf("Address of ptr1: %p\n", &ptr1);  // Address of ptr1

    return 0;
}
