#include <stdio.h>

int main() {
    int a = 10;
    double b = 5.5;
    
    // Implicit conversion: 'a' is converted to double
    double result1 = a + b;
    printf("Result of implicit conversion: %f\n", result1); // 15.5
    
    double x = 5.7;
    
    // Explicit conversion: 'x' is converted to int
    int y = (int)x;
    printf("Value of x: %f\n", x); // 5.7
    printf("Value after explicit conversion: %d\n", y); // 5
    
    return 0;
}
