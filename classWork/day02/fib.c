#include <stdio.h>

int main()
{
    int v1 = 0, v2 = 1, Fb, n;

    printf("Enter the nth Number: ");
    scanf("%d", &n);
    printf("\nFibonacci Series up to %dth Number is\n", n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", v1);
        Fb = v1 + v2;
        v1 = v2;
        v2 = Fb;
    }

    printf("\n\n");
    return 0;
}