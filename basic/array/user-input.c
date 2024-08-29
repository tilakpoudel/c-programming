#include <stdio.h>

int main() {
    int marks[5]; // Array to store 5 integer values

    // Asking the user to input values
    printf("Enter 5 marks: \n");
    for (int i = 0; i < 5; i++) {
        printf("Mark %d: ", i + 1);
        scanf("%d", &marks[i]); // Storing user input in the array
    }

    // Printing the marks entered by the user
    printf("The marks are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", marks[i]);
    }

    return 0;
}
