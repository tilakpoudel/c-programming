#include <stdio.h>

int main() {
    unsigned int x = 5;  // 0000 0101 in binary
    unsigned int y = 3;  // 0000 0011 in binary

    // Bitwise AND
    unsigned int and_result = x & y; // 0000 0001
    printf("Bitwise AND: %d & %d = %d\n", x, y, and_result);

    // Bitwise OR
    unsigned int or_result = x | y; // 0000 0111
    printf("Bitwise OR: %d | %d = %d\n", x, y, or_result);

    // Bitwise XOR
    unsigned int xor_result = x ^ y; // 0000 0110
    printf("Bitwise XOR: %d ^ %d = %d\n", x, y, xor_result);

    // Bitwise NOT
    unsigned int not_result = ~x; // 1111 1010 (in 32-bit, it will be 11111111111111111111111111111010)
    printf("Bitwise NOT: ~%d = %u\n", x, not_result);

    // Left shift
    unsigned int left_shift_result = x << 1; // 0000 1010
    printf("Left shift: %d << 1 = %d\n", x, left_shift_result);

    // Right shift
    unsigned int right_shift_result = x >> 1; // 0000 0010
    printf("Right shift: %d >> 1 = %d\n", x, right_shift_result);

    return 0;
}
