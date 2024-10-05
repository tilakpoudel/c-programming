#include <stdio.h>

int main() {
    char name[100];

    printf("Enter your name: ");
    // gets(name);  // Dangerous, prefer fgets()

    fgets(name, 100, stdin);


    printf("Hello, %s!\n", name);
    return 0;
}
