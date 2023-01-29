#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i,x,flag=0;
    printf("enter the length of the array");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("enter the elements of the array");
    for (i=0;i<n;i++)
    scanf("%d",ptr+i);
    printf("enter the number to search");
    scanf("%d",&x);
    for (i=0;i<n;i++)
    {
        if(ptr+i==x)
        flag=1;
    }
    if (flag==1)
    printf("element %d is present",x);
    else
    printf("element %d is not present",x);
      return 0;
}
