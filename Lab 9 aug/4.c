#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr,*sort;
    printf("enter size of array : ");
    scanf("%d",&n);
    int m=n,j;
    ptr = (int*)malloc(n*sizeof(int));
    sort = (int*)malloc(n*sizeof(int));
    printf("Enter elements in array : ");
    for(i=0;i<n;i++)
    scanf("%d",&ptr[i]);

    for(i=0,j=0;i<n;i++){
        if(*(ptr+i)%2==0){
        sort[j]=*(ptr+i);
        j++;
        }
        else{
        sort[m-1]=*(ptr+i);
        m--;
        }
    }

    printf("The Array after arranging : \n");
    for(i=0;i<n;i++)
    printf("%d\t",sort[i]);

    return 0;
    getch();
}
