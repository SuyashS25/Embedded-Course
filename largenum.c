#include<stdio.h>

int largest_num(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("The largest number is: %d",largest);
    return largest;
}

int smallest_num(int arr[], int n) {
    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("The smallest number is: %d",smallest);
    return smallest;
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter the %d element of the array: \n", i);
        scanf("%d",&arr[i]);
    }

    printf("The element of the Array is: \n");

    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }

    largest_num(arr, n);
    smallest_num(arr, n);

    return 0;

}