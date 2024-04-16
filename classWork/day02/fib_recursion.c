#include <stdio.h>

int FS(int, int, int);

int main() {
    int v1 = 0, v2 = 1, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);
    printf("%d ", v1); // Print the first term (0)

    if (n > 1) {
        printf("%d ", v2); // Print the second term (1)
        FS(v1, v2, n - 2); // Decrease n by 2 as we have already printed the first two terms
    }

    printf("\n");

    return 0;
}

int FS(int a1, int a2, int n) {
    if (n == 0) {
        return 0;
    }

    int Fb = a1 + a2;
    printf("%d ", Fb);

    a1 = a2;
    a2 = Fb;

    return FS(a1, a2, n - 1);
}

