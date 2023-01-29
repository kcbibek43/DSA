#include<stdio.h>
#include<conio.h>
int main(){
     int n,a,b,c[100],i;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter the highest and lowest range of array =");
    scanf("%d%d",&a,&b);
    printf("enter elements of array:\n");
    for(i=0;i<n;i++){
       scanf("%d",&c[i]);
    }
    printf("The elements between %d and %d are ",a,b);
    for(i=0;i<n;i++){
    if(c[i]>a && c[i]<b)
    printf("%d\t",c[i]);
    }

}
