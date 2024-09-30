#include <stdio.h>

// Define a structure for Author
struct Author {
    char name[50];
    char nationality[30];
};

// Define a structure for Book which contains an Author
struct Book {
    char title[100];
    struct Author author; // Nested structure
    int year_published;
    float price;
};

int main() {
    // Declare and initialize a structure variable for Book
    struct Book book1;

    // Get user input for book details
    printf("Enter book title: ");
    fgets(book1.title, sizeof(book1.title), stdin);
    
    printf("Enter author name: ");
    fgets(book1.author.name, sizeof(book1.author.name), stdin);
    
    printf("Enter author nationality: ");
    fgets(book1.author.nationality, sizeof(book1.author.nationality), stdin);
    
    printf("Enter year published: ");
    scanf("%d", &book1.year_published);
    
    printf("Enter price: ");
    scanf("%f", &book1.price);

    // Display the structure values
    printf("\nBook Title: %s", book1.title);
    printf("Author Name: %s", book1.author.name);
    printf("Author Nationality: %s", book1.author.nationality);
    printf("Year Published: %d\n", book1.year_published);
    printf("Price: $%.2f\n", book1.price);

    return 0;
}
