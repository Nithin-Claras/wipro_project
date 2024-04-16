/*Q4. Find out the sum of series   3+33+333+3333+33333+333333*/

#include<stdio.h>

int main(){
    int t1=3;
    int sum=0;

    int i=1;
    while(i<=6){
        sum += t1;
        printf("%d", t1);
        
        if(i<6){
            printf("+");
        }

        t1 = t1*10+3;
        i++;
    }
    printf("\nThe sum is %d",sum);

    return 0;
}