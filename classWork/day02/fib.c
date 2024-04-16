/* Fib Series */

#include <stdio.h>

int main()
{
    int i=1,v1=0,v2=1,Fb=0,n;

    printf("\nEnter the nth Number: ");
    scanf("%d",&n);
    printf("\nFib Series of %dth Number is\n",n);
    
    while(i<=n)
    {
        printf("%d ",v1);
        Fb = v1+v2;
        v1 = v2;
        v2 = Fb;
        printf("%d ",Fb);
        i++;
    }

    printf("\n\n");
    return 0;
}