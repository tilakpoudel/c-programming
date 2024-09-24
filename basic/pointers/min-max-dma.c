#include <stdio.h>
#include <stdlib.h>  // For malloc, free

int main() {
    int n, i;
    int *arr;
    int min, max;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize min and max with the first element
    min = max = arr[0];

    // Find min and max values
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];  // Update min
        }
        if (arr[i] > max) {
            max = arr[i];  // Update max
        }
    }

    // Display the results
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
