#include <stdio.h>
#include <utility.h>



int main()
{
    int arr[SIZE], i;
    int key,ret=0;
    printf("\nEnter %d elements of the array\n",SIZE);
    for(i=0;i<SIZE;i++)
        scanf("%d",&arr[i]);
    printf("\nBefore sorting\n");
    display(arr,SIZE);
    
    printf("\nEnter the value to be searched: ");
    scanf("%d",&key);
    ret = searchEle(arr,SIZE,key);
    if(ret >= SIZE)
        printf("\n%d key not found in the list",key);
    else
        printf("\n%d key value found @ %d position\n",key,ret);

    sortAsc(arr, SIZE);
    printf("\nAfter sorting\n");
    display(arr,SIZE);

    printf("\n\n");
    return 0;

}