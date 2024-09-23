#include <stdio.h>

// Recursive function to calculate Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case
    }
    if (n == 1) {
        return 1; // Base case
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main() {
    int num = 6;
    printf("Fibonacci of %d is %d\n", num, fibonacci(num));
    return 0;
}
