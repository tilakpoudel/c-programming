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
        "Bhagavad gita",  // Direct assignment
        "Srila Vysas deva", 
        0001,
        10.99
    };

    struct Book book2;
    strcpy(book2.title, "C programming");
    strcpy(book2.author, "Richard");
    book2.year_published = 2000;
    book2.price = 12.05;

    // Display the structure values
    printf("Book Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Year Published: %d\n", book1.year_published);
    printf("Price: $%.2f\n", book1.price);

    return 0;
}
