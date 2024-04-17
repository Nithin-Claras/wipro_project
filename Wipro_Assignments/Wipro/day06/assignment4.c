/*
Q.4

Find a partition point in array

Given an unsorted array of integers. Find an element such that all the elements to its left are smaller and to its right are greater. Print -1 if no such element exists.

Note that there can be more than one such elements. For example an array which is sorted in increasing order all elements follow the property. We need to find only one such element.

Examples :

Input :  A[] = {4, 3, 2, 5, 8, 6, 7}  
Output : 5

Input : A[] = {5, 6, 2, 8, 10, 9, 8}
Output : -1
*/

#include <stdio.h>

int partition(int arr[], int n) {
    int max = arr[0];
    int partition_point = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] >= max) {
            max = arr[i];
            if (i == n - 1 || arr[i] <= arr[i + 1]) {
                partition_point = arr[i];
                break;
            }
        }
    }

    return partition_point;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int partition_point = partition(arr, n);
    printf("Partition Point: %d\n", partition_point);

    return 0;
}