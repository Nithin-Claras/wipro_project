//Linear Search
#include <stdio.h>
#define CAP 10

void dispList(int [], int);


//driver code
int main()
{
    int a[CAP] = {12,11,55,77,33,43,1,5,2,6};
    int i, key, flag = 0;
    printf("\nEnter the key to be searched: ");
    scanf("%d",&key);

    for(i=0;i<CAP;i++)
    {
        if(key == a[i])
        {
            flag = 1;
            goto Print;
        }
    }

Print:
    if (flag == 1)
        printf("\nElement found @ %d position/index\n",i);
    else
        printf("\nElement is not present in the list\n");

    printf("\n\n");
    return 0;
}



void dispList(int a[], int Cap)
{
    int i;
    printf("\nList is\n");
    printf("\n=======================\n");
    for(i=0;i<Cap;i++)
        printf("%d\t",a[i]);
    printf("\n=======================\n");
}