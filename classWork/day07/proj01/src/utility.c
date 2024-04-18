#include <stdio.h>
#include <utility.h>

//define the display function here
void display(int arr[], int CAP)
{
    int i;
    printf("\nArray Elements are\n");
    for(i=0;i<CAP;i++)
        printf(" %d ",arr[i]);
    printf("\n====================\n");

}

//applying linear search if array are not sorted
int searchEle(int arr[], int CAP, int key)
{
    int i,flag=0;
    for(i=0;i<CAP;i++)
    {
        if(arr[i]==key)
        {
            flag =1;
            break;
        }
    }
    
    return i;
}

int sortAsc(int arr[], int CAP)
{
    int i,j,t;
    for(i=0;i<CAP;i++)
    {
        for(j=0;j<CAP-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=t;
            }
        }
    }

    return 1;
}
