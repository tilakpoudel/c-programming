
/*
    Swapping values between two variables.
*/
#include <stdio.h>

// Function to swap two numbers using pass by reference
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(&x, &y); // Modifies x and y
    printf("x: %d, y: %d\n", x, y); // Output: x: 10, y: 5
    return 0;
}
