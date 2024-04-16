#include <stdio.h>

int main() {
    int table, i = 1;

    printf("Enter the table number: ");
    scanf("%d", &table);

    printf("Multiplication Table for %d:\n", table);
    while (i <= 10) {
        printf("%d x %d = %d\n", table, i, table * i);
        i++;
    }

    return 0;
}

