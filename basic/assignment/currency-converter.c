
/*
    Write a C program to convert an amount from one currency to another. The program should:

    Define symbolic constants for the conversion rates.
    Declare and initialize a variable for the amount in the original currency.
    Calculate and print the amount in the target currency.
*/
#include <stdio.h>

#define USD_TO_EUR 0.85  // Conversion rate from USD to EUR
#define USD_TO_NPR 130  // Conversion rate from USD to NPR

int main() {
    float usd = 100.0;  // Amount in USD
    float eur, npr;

    // Convert USD to EUR and NPR
    eur = usd * USD_TO_EUR;
    npr = usd * USD_TO_NPR;

    // Print the results
    printf("Amount in USD: $%.2f\n", usd);
    printf("Amount in EUR: €%.2f\n", eur);
    printf("Amount in NPR: £%.2f\n", npr);

    return 0;
}
