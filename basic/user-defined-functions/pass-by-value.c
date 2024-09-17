#include <stdio.h>

// Function that tries to modify the value
void modifyValue(int num) {
    num = 20; // This change won't affect the original variable
}

int main() {
    int a = 10;
    printf("Before modifyValue: a = %d\n", a);
    modifyValue(a); // Pass by value
    printf("After modifyValue: a = %d\n", a); // Original value remains unchanged
    
    return 0;
}