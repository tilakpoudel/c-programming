#include <stdio.h>

int main() {
    int source[5] = {1, 2, 3, 4, 5}; // Source array
    int destination[5]; // Destination array

    // Copying elements from source to destination
    for (int i = 0; i < 5; i++) {
        destination[i] = source[i];
    }

    // Printing the destination array
    printf("Destination array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", destination[i]);
    }

    return 0;
}
