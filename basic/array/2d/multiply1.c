#include <stdio.h>

int main() {
    // Declare two matrices A (2x3) and B (3x2)
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int B[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    int C[2][2]; // Resultant matrix will be 2x2

    // Initialize elements of the result matrix C to 0
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = 0;
        }
    }

    // Perform matrix multiplication A * B = C
    for (int i = 0; i < 2; i++) {          // Iterate through rows of A
        for (int j = 0; j < 2; j++) {      // Iterate through columns of B
            for (int k = 0; k < 3; k++) {  // Sum the products of row A and column B
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the resulting matrix C
    printf("Resulting Matrix C (2x2) after multiplication:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
