#include <stdio.h>  // Preprocessor directive to include standard input-output functions

// Global variable declaration
int globalVariable = 10;

// Function declaration (prototype)
void displayMessage();

int main() {
    // Local variable declaration
    int localVariable = 20;

    // Statements
    printf("Hello, World!\n");  // Print a message to the console
    printf("Global Variable: %d\n", globalVariable);  // Print the global variable
    printf("Local Variable: %d\n", localVariable);  // Print the local variable

    // Function call
    displayMessage();  // Call the displayMessage function

    return 0;  // Return 0 to indicate successful execution
}

// Function definition
void displayMessage() {
    printf("This is a function call.\n");  // Print a message indicating a function call
}
