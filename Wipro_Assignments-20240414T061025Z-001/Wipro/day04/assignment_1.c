#include <stdio.h>

#define MAX 100

int main() {
    int rollNumbers[MAX];
    char names[MAX][50];
    char genders[MAX];
    float salaries[MAX];
    long mobileNumbers[MAX];
    char addresses[MAX][50]; 
   
    int num;
    int i = 0; 

    printf("Enter the number of entries: ");
    scanf("%d", &num);

    while (i < num) {
        printf("\nEnter details for entry %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &rollNumbers[i]);
        printf("Name: ");
        scanf("%s", names[i]);
        printf("Gender (M/F): ");
        scanf(" %c", &genders[i]);
        printf("Salary: ");
        scanf("%f", &salaries[i]);
        printf("Mobile Number: ");
        scanf("%ld", &mobileNumbers[i]);
        printf("Address: ");
        scanf("%s", addresses[i]);
       
        i++; 
    }

    printf("\n================================");
    printf("\nEntry Details:\n");
    printf("================================\n");
    printf("R. No\tName\tGender\tSalary\tMobile No\tAddress\n");

    i = 0; 

    while (i < num) {
        printf("%d\t%s\t%c\t%.2f\t%ld\t%s\n", rollNumbers[i], names[i],
               genders[i], salaries[i], mobileNumbers[i],
               addresses[i]);
       
        i++; 
    }

    return 0;
}

