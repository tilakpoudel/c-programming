#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // Skip the rest of the loop for i == 5
        }
        printf("%d ", i);
    }
    return 0;
}
