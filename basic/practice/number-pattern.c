/*
5  10 15 20 25
10 15 20 25 30
15 20 25 30 35
*/
#include <stdio.h>

int main() {
    int rows = 3;    // Number of rows
    int cols = 5;    // Number of columns
    int start = 5;   // Starting value

    // Loop through each row
    for (int i = 0; i < rows; i++) {
        // Calculate the starting value for each row
        int current = start + i * 5;

        // Loop through each column in the current row
        for (int j = 0; j < cols; j++) {
            printf("%d ", current);
            current += 5; // Increment by 5 for the next column
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
