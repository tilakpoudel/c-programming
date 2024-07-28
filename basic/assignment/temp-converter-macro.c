/*
    Write a C program to convert a given temperature from Celsius to Fahrenheit and Kelvin. The program should:

    Define symbolic constants for the conversion factors.
    Declare and initialize a variable for the temperature in Celsius.
    Calculate and print the temperature in Fahrenheit and Kelvin.
*/
#include <stdio.h>

#define CELSIUS_TO_FAHRENHEIT(c) ((c) * 9.0 / 5.0 + 32)  // Conversion macro
#define CELSIUS_TO_KELVIN(c) ((c) + 273.15)  // Conversion macro

int main() {
    float celsius = 25.0;  // Temperature in Celsius
    float fahrenheit, kelvin;

    // Convert Celsius to Fahrenheit and Kelvin
    fahrenheit = CELSIUS_TO_FAHRENHEIT(celsius);
    kelvin = CELSIUS_TO_KELVIN(celsius);

    // Print the results
    printf("Temperature in Celsius: %.2f°C\n", celsius);
    printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
    printf("Temperature in Kelvin: %.2fK\n", kelvin);

    return 0;
}
