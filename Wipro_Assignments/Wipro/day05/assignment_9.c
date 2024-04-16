/*
Q9.
Q.
Write a c program to print alphabet triangle.
Input: 5
Output:

         A
       ABA
     ABCBA
   ABCDCBA
 ABCDEDCBA
 */

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 0;
    while (i < n) {
        int j = 0;
   
        while (j < n - i - 1) {
            printf("  ");
            j++;
        }

        j = 0;
        char ch = 'A';
       
        while (j <= i) {
            printf("%c ", ch + j);
            j++;
        }

        j = i - 1;
       
        while (j >= 0) {
            printf("%c ", ch + j);
            j--;
        }

        printf("\n");
        i++;
    }

    return 0;
}

