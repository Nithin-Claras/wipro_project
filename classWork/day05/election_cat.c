#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("Category: Minor\n");
        printf("You are not eligible to vote.\n");
    } else {
        if (age <= 65) {
            printf("Category: Adult\n");
        } else {
            printf("Category: Senior\n");
        }
        printf("You are Eligible to vote.\n");
    }

    return 0;
}