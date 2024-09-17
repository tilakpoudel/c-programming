/*
In this example, we will create a function that takes an array of integers and its size as parameters. 
The function will calculate and print the average of the elements in the array.
*/
#include <stdio.h>

// Function to calculate the average of an array
void calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Sum up the elements
    }
    double average = (double)sum / size; // Calculate average
    printf("Average: %.2f\n", average); // Print the average
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50}; // Declare and initialize an array
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the number of elements

    // Pass the array and its size to the function
    calculateAverage(numbers, size);

    return 0;
}