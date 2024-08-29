#include <stdio.h>

int main() {
    int numbers[5] = {23, 56, 12, 78, 34}; // Array initialization
    int largest = numbers[0]; // Assume the first element is the largest initially

    // Loop through the array to find the largest element
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i]; // Update largest if current element is greater
        }
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}
