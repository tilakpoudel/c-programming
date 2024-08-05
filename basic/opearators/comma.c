#include <stdio.h>

int main() {
    int a, b, c;

    // Using comma operator
    a = (b = 3, c = 5, b + c);

    // b and c are assigned first, then their sum is assigned to a
    printf("Value of a: %d\n", a); // Output: 8

    return 0;
}
