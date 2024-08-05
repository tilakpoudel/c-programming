#include <stdio.h>

int main() {
    int value = 42;
    int negative = -42;

    printf("Basic integer: %d\n", value);
    printf("Field width 5: %5d\n", value);
    printf("Left-justified field width 5: %-5d\n", value);
    printf("Right justified field width 5: %5d\n", value);
    printf("Zero-padded field width 5: %05d\n", value);
    printf("Signed positive: %+d\n", value);
    printf("Signed negative: %+d\n", negative);
    printf("Left-justified, signed, field width 5: %-+5d\n", value);

    return 0;
}
