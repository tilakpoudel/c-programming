#include <stdio.h>

// Function declaration
int addNumbers(int a, int b);

// Function definition
int addNumbers(int a, int b) {
    return a + b; // Adds two numbers and returns the result
}

int main() {
    int result = addNumbers(10, 20); // Function call
    printf("Sum: %d", result); // Output: Sum: 30
    return 0;
}
