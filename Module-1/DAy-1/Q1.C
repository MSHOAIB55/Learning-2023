#include <stdio.h>

int findMax(int operend1, int operend2)
{
    if (operend1 > operend2) {
        return operend1;
    } else {
        return operen2;
    }
}

int main() {
    int operend1, operend2;
    printf("Enter two numbers: ");
    scanf("%d %d", &operend1, &operend2);
    int max = findMax(operend1, operend2);
    printf("The biggest number is: %d\n", max);
    return 0;
}
