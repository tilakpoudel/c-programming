#include <stdio.h>

int main() {
    int a = 10;     // Declare an integer variable
    int *p = &a;    // Declare a pointer to an integer and assign the address of a

    printf("Value of a: %d\n", a);           // Output the value of a
    printf("Address of a: %p\n", &a);        // Output the address of a
    printf("Value of p (address stored in p): %p\n", p);  // Output the address stored in p
    printf("Value pointed by p: %d\n", *p);  // Output the value at the address stored in p (which is the value of a)

    // Changing value of a using the pointer
    *p = 20;
    printf("New value of a: %d\n", a);       // Output the new value of a (which is 20 now)

    return 0;
}
