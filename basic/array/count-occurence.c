#include <stdio.h>

int main() {
    int numbers[10] = {1, 2, 3, 2, 4, 2, 5, 2, 6, 2}; // Array with multiple 2's
    int size = 10;
    int search = 2; // The number to search for
    int count = 0; // To store the count of occurrences

    // Counting occurrences of the specified number
    for (int i = 0; i < size; i++) {
        if (numbers[i] == search) {
            count++;
        }
    }

    printf("The number %d appears %d times in the array.\n", search, count);

    return 0;
}
