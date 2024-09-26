/*
Example demonstrating the use of malloc, calloc, realloc, and free for dynamic memory allocation
*/
#include <stdio.h>
#include <stdlib.h>  // For malloc, calloc, realloc, and free

int main() {
    int *arr, *arr_calloc;
    int n, i;

    // Use malloc to allocate memory for an array of integers
    printf("Enter the number of elements for malloc: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));  // Allocating memory using malloc
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements into the array
    printf("Enter %d integers for malloc:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the elements allocated using malloc
    printf("Elements in malloc array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Use calloc to allocate memory and initialize elements to zero
    int m;
    printf("\nEnter the number of elements for calloc: ");
    scanf("%d", &m);

    arr_calloc = (int *)calloc(m, sizeof(int));  // Allocating memory using calloc
    if (arr_calloc == NULL) {
        printf("Memory allocation failed!\n");
        free(arr);  // Free the malloc array before exiting
        return 1;
    }

    // Display the elements allocated using calloc (they should all be 0)
    printf("Elements in calloc array (initialized to 0):\n");
    for (i = 0; i < m; i++) {
        printf("%d ", arr_calloc[i]);
    }
    printf("\n");

    // Now use realloc to resize the malloc array to hold more elements
    int new_size;
    printf("\nEnter the new size for realloc (larger than %d): ", n);
    scanf("%d", &new_size);

    arr = (int *)realloc(arr, new_size * sizeof(int));  // Reallocating memory
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        free(arr_calloc);  // Free the calloc array before exiting
        return 1;
    }

    // Input additional elements into the reallocated array
    printf("Enter %d more integers for realloc:\n", new_size - n);
    for (i = n; i < new_size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the elements of the reallocated array
    printf("Elements in realloc array:\n");
    for (i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);         // Free the memory allocated using malloc/realloc
    free(arr_calloc);  // Free the memory allocated using calloc

    return 0;
}
