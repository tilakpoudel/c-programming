#include <stdio.h>

int main() {
    char name[6] = "Alice"; // Character array to store the string "Alice"
    
    // Printing the name using a loop
    for (int i = 0; i < 5; i++) {
        printf("%c", name[i]);
    }
    printf("\n");

    // Directly printing the name as a string
    printf("%s\n", name);

    return 0;
}
