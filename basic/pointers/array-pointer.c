#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *arr[3];  // Declare an array of 3 integer pointers

    arr[0] = &a;  // Store the address of a in arr[0]
    arr[1] = &b;  // Store the address of b in arr[1]
    arr[2] = &c;  // Store the address of c in arr[2]

    // Accessing the values using the array of pointers
    for(int i = 0; i < 3; i++) {
        printf("Value of arr[%d] (value pointed by arr[%d]): %d\n", i, i, *arr[i]);
    }

    return 0;
}
