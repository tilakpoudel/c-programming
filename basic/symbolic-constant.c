#include <stdio.h>  // Include the standard input-output library

#define PI 3.14159  // Define a symbolic constant for pi

int main() {  // Main function where program execution begins
    float radius, area;  // Declare variables to store radius and area

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);  // Read the user input and store it in the radius variable

    // Calculate the area of the circle using the formula Area = pi * radius^2
    area = PI * radius * radius;

    // Display the calculated area
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;  // Return 0 to indicate that the program ended successfully
}
