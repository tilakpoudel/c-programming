#include <stdio.h>

void findMinMax(int *arr, int size, int *min, int *max) {
    *min = *max = *arr;  // Initialize min and max to the first element

    // Traverse the array using pointers
    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *min) {
            *min = *(arr + i);
        }
        if (*(arr + i) > *max) {
            *max = *(arr + i);
        }
    }
}

int main() {
    int arr[] = {23, 12, 56, 78, 5, 89, 34, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    // Call function to find min and max
    findMinMax(arr, size, &min, &max);

    printf("Minimum value in the array: %d\n", min);
    printf("Maximum value in the array: %d\n", max);

    return 0;
}
