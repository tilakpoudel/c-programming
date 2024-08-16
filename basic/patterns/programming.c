/*
WAP to print  the following pattern
Programming
rogramming
ogramming
gramming
ramming
amming
mming
ming
ing
ng
g
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Programming";
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        printf("%s\n", &str[i]);
    }

    return 0;
}


