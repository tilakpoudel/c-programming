#include <stdio.h>

// Function that modifies the value using pointers
void modifyValue(int *num) {
    *num = 20; // This change will affect the original variable
}

int main() {
    int a = 10;
    printf("Before modifyValue: a = %d\n", a);
    modifyValue(&a); // Pass by reference (address of a)
    printf("After modifyValue: a = %d\n", a); // Original value is modified
    
    return 0;
}