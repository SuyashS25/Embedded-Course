#include <stdio.h>

int add(int a, int b);

int main(void) {
    int x = 5, y = 3;
    int result = add(x, y);

    printf("Sum of %d and %d is %d\n", x, y, result);
    return 0;
}

int add(int a, int b) {
    return a + b;
}