/*
    Write a C program to calculate the compound interest. The program should:

    Define symbolic constants for the number of times interest is compounded annually.
    Declare and initialize variables for the principal amount, interest rate, and time period.
    Calculate and print the compound interest.
    Hints:

    Use the formula for compound interest: 
    “A=P(1+n/r​)^nt,”
    , where 
    
    A is the amount, 
   
    P is the principal, 
    
    r is the annual interest rate, 
    
    n is the number of times interest is compounded per year, and 
    
    t is the time the money is invested for.
*/
#include <stdio.h>
#include <math.h>  // Include the math library for power function

#define TIMES_COMPOUNDED 4  // Define a symbolic constant for quarterly compounding

int main() {
    double principal = 1000.0;  // Principal amount
    double rate = 0.05;  // Annual interest rate
    int time = 10;  // Time period in years
    double amount;

    // Calculate the compound interest
    amount = principal * pow((1 + rate / TIMES_COMPOUNDED), TIMES_COMPOUNDED * time);

    // Print the results
    printf("Principal amount: $%.2f\n", principal);
    printf("Annual interest rate: %.2f%%\n", rate * 100);
    printf("Time period: %d years\n", time);
    printf("Amount after %d years: $%.2f\n", time, amount);

    return 0;
}
