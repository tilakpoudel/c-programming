#include <stdio.h>
int main() {

    int num1, num2, sum;

    // Prompt the user to enter the first number
    printf("Enter first number: ");
    // Read the first number from the user
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter second number: ");
    // Read the second number from the user
    scanf("%d", &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the sums
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}