#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if n is less than 0
    if (n < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Print Fibonacci sequence
    printf("Fibonacci sequence up to %d:\n", n);

    // Handle case for 0 explicitly
    if (n == 0) {
        printf("%d\n", first);
        return 0;
    }

    printf("%d, %d", first, second); // Print the first two terms

    next = first + second;

    while (next <= n) {
        printf(", %d", next);
        first = second;
        second = next;
        next = first + second;
    }

    printf("\n");

    return 0;
}
