#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 7) {
            break;  // Exit the loop when i == 7
        }
        printf("%d ", i);
    }
    return 0;
}
