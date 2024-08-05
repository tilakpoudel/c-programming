#include <stdio.h>

int main() {
    int a;
    double b;
    char c;

    /*
        The %zu format specifier is used in C to print size_t values, which are typically used to 
        represent the size of objects in bytes and are returned by the sizeof operator.

        size_t is an unsigned integer type defined in the <stddef.h> header file and is 
        typically used to store sizes and counts in a way that is platform-independent.

        Using %zu ensures that the output is correctly formatted for size_t values, regardless of 
        the platform or the specific implementation details of size_t. 
        This is important because the size of size_t can vary between different platforms and 
        compilers (for example, it might be 4 bytes on a 32-bit system and 8 bytes on a 64-bit system).
    */

    // Using sizeof operator to get the size of different data types
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));

    // Using sizeof operator to get the size of variables
    printf("Size of variable 'a': %zu bytes\n", sizeof(a));
    printf("Size of variable 'b': %zu bytes\n", sizeof(b));
    printf("Size of variable 'c': %zu bytes\n", sizeof(c));

    return 0;
}
