#include <stdio.h>

// Recursive function to calculate power of a number
int power(int base, int exp) {
    if (exp == 0) {
        return 1; // Base case: any number raised to power 0 is 1
    }
    return base * power(base, exp - 1); // Recursive call
}

int main() {
    int base = 2, exp = 3;
    printf("%d raised to the power of %d is %d\n", base, exp, power(base, exp));
    return 0;
}
