/*
Array of Pointers to Strings (Character Arrays)
Arrays of pointers are often used to store strings (which are arrays of characters).
*/
#include <stdio.h>

int main() {
    // Declare an array of pointers to strings (character arrays)
    char *arr[] = {
        "Hello",
        "World",
        "Array of Pointers"
    };

    // Get the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Accessing the strings using the array of pointers
    for(int i = 0; i < size; i++) {
        printf("String %d: %s\n", i, arr[i]);
    }

    return 0;
}
