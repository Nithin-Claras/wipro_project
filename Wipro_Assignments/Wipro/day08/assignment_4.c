#include <stdio.h>
#include <string.h>

int main() {
    char first[100], second[100], result[100] = "";

    printf("Enter the first string: ");
    fgets(first, sizeof(first), stdin);
    printf("Enter the second string: ");
    fgets(second, sizeof(second), stdin);

    for (int i = 0; second[i] != '\0'; i++) {
        int found = 0;
        for (int j = 0; first[j] != '\0'; j++) {
            if (second[i] == first[j]) {
                found = 1;
                break;
            }
        }
        if (!found) result[strlen(result)] = second[i];
    }

    printf("Output string is: %s\n", result);

    return 0;
}

