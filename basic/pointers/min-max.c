/*
WAP to find the minimum and maximum element in an array

Eg: [10,25,986, 78];

Output: 
Minimum: 10
Maximum: 986
*/

#include <stdio.h>

int main() {

    int arr[5] = {10, 25, 986, 78};

    // set min and max as the first element
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] <= min) {
            min = arr[i];
        }
        
        if (arr[i] >= max) {
            max = arr[i];
        }
    }

    printf("Minimum: %d \n", min);
    printf("Maximum: %d", max);
    
    return 0;
}