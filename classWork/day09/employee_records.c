#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50], mobile_no[15], gender, address[100];
};

void emp_details(struct Employee *emp, int index){
    printf("Enter details for Employee %d:", index+1);
    scanf("%d %s %s %c %s", emp->emp_id, emp->name, emp->mobile_no, emp->gender, emp->address);
}

void emp_file(FILE *file, struct Employee emp, int index){
    fprintf(file, "%d\t%d\t%s\t%s\t%c\t%s\n", index+1,emp.emp_id, emp.name, emp.mobile_no, emp.gender, emp.address);
}
int main(){
    FILE *file = fopen("employee_records.txt", "w");
    if(file == NULL){
        printf("Error");
        return 1;
    }

    fprintf(file, "S.no\tEmployee Id\tName\tMobile no\tGender\tAddress\n");

    struct Employee emp;
    for(int i=0; i<10; i++){
        emp_details(&emp, i);
        emp_file(file, emp,i);
    }

    fclose(file);
    printf("\nData written succsess\n");

    return 0;
}



