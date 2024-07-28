/*
    Write a C program to calculate the total price of items purchased in a store. The program should:

    - Define a symbolic constant for the sales tax rate.
    - Declare and initialize variables for the price of an item and the quantity purchased.
    - Use these variables to calculate the subtotal and the total price including sales tax.
    - Print the results.
*/

#include <stdio.h>  // Include the standard input-output library

#define TAX_RATE 0.07  // Define a symbolic constant for the sales tax rate (7%)

int main() {  // Main function where program execution begins
    float price = 10.0;  // Declare and initialize a variable for the price of an item
    int quantity = 5;  // Declare and initialize a variable for the quantity purchased
    float subtotal;  // Declare a variable to store the subtotal (price * quantity)
    float total;  // Declare a variable to store the total price including sales tax

    // Calculate the subtotal
    subtotal = price * quantity;

    // Calculate the total price including sales tax
    total = subtotal * (1 + TAX_RATE);

    // Print the results
    printf("Price of one item: $%.2f\n", price);
    printf("Quantity purchased: %d\n", quantity);
    printf("Subtotal: $%.2f\n", subtotal);
    printf("Total price (including %.0f%% tax): $%.2f\n", TAX_RATE * 100, total);

    return 0;  // Return 0 to indicate that the program ended successfully
}
