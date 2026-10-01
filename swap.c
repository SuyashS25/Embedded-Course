#include <stdio.h>

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap_by_address(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    swap_by_value(a, b);
    printf("After swap_by_value:   a = %d, b = %d\n", a, b);

    swap_by_address(&a, &b);
    printf("After swap_by_address: a = %d, b = %d\n", a, b);

    return 0;
}