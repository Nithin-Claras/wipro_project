/* Q1. Print series 0,3,8,15,24,35,48,63,80,99 given n = 10 */

#include<stdio.h>

int main()
{
    int i=1, n;
    printf("Enter the value of n:");
    scanf("%d", &n);

    while(i<n){
        printf("%d,", (i*i)-1);
        i++;
    }

    printf("%d",(i*i)-1);
    return 0;
}