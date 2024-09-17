#include <stdio.h>
#include <string.h>
// #include <ctype.h>

int main() {
    // Declare an array of strings (2D array)
    char strings[3][50] = {"Hello", "World", "C Programming"};
    
    // 1. Reading and Writing Strings
    printf("Original strings:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", strings[i]);
    }

    // 2. Copying one string to another
    char copy[50];
    strcpy(copy, strings[0]);
    printf("\nCopied string: %s\n", copy);

    // 3. Combining two strings
    char combined[100];
    strcpy(combined, strings[0]);  // Copy "Hello"
    strcat(combined, " ");         // Add a space
    strcat(combined, strings[1]);  // Concatenate "World"
    printf("Combined string: %s\n", combined);

    // 4. Comparing two strings for equality
    if (strcmp(strings[0], strings[1]) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    // 5. Extracting a portion of a string
    char portion[10];
    strncpy(portion, strings[2], 9);  // Extract the first 9 characters of "C Programming"
    portion[9] = '\0';  // Null terminate the extracted portion
    printf("Extracted portion: %s\n", portion);

    // 6. Finding the length of a string
    int length = strlen(strings[2]);
    printf("Length of '%s': %d\n", strings[2], length);

    // 7. Concatenating strings using strcat
    char greeting[50] = "Hello, ";
    strcat(greeting, strings[1]);  // Concatenate "World" to "Hello, "
    printf("Concatenated string with strcat: %s\n", greeting);

    // 8. Reversing a string using strrev (custom implementation since it's not available in all compilers)
    char to_reverse[50];
    strcpy(to_reverse, strings[1]);  // Copy "World"
    
    reverse_string(to_reverse);
    printf("Reversed string: %s\n", to_reverse);

    // 9. Converting string to upper and lower case
    char to_upper[50];
    strcpy(to_upper, strings[0]);  // Copy "Hello"
    
    // Convert to uppercase
    for (int i = 0; to_upper[i] != '\0'; i++) {
        to_upper[i] = toupper(to_upper[i]);
    }
    printf("Uppercase: %s\n", to_upper);

    // Convert to lowercase
    char to_lower[50];
    strcpy(to_lower, strings[1]);  // Copy "World"
    for (int i = 0; to_lower[i] != '\0'; i++) {
        to_lower[i] = tolower(to_lower[i]);
    }
    printf("Lowercase: %s\n", to_lower);

    return 0;
}

    // Custom reverse function
    void reverse_string(char str[]){
        int n = strlen(str);
        for (int i = 0; i < n / 2; i++) {
            char temp = str[i];
            str[i] = str[n - i - 1];
            str[n - i - 1] = temp;
        }
    }
