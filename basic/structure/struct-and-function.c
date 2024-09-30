#include <stdio.h>

// Define a structure for Rectangle
struct Rectangle {
    float length;
    float width;
};

// Function to calculate the area of the rectangle
float calculateArea(struct Rectangle rect) {
    return rect.length * rect.width;
}

// Function to calculate the perimeter of the rectangle
float calculatePerimeter(struct Rectangle rect) {
    return 2 * (rect.length + rect.width);
}

int main() {
    struct Rectangle rect; // Declare a rectangle structure

    // Get user input for the rectangle dimensions
    printf("Enter the length of the rectangle: ");
    scanf("%f", &rect.length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &rect.width);

    // Calculate and display the area and perimeter
    float area = calculateArea(rect);
    float perimeter = calculatePerimeter(rect);

    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}
