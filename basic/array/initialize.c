#include <stdio.h>

int main () {

    // declare an array
    // int num[5];
    // initialize an array
    // num[0] = 1;
    // num[1] = 12;
    // num[2] = 13;
    // num[3] = 15;
    // num[4] = 150;

    // one line initialiazation
    int num[5] = {100, 1000, 2000, 230, 500};

    num[4] = 3000;

    printf("%d \n", num[0]);
    printf("%d \n", num[4]);
    // printf("%d", num[0]);

    return 0;
}