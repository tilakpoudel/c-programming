#include <stdio.h>

int main() {
    int num, digit;
    int oddCount = 0, evenCount = 0;

    // Input number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers by converting them to positive
    num = (num < 0) ? -num : num;

    // Check each digit
    while (num != 0) {
        digit = num % 10; // Get the last digit

        if (digit % 2 == 0) {
            evenCount++; // Increment even digit count
        } else {
            oddCount++; // Increment odd digit count
        }

        num /= 10; // Remove the last digit
    }

    // Print the result
    printf("Number of even digits: %d\n", evenCount);
    printf("Number of odd digits: %d\n", oddCount);

    return 0;
}
