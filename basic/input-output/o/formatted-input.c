#include <stdio.h>

int main() {
    int a;
    double b;
    char c;
    char str[100];

    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("You entered: %d\n", a);

    printf("Enter a floating-point number: ");
    scanf("%lf", &b);
    printf("You entered: %lf\n", b);

    printf("Enter a character: ");
    scanf(" %c", &c); // Note the space before %c to consume any leftover newline
    printf("You entered: %c\n", c);

    printf("Enter a string: ");
    scanf("%s", str); // Reads a string until a whitespace is encountered
    printf("You entered: %s\n", str);

    return 0;
}
