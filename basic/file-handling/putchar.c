#include <stdio.h>

int main() {
    char message[] = "Hello, World!";
    
    for (int i = 0; message[i] != '\0'; i++) {
        putchar(message[i]);  // Print each character
    }
    
    putchar('\n');  // Newline character at the end

    return 0;
}
