#include <stdio.h>

int main() {
    char ch;
    char str[100];

    // Using getchar and putchar
    printf("Enter a character: ");
    ch = getchar();
    printf("You entered: ");
    putchar(ch);
    putchar('\n');

    // Using fgets and fputs
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("You entered: ");
    fputs(str, stdout);

    return 0;
}
