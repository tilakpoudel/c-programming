#include <stdio.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;

    // Input number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num == 0 || num == 1) {
        isPrime = 0;
    } else {
        // Check divisibility up to the square root of the number
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Print the result
    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
