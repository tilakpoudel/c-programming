#include <stdio.h>

int main() {
    int *ptr = NULL;   // Initialize a pointer to NULL
    
    if (ptr == NULL) {
        printf("Pointer is null, it doesn't point to any valid memory.\n");
    }
    
    // Unsafe to dereference the pointer here because it is null
    // printf("%d", *ptr); // This will cause a segmentation fault

    return 0;
}
