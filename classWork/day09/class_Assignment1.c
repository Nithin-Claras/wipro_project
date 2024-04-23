/*
Capture employee 10 records in the structure and store it in a file; 
output should be like S.no Employee ID, Name , Mobile no, gender, Address
*/

#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50], mobile_no[15], gender, address[100];
};

void emp_records(struct Employee *emp, int emp_index) {
    printf("Enter the EmployeeID for Employee %d: ", emp_index + 1);
    scanf("%d", &emp->emp_id);
   
    printf("Enter the Name for Employee %d: ", emp_index + 1);
    scanf("%s", emp->name);
   
    printf("Enter the MobileNumber for Employee %d: ", emp_index + 1);
    scanf("%s", emp->mobile_no);
   
    printf("Enter the Gender for Employee %d: ", emp_index + 1);
    scanf(" %c", &emp->gender);
   
    printf("Enter the Address for Employee %d: ", emp_index + 1);
    scanf("%s", emp->address);
}

void emp_file(FILE *file, struct Employee emp, int emp_index) {
    fprintf(file, "%d\t%d\t%s\t%s\t%c\t%s\n", emp_index + 1, emp.emp_id, emp.name, emp.mobile_no, emp.gender, emp.address);
}

int main() {
    FILE *file = fopen("employee_records.txt", "w");
    if (file == NULL) {
        printf("Error opening file.");
        return 1;
    }

    fprintf(file, "S.no\tEmployee ID\tName\tMobile no\tGender\tAddress\n");

    struct Employee emp;
    for(int i = 0; i < 10; i++) {
        emp_records(&emp, i);
        emp_file(file, emp, i);
    }

    fclose(file);
    printf("\nFile written successfully.\n");

    return 0;
}

