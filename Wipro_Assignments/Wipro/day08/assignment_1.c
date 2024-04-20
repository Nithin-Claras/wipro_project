/*
check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31

34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4

*/

#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num, count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
   
    printf("Output\n");
    for (int i = 2; i <= num / 2; i++) {
        if (is_prime(i) && is_prime(num - i)) {
            printf("%d = %d + %d\n", num, i, num - i);
            count++;
        }
    }
   
    printf("NoofWays = %d\n", count > 0 ? count : -1);

    return 0;
}

