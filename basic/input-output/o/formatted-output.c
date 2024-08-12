#include <stdio.h>

int main() {
    int value = 42;
    int negative = -42;

    // printf("Basic integer: %d\n", value);
    // printf("Field width 5: %5d\n", value);
    // printf("Left-justified field width 5: %-5d\n", value);
    // printf("Right justified field width 5: %5d\n", value);
    // printf("Zero-padded field width 5: %05d\n", value);
    // printf("Zero-padded field width 5: %-5d\n", value);
    // printf("Signed positive: %+d\n", value);
    // printf("Signed negative: %+d\n", negative);
    // printf("Left-justified, signed, field width 5: %-+5d\n", value);
    // printf("Left-justified, signed, field width 5: %-+5d\n", negative);

    // Directly printing each line with formatted output
    printf("%4d\n", 1234); // Prints "1234"
    printf("%3d\n", 123);  // Prints "123"
    printf("%2d\n", 12);   // Prints "12"
    printf("%1d\n", 1);    // Prints "1"

    return 0;
}
