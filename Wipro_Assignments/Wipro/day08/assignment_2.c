/*
Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits..

Input Format:

The First Line Of Input Contains T no of test cases
The Second Line Of Input Contains N as input taken.

Output Format:
Print the number of digits in the nth number .

Constraints:

1<=T<=100
1<=N<=100

Examples:

Input : 6
Output : 14

1,4 6, 9.11,14

Input : 21
Output : 111

*/

#include <stdio.h>

int find_nthNumber(int n) {
    int count = 0, num = 0;

    for (int i = 1; count < n; i++) {
        int temp = i;
        int valid = 1;

        while (temp != 0 && valid) {
            int digit = temp % 10;
            valid = (digit == 1 || digit == 4 || digit == 6 || digit == 9);
            temp /= 10;
        }

        if (valid) {
            num = i;
            count++;
        }
    }

    return num;
}

int main() {
    int t, n;

    printf("Enter no of test cases:");
    scanf("%d", &t);

    while (t--) {
        printf("Enter the n:");
        scanf("%d", &n);
        printf("%d\n", find_nthNumber(n));
    }

    return 0;
}