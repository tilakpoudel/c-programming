#include <stdio.h>

int main() {
    int num1, num2;

    // Prompt the user to enter the first number
    printf("Enter first number: ");
    // Read the first number from the user
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter second number: ");
    // Read the second number from the user
    scanf("%d", &num2);

    // Print the numbers entered by the user
    printf("You entered: %d and %d\n", num1, num2);

    return 0;
}