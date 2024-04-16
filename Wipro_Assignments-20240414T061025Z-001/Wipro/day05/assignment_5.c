/* Q5. 
Language:
C

Module:
Base Module

Topic:Star
Pattern

Level:Easy

Problem
statement:Write the
logic to print star pattern or rectangle star pattern.


Input
Format  : First line contains N of type
integer.

Output
Format : Print the rectangle star pattern.
Constrains:

2<=N<=10

Sample Input:
5

Sample Output:
*****
*****
*****
*****
*****

*/

#include<stdio.h>

int main(){

    int i = 0, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(i < n * n){
        printf("*");
        if ((i + 1) % n == 0) {
            printf("\n");
        }
        i++;
    }

    return 0;
}