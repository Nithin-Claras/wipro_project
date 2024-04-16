/*
Q6. 

Language
:C
Module   :Base Module
Topic    :Star Pattern
Level    :Easy
Problem
statement: Write the logic to print right triangle star pattern.

Input
Format  : First line contains N of type
integer.

Output
Format : Print the right triangle star pattern.

Constrains:

2<=N<=10

Sample Input:
5
Sample Output:
*
**
***
****
***** */
#include <stdio.h>

int main() {
    int n;
   
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        printf("%.*s\n", i, "*****************************");
        i++;
    }

    return 0;
}

