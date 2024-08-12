/*
    1234
    123
    12
    1
*/
#include <stdio.h>

int main() {
    float num1 = 1234.0;
    float num2 = 123.0;
    float num3 = 12.0;
    float num4 = 1.0;

    printf("%4.0f\n", num1); // Prints "1234"
    printf("%3.0f\n", num2); // Prints "123"
    printf("%2.0f\n", num3); // Prints "12"
    printf("%1.0f\n", num4); // Prints "1"

    return 0;
}
