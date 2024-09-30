#include <stdio.h>

// Define a structure named Book
struct Book {
    char title[100];
    char author[50];
    int year_published;
    float price;
};

int main() {
    // Declare and initialize a structure variable
    struct Book book1 = {
        "The Great Gatsby",  // Direct assignment
        "F. Scott Fitzgerald", 
        1925,
        10.99
    };

    // Display the structure values
    printf("Book Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Year Published: %d\n", book1.year_published);
    printf("Price: $%.2f\n", book1.price);

    return 0;
}
