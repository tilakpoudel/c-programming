#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Declare an array with a single string (1D array)
    char str[50] = "HelloWorld";  // Single string to work on

    // 1. Reading and Writing the String
    printf("Original string: %s\n", str);

    // 2. Copying the string to another
    char copy[50];
    strcpy(copy, str);
    printf("Copied string: %s\n", copy);

    // 3. Combining (concatenating) the string with another string
    char additional[50] = "Programming";
    char combined[100];
    strcpy(combined, str);  // Copy the original string
    strcat(combined, additional);  // Concatenate "Programming"
    printf("Combined string: %s\n", combined);

    // 4. Comparing the string with another
    if (strcmp(str, additional) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    // 5. Extracting a portion of the string (first 5 characters)
    char portion[10];
    strncpy(portion, str, 5);  // Extract the first 5 characters from "HelloWorld"
    portion[5] = '\0';  // Null-terminate the portion
    printf("Extracted portion: %s\n", portion);

    // 6. Finding the length of the string
    int length = strlen(str);
    printf("Length of the string '%s': %d\n", str, length);

    // 7. Concatenating using strcat
    char greeting[50] = "Hello, ";
    strcat(greeting, str);  // Concatenate "Hello, " with "HelloWorld"
    printf("Concatenated string: %s\n", greeting);

    // 8. Reversing the string (manual reverse function)
    void reverse_string(char s[]) {
        int n = strlen(s);
        for (int i = 0; i < n / 2; i++) {
            char temp = s[i];
            s[i] = s[n - i - 1];
            s[n - i - 1] = temp;
        }
    }

    char reversed[50];
    strcpy(reversed, str);  // Copy original string
    reverse_string(reversed);  // Reverse it
    printf("Reversed string: %s\n", reversed);

    // 9. Converting the string to uppercase
    char to_upper[50];
    strcpy(to_upper, str);  // Copy original string
    for (int i = 0; to_upper[i] != '\0'; i++) {
        to_upper[i] = toupper(to_upper[i]);  // Convert each character to uppercase
    }
    printf("Uppercase string: %s\n", to_upper);

    // 10. Converting the string to lowercase
    char to_lower[50];
    strcpy(to_lower, str);  // Copy original string
    for (int i = 0; to_lower[i] != '\0'; i++) {
        to_lower[i] = tolower(to_lower[i]);  // Convert each character to lowercase
    }
    printf("Lowercase string: %s\n", to_lower);

    return 0;
}
