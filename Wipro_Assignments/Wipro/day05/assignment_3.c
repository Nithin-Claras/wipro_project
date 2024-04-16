/*Q3. print Sum of Even and  sum of odd values between 1 to 50*/

#include <stdio.h>

int main()
{
    int even_sum = 0, odd_sum = 0;
    for(int i=0; i<=50; i++){
        if(i%2 == 0){
            even_sum += i;
        }
        else{
            odd_sum += i;
        }
    }
    
    printf("Sum of Even numbers %d\n", even_sum );
    printf("Sum of Odd numbers %d\n", odd_sum );
}