#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result = num; // Initialize result with the input number

    switch (oper_type) {
        case 1:
            result |= 1; // Set the 1st bit (bit index 0) to 1
            break;
        case 2:
            result &= ~(1 << 31); // Clear the 31st bit (bit index 30) to 0
            break;
        case 3:
            result ^= (1 << 15); // Toggle the 16th bit (bit index 15)
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }

    return result;
}

int main() {
    int num, oper_type;
    int result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    result = bit_operations(num, oper_type);

    printf("Result: %d\n", result);

return 0;
}
