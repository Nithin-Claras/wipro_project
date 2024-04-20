/*
alternativel merge two strings
i/p
Bhima
ABCDEOLM
o/p
BAhBiCmDaEOLM
*/
#include <stdio.h>
#include <string.h>

int main() {
    char first[100], second[100], result[200] = "", *ptr = result;

    printf("Enter the first string: ");
    fgets(first, sizeof(first), stdin);

    if (strchr(first, '\n') != NULL) {
        *strchr(first, '\n') = '\0';
    }

    printf("Enter the second string: ");
    fgets(second, sizeof(second), stdin);

    if (strchr(second, '\n') != NULL) {
        *strchr(second, '\n') = '\0';
    }

    int len1 = strlen(first), len2 = strlen(second);
    int i = 0, j = 0;

    while (i < len1 || j < len2) {
        if (i < len1) *ptr++ = first[i++];
        if (j < len2) *ptr++ = second[j++];
    }

    *ptr = '\0';
    printf("Output string is: %s\n", result);

    return 0;
}