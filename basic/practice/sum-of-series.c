#include <stdio.h>
#include <math.h>

int main() {
    int p, n;
    double sum = 0.0;

    // Input the values of p and n from the user
    printf("Enter the value of p: ");
    scanf("%d", &p);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += pow(p, i);  // p^i
    }

    // Print the result
    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}
