#include <stdio.h>

// Function with no parameters and no return value
void printMessage() {
    printf("Hello, World!\n");
}

// Function with parameters and no return value
void addNumbers(int a, int b) {
    int sum = a + b;
    printf("The sum is: %d\n", sum);
}

// Function with no parameters and with return value
int getSquare() {
    int num = 5;
    return num * num;
}

// Function with parameters and with return value
int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Call the function with no parameters and no return value
    printMessage();

    // Call the function with parameters and no return value
    addNumbers(10, 20);

    // Call the function with no parameters and get the return value
    int square = getSquare();
    printf("The square is: %d\n", square);

    // Call the function with parameters and get the return value
    int result = multiply(3, 7);
    printf("The result is: %d\n", result);

    return 0;
}