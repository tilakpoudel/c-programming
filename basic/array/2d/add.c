   /*
    1. WAP to display the elements of 2 dimensional array
    2. WAP to print the sum of two matrix
    3. WAP to transpose the matrix, A[2][3] , =>(transpose)  A'= [3][2]
   A =  [
        1   2   3
        4   5   6
    ]

    B = [
        10  20  30 
        40  50  60
    ]
    C = A + B
    C =[
        11  22  33
        44  55  66
    ]
    */
#include <stdio.h>

int main() {
    int matrix1[2][2] = { {1, 2}, {3, 4} }; // First 2x2 matrix
    int matrix2[2][2] = { {5, 6}, {7, 8} }; // Second 2x2 matrix
    int result[2][2]; // To store the result

    
    
    
    
    // Adding the two matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Printing the result matrix
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
