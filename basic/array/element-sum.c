#include <stdio.h>

int main() {
    int numbers[5] = {5, 10, 15, 20, 25}; // Initializing an array
    int sum = 0; // Variable to store the sum

    // Calculating the sum of array elements
    for (int i = 0; i < 5; i++) {
        sum += numbers[i]; // Adding each element to sum
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
