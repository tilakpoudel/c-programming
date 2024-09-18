/*
- GCD is the greatest number that divides both numbers without leaving a remainder.
- LCM is the smallest number that is a multiple of both numbers.

We can find the LCM of two numbers using the formula:

LCM(a,b)= (∣a×b∣) / (GCD(a,b))
​
Eg.
Enter two integers: 12 18

GCD of 12 and 18 is: 6
LCM of 12 and 18 is: 36

*/

#include <stdio.h>

// Function to calculate GCD using the Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int findLCM(int a, int b, int gcd) {
    return (a * b) / gcd;
}

int main() {
    int num1, num2, gcd, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD
    gcd = findGCD(num1, num2);

    // Calculate LCM
    lcm = findLCM(num1, num2, gcd);

    // Output the results
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
