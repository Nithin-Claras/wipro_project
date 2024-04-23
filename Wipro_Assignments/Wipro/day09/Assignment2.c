/*
read the content from the records of employee and store in structure variable
*/

#include <stdio.h>

#define MAX_EMPLOYEES 10
#define MAX_LINE_LENGTH 256

struct Employee {
    int s_no;
    int emp_id; 

    char name[50];
    char mobile_no[15];
    char gender;
    char address[100];
};

int read_employee(const char *filename, struct Employee *employees) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error in opening file.");
        return 0;
    }

    int index = 0;
    char line[MAX_LINE_LENGTH];

    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file) != NULL && index < MAX_EMPLOYEES) {
        sscanf(line, "%d\t%d\t%s\t%s\t %c\t%s",
               &employees[index].s_no, &employees[index].emp_id, employees[index].name,
               employees[index].mobile_no, &employees[index].gender, employees[index].address);
        index++;
    }

    fclose(file);

    return index;
}

void disp(const struct Employee *employees, int count) {
    printf("Employee Details:\n");
    printf("S.no\tEmployee ID\tName\tMobile no\tGender\tAddress\n");
    for(int i = 0; i < count; i++) {
        printf("%d\t%d\t%s\t%s\t%c\t%s\n", employees[i].s_no, employees[i].emp_id,
               employees[i].name, employees[i].mobile_no, employees[i].gender, employees[i].address);
    }
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = read_employee("employee_records.txt", employees);
    if (count == 0) {
        return 1;
    }

    disp(employees, count);

    return 0;
}