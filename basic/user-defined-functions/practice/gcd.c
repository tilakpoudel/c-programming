#include <stdio.h>

// Recursive function to calculate GCD
int gcd(int a, int b) {
    if (b == 0) {
        return a; // Base case
    }
    return gcd(b, a % b); // Recursive call
}

int main() {
    int num1 = 56, num2 = 98;
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    return 0;
}
