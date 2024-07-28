#include <stdio.h>

int main() {
    float celsius;  // Variable to store temperature in Celsius
    float fahrenheit, kelvin;  // Variables to store converted temperatures

    // Prompt the user to enter the temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Convert Celsius to Kelvin
    kelvin = celsius + 273.15;

    // Print the results
    printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
    printf("Temperature in Kelvin: %.2fK\n", kelvin);

    return 0;
}
