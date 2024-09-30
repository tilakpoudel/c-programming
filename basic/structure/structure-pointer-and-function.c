#include <stdio.h>

// Define a structure for Circle
struct Circle {
    float radius;
};

// Define a constant for pi
#define PI 3.14159

// Function to calculate the area of the circle
float calculateArea(struct Circle *circle) {
    return PI * circle->radius * circle->radius; // Area = πr²
}

// Function to calculate the circumference of the circle
float calculateCircumference(struct Circle *circle) {
    return 2 * PI * circle->radius; // Circumference = 2πr
}

int main() {
    struct Circle circle; // Declare a circle structure

    // Get user input for the circle radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &circle.radius);

    // Calculate and display the area and circumference
    float area = calculateArea(&circle); // Pass pointer to the circle structure
    float circumference = calculateCircumference(&circle); // Pass pointer to the circle structure

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
