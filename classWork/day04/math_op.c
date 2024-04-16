#include <stdio.h>

int main() {
    int operation;
    float n1, n2, result;

    printf("Enter your choice of operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &operation);

    printf("Enter two numbers: ");
    scanf("%f%f", &n1, &n2);

    switch(operation) {
        case 1:
            result = n1 + n2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = n1 - n2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = n1 * n2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (n2 == 0) {
                printf("Error! Division by zero.\n");
            } else {
                result = n1 / n2;
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}