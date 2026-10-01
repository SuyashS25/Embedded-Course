#include <stdio.h>

void calculate_Arr(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + *(arr + i);
    }
    float avg = (float)sum / size;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
}

int main() {
    int n;
    printf("Enter the size of Array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    calculate_Arr(arr, n);

    return 0;
}