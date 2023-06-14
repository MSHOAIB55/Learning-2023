#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result = num;

    switch (oper_type) {
        case 1: // Set 1st bit
            result |= 1; // Perform bitwise OR with 1
            break;
        case 2: // Clear 31st bit
            result &= ~(1 << 31); // Perform bitwise AND with the complement of (1 shifted left by 31)
            break;
        case 3: // Toggle 16th bit
            result ^= (1 << 16); // Perform bitwise XOR with (1 shifted left by 16)
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }

    return result;
}

int main() {
    int num, oper_type;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    int result = bit_operations(num, oper_type);
    printf("Result: %d\n", result);

    return 0;
}