#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers
    num = (num < 0) ? -num : num;

    // Extract digits and sum them
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    // Print the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}
