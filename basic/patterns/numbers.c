
/*
1   6   10  13  15
2   7   11  14
3   8   12
4   9
5

*/
#include <stdio.h>

int main() {
    int n = 5;  // Number of rows
    int start;

    for (int i = 1; i <= n; i++) {
        start = i;
        for (int j = i; j <= n; j++) {
            printf("%d\t", start);
            start += (n - j + 1);  // Calculate the next number to be printed in the row
        }
        printf("\n");
    }

    return 0;
}