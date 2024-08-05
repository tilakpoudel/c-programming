#include <stdio.h>  // Preprocessor directive to include standard input-output functions

// Global variable declaration
// data-type variableName
int globalVariable = 10;

// Function declaration (prototype)
// return-type functionName
void displayMessage();

void main() {  // program starts from heres
    // variable declare
    int newVariable;
    // variable initialization
    newVariable = 100;
    // Local variable declaration and initialization
    int localVariable = 20;
    // Statements
    printf("Hello, World!\n");  // Print a message to the console
    printf("Global Variable: %d and local variable is %d \n", globalVariable, localVariable);  // Print the global variable
    // printf("Local Variable: %d\n", localVariable);  // Print the local variable

    // Function call
    displayMessage();  // Call the displayMessage function

    // return 1;  // Return 0 to indicate successful execution
}

// Function definition
void displayMessage() {
    printf("This is a function call.\n");  // Print a message indicating a function call
}
