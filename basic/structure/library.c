/*
In a library system, you might want to store information about books. A structure can help you encapsulate this data.
 */
#include <stdio.h>
#include <string.h>

// Define a structure named Book
struct Book {
    char title[100];
    char author[50];
    int year_published;
    float price;
};

int main() {
    // Declare a structure variable
    struct Book book1;

    // Assign values to the structure members
    strcpy(book1.title, "The Great Gatsby");
    strcpy(book1.author, "F. Scott Fitzgerald");
    book1.year_published = 1925;
    book1.price = 10.99;

    // Display the structure values
    printf("Book Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Year Published: %d\n", book1.year_published);
    printf("Price: $%.2f\n", book1.price);

    return 0;
}
