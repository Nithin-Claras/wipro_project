#include <stdio.h>

extern int SIZE;

int main()
{
	int a[SIZE];
	int i;
	
	printf("\nEnter %d elements of array\n",SIZE);
	for(i=0;i<SIZE;i++)
		scanf("%d",&a[i]);

	printf("\nList is\n");
	for(i=0;i<SIZE;i++)
		printf(" %d ",a[i]);
	
	printf("\n\n");
	return 0;
}
