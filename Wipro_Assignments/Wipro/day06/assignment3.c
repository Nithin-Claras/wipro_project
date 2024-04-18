/*
Q.3
Given an array A of N positive numbers. The task is to find the position
where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of   elements after it.

Input Format:
The first line contains an integer, denoting the size of the array.
The second line contains integers denoting the elements
of the array.
Constraints
1<= n<=100
1<=arr<= 1000, where arr is the ith element of the array.

Output Format:
The output line contains integer denoting an equilibrium
index (if any) or -1 (if no equilibrium indexes exist).

TESTCASE 1:
Input:
7
[-7, 1, 5, 2, -4, 3, 1]
3
[-7, 0, 0, 0, -4, 4, 0]
0
[0 0 0 0 -1]
4
Output:
3
*/
#include <stdio.h>

int findEquilibrium(int arr[], int n) {
    int first_part = 0, second_part = 0;
   
    for (int i = 0; i < n; i++) {
        first_part += arr[i];
    }

    for (int i = 0; i < n; i++) {
        first_part -= arr[i];

        if (second_part == first_part) {
            return i;
        }
       
        second_part += arr[i];
    }

    return -1;
}

int main() {
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the array elements:");
    
    int arr[size];
    for(int i=0;i<size;i++){
         scanf("%d",&arr[i]);
    }

    printf("Equilibrium index: %d\n", findEquilibrium(arr, size));

    return 0;
}