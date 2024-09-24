/*
C program that transforms a lowercase letter to uppercase and an uppercase letter to lowercase by 
passing a pointer to a function.
*/
#include <stdio.h>
#include <ctype.h>  // For tolower() and toupper() functions

// Function to transform a letter's case
void transformCase(char *ch) {
    if (*ch >= 'a' && *ch <= 'z') {
        // If the character is lowercase, convert to uppercase
        *ch = toupper(*ch);
    } else if (*ch >= 'A' && *ch <= 'Z') {
        // If the character is uppercase, convert to lowercase
        *ch = tolower(*ch);
    }
}

int main() {
    char letter;

    // Input a letter from the user
    printf("Enter a letter: ");
    scanf("%c", &letter);

    // Call the function and pass the address of the letter
    transformCase(&letter);

    // Output the transformed letter
    printf("Transformed letter: %c\n", letter);

    return 0;
}

/*
Without using library function
*/

/*
#include <stdio.h>

// Function to transform a letter's case using ASCII values
void transformCase(char *ch) {
    if (*ch >= 97 && *ch <= 122) {
        // If the character is lowercase (ASCII 97 to 122), convert to uppercase
        *ch = *ch - 32;  // Equivalent to *ch = *ch - ('a' - 'A');
    } else if (*ch >= 65 && *ch <= 90) {
        // If the character is uppercase (ASCII 65 to 90), convert to lowercase
        *ch = *ch + 32;  // Equivalent to *ch = *ch + ('a' - 'A');
    }
}

int main() {
    char letter;

    // Input a letter from the user
    printf("Enter a letter: ");
    scanf("%c", &letter);

    // Call the function and pass the address of the letter
    transformCase(&letter);

    // Output the transformed letter
    printf("Transformed letter: %c\n", letter);

    return 0;
}
*/
