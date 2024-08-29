#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50}; // Array with 5 elements
    int size = 5;
    int sum = 0;
    float average;

    // Calculating the sum of array elements
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    // Calculating the average
    average = (float)sum / size;

    printf("The average is: %.2f\n", average);

    return 0;
}
