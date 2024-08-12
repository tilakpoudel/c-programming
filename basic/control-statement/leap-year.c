/*
To check if a year is a leap year in C, you can use the following rules:

- A year is a leap year if it is divisible by 4.
- However, if the year is divisible by 100, it is not a leap year, unless it is also divisible by 400.
*/
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year logic
    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    } else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
