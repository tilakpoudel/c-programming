/*
    Write a C program to perform basic arithmetic operations (addition, subtraction, multiplication, division) on two 
    numbers. The program should:

    Use symbolic constants to represent the operation codes.
    Declare and initialize variables for the two numbers.
    Use a switch-case structure to perform the operation based on the user's choice and print the result.
*/
#include <stdio.h>

#define ADD 1
#define SUBTRACT 2
#define MULTIPLY 3
#define DIVIDE 4

int main() {
    int choice;
    float num1, num2, result;

    // Prompt the user to choose an operation
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choice);

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform the chosen operation
    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case DIVIDE:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
