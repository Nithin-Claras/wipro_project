#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 256
#define MAX_LINES 1000

int read_fn(FILE *input_file, char lines[][MAX_LENGTH]) {
    int line_count = 0;
    while (fgets(lines[line_count], MAX_LENGTH, input_file) != NULL) {
        line_count++;
        if (line_count >= MAX_LINES) {
            printf("Maximum lines exceeds.");
            return -1;
        }
    }
    return line_count;
}

void write_fn(FILE *output_file, char lines[][MAX_LENGTH], int line_count) {
    for (int i = line_count - 1; i >= 0; i--) {
        fprintf(output_file, "%s", lines[i]);
    }
}

int main() {
    char lines[MAX_LINES][MAX_LENGTH];

    FILE *input_file = fopen("employee_records.txt", "r");
    FILE *output_file = fopen("output.txt", "w");

    if (input_file == NULL || output_file == NULL) {
        printf("Error in opening file.");
        return 1;
    }

    int line_count = read_fn(input_file, lines);
    if (line_count == -1) {
        return 1;
    }

    write_fn(output_file, lines, line_count);

    fclose(input_file);
    fclose(output_file);

    printf("File reversed and written successfully.\n");

    return 0;
}