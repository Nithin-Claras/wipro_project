#include <stdio.h>

float add(float *a, float *b) {
    return *a + *b;
}

float subtract(float *a, float *b) {
    return *a - *b;
}

float multiply(float *a, float *b) {
    return *a * *b;
}

float divide(float *a, float *b) {
    if (*b == 0) {
        printf("Error! Can not divide by zero.\n");
        return 0;
    }
    return *a / *b;
}

int main() {
    printf("Welcome to Simple Calculator!\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
   
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    float result;
    switch (choice) {
        case 1:
            result = add(&num1, &num2);
            break;
        case 2:
            result = subtract(&num1, &num2);
            break;
        case 3:
            result = multiply(&num1, &num2);
            break;
        case 4:
            result = divide(&num1, &num2);
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    printf("Result: %f\n", result);
   
    return 0;
}
