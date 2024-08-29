#include <stdio.h>

int main() {
    int numbers[5] = {45, 2, 89, 23, 10}; // Initialize the array
    int size = 5;
    int smallest = numbers[0]; // Assume the first element is the smallest

    // Loop through the array to find the smallest element
    for (int i = 1; i < size; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i]; // Update smallest if a smaller element is found
        }
    }

    printf("The smallest number is: %d\n", smallest);

    return 0;
}
