#include <stdio.h>

int main() {
    int matrix[3][2] = { {1, 2}, {3, 4}, {5, 6} }; // Original 3x2 matrix
    int transpose[2][3]; // Transposed matrix will be 2x3

    // Transposing the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            transpose[j][i] = matrix[i][j]; // Swap rows and columns
        }
    }

    // Printing the transposed matrix
    printf("Transposed matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
