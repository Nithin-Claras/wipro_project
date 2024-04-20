/*
Write a program to find the  n-th number made of prime digits

Input Format:
First Line Of Input Contains T Number Of Test Cases
Second Line Of Input Contains an input Number N.

Output Format:
Print the Nth number of sequence and it should be only prime.

Constraints:
1<=T<=100
1<=N<=10000

Examples :
Input  :
1
10
Output :
 33
*/
#include <stdio.h>

int find_nthprime_num(int n) {
   
    int digits[] = {2, 3, 5, 7};
   
    int result = 0;
    int base = 1;

    while (n > 0) {
        result += base * digits[(n - 1) % 4];
        base *= 10;
        n = (n - 1) / 4;
    }

    return result;
}

int main() {
    int t, n;
    printf("Enter no of test case:");
    scanf("%d", &t);

    while (t--) {
        printf("Enter the n:");
        scanf("%d", &n);
        printf("%d\n", find_nthprime_num(n));
    }

    return 0;
}

