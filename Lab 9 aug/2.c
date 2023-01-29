#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i;
    ptr=(int*)malloc(10*sizeof(int));
    printf("Enter the elements of array=");
    for(i=0;i<10;i++)
    scanf("%d",&ptr+i);
    return 0;
    }
