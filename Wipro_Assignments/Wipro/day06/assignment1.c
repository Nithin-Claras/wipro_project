/*

Q1. rotate array every kth element

i/p
1 2 3 4 5 6 7 8 9
k= 3
o/p
3 2 1 6 5 4 9 8 7

i/p
1 2 3 4 5 6 7 8 9
k= 4
o/p
4 3 2 1 7 6 5 4 9 8

*/

#include <stdio.h>

void rotate(int arr[], int n, int k) {
    for (int i = 0; i < n; i += k) {
        for (int j = i, l = i + k - 1; j < l; j++, l--) {
            int temp = arr[j];
            arr[j] = arr[l];
            arr[l] = temp;
        }
    }
}

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the rotation value of array(k): ");
    scanf("%d", &k);

    rotate(arr, n, k);

    printf("After rotating %dth element, the array is: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

