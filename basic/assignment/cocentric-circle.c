/*
    Write a C program to calculate the area of two concentric circles (one inside the other) and the area of the ring 
    formed between them. The program should:

    - Define a symbolic constant for π (pi).
    - Declare and initialize variables for the radii of the two circles.
    - Calculate and print the area of each circle and the ring.

    Hints:

        Use the formula for the area of a circle: 
        Area = π * radius^2
*/
#include <stdio.h>
#include <math.h>

#define PI 3.14159  // Define a symbolic constant for pi

int main() {
    float radius1 = 5.0;  // Radius of the inner circle
    float radius2 = 10.0;  // Radius of the outer circle
    float area1, area2, ring1Area;
    float radius3, radius4, area3, area4, ring2Area;

    // Calculate the area of the inner circle using pow function
    area1 = PI * pow(radius1, 2);

    // Calculate the area of the outer circle
    area2 = PI * pow(radius2, 2);

    // Calculate the area of the ring
    ring1Area = area2 - area1;

    // Print the results
    printf("Area of the inner circle: %.2f\n", area1);
    printf("Area of the outer circle: %.2f\n", area2);
    printf("Area of the ring: %.2f\n", ring1Area);

    // Get Input from user
    printf("Enter radius of 1st circle: ");
    scanf("%f", &radius3);
    printf("Enter radius of 2nd circle: ");
    scanf("%f", &radius4);

    // Calculate the area of the circles using pow function
    area3 = PI * pow(radius3, 2);
    area4 = PI * pow(radius4, 2);

    // Calculate the area of the ring
    ring2Area = area4 - area3;

    // Print the results
    printf("Area of the inner circle: %.2f\n", area3);
    printf("Area of the outer circle: %.2f\n", area4);
    printf("Area of the ring: %.2f\n", ring2Area);

    return 0;
}

