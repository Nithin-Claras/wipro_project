/*Q2. Print series 1, 2, 4, 8, 16, 32, 64. given n = 64*/

#include<stdio.h>

int main(){

    int n,i=1;
    printf("Enter the value of n:");
    scanf("%d", &n);

    while(i<n){
        printf("%d,", i);
        i=i*2;
    }
    printf("%d", i);

    return 0;

}