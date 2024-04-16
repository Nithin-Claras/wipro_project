#include <stdio.h>

int main() {
    char color_code;
    int res_value;
   
    printf("Enter the color code of the resistor (R, O, Y, G, B, V): ");
    scanf(" %c", &color_code);
   
    switch(color_code) {
        case 'R':
            res_value = 2;
            printf("Red: %d ohms\n", res_value);
            break;
        case 'O':
            res_value = 3;
            printf("Orange: %d ohms\n", res_value);
            break;
        case 'Y':
            res_value = 4;
            printf("Yellow: %d ohms\n", res_value);
            break;
        case 'G':
            res_value = 5;
            printf("Green: %d ohms\n", res_value);
            break;
        case 'B':
            res_value = 6;
            printf("Blue: %d ohms\n", res_value);
            break;
        case 'V':
            res_value = 7;
            printf("Violet: %d ohms\n", res_value);
            break;
        default:
            printf("Invalid color code!\n");
    }
   
    return 0;
}