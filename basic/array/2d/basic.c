#include <stdio.h>

int main() {
     // Declaring and initializing a 2D array with 2 rows and 3 columns
    int matrix[2][3] = {
        {1, 2, 3}, // First row
        {4, 5, 6}  // Second row
    };

    int matrix2[2][3] = {
        {1, 2, 3}, // First row
        {4, 5, 6}  // Second row
    };

    // Access the element in an array
    printf("The element at 1 row and 3 column is %d \n", matrix[0][2]);
    // Update the value at 1 row and 3 column
    matrix[0][2] = 30;
    printf("After update The element at 1 row and 3 column is %d \n", matrix[0][2]);
    // Printing the 2D array
    printf("The matrix is:\n");
    for (int i = 0; i < 2; i++) { // Loop over rows
        for (int j = 0; j < 3; j++) { // Loop over columns
            printf("%d ", matrix[i][j]); // Access each element using matrix[i][j]
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
