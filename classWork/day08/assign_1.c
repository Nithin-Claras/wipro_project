/* String Encoding */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* encode_string(const char *str) {
    int len = strlen(str);
    char *result = (char *)malloc((2 * len + 1) * sizeof(char));
    if (result == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    int index = 0, count = 1;
    char current_char = str[0];

    for (int i = 1; i <= len; i++) {
        if (str[i] == current_char) {
            count++;
        } else {
            if (count > 1) {
                index += sprintf(result + index, "%c%d", current_char, count);
            } else {
                index += sprintf(result + index, "%c", current_char);
            }
            current_char = str[i];
            count = 1;
        }
    }

    return result;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    char *result = encode_string(str);
    if (result != NULL) {
        printf("%s\n", result);
        free(result);
    }

    return 0;
}
