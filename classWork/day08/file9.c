/*
demo on structures

*/

#include <stdio.h>
#include <string.h>

struct Employee
{
    int empid;
    char empName[20];
    char empG;
    int empPhno;
    float empSal;
};

int main()
{
    //dec variables
    struct Employee e1,e2;
    printf("\nBase Address of e1 = %u",&e1);
    printf("\nBase Address of e2 = %u",&e2);
    printf("\nSizeof EMP = %d",sizeof(e1));
    
    e1.empid = 10001;
    e1.empG = 'f';
    e1.empPhno=9999;
    e1.empSal = 100000;
    strcpy(e1.empName, "bhima");
    

    e2.empid = 10002;
    e2.empG = 'm';
    e2.empPhno=9998;
    e2.empSal = 200000;
    strcpy(e2.empName, "bhima1");

    printf("\nID: %d",e1.empid);
    printf("\nGender: %c",e1.empG);
    printf("\nPhno: %d",e1.empPhno);
    printf("\nSalary: %f",e1.empSal);
    printf("\nName: %s",e1.empName);
    
    printf("\nID: %d",e2.empid);
    printf("\nGender: %c",e2.empG);
    printf("\nPhno: %d",e2.empPhno);
    printf("\nSalary: %f",e2.empSal);
    printf("\nName: %s",e2.empName);
    
    printf("\n\n");
    return 0;

}
