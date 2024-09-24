/*
Common Use Case of null pointer: Memory Allocation
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));  // Dynamically allocate memory for an integer
    
    if (ptr == NULL) {  // Check if the memory allocation was successful
        printf("Memory allocation failed. Exiting...\n");
        return -1;
    }
    
    *ptr = 100;  // Use the allocated memory
    printf("Value stored in dynamically allocated memory: %d\n", *ptr);

    free(ptr);  // Free the allocated memory to avoid memory leaks

    return 0;
}

/*
ptr = NULL; – The pointer is initialized to NULL to ensure it doesn't point to any random memory location.
if (ptr == NULL) – A common pattern to check if memory allocation (or any pointer assignment) was successful.
*/