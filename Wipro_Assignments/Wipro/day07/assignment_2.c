/*
Array sorting using pointer
*/

#include <stdio.h>

void bSort(int *arr, int n) {
    for (int i = 0, swapped = 1; i < n - 1 && swapped; i++) {
        swapped = 0;
        for (int *ptr = arr; ptr < arr + n - i - 1; ptr++) {
            if (*ptr > *(ptr + 1)) {
                int temp = *ptr;
                *ptr = *(ptr + 1);
                *(ptr + 1) = temp;
                swapped = 1;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
     printf("Enter the array elements:");
    int arr[n];
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
    }

    printf("Array before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bSort(arr, n);

    printf("Array after sorting in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}