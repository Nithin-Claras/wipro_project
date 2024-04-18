/*
demo on pointers
*/

#include <stdio.h>
struct students
{
	int rollno;
	char Name[200];
};

int main()
{
	int qty=100;
	char ch='A';
	float f=10.5;
	double d=101.22;
	int qty1=201;
	int sum=0;
	struct  students s;
	struct students *ptr1;
		
	void *ptr;

	printf("\nAddress of qty = %u and its value=%d",&qty,qty);
	printf("\nAddress of ch = %u and its value=%c",&ch,ch);
	printf("\nAddress of f = %u and its value=%f",&f,f);
	printf("\nAddress of d = %u and its value=%lf",&d,d);

return 0;
}