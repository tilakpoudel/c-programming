#include <stdio.h>

int main() {
    int matrix[2][3] = { // 2 rows, 3 columns
        {1, 2, 3},
        {4, 5, 6}
    };

    // Printing the 2D array (matrix)
    printf("The matrix is:\n");
    for (int i = 0; i < 2; i++) { // Loop for rows
        for (int j = 0; j < 3; j++) { // Loop for columns
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
