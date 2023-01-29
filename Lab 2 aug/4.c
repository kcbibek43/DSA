#include<stdio.h>
#include<conio.h>
int main(){
     int n,c,b,a[100],i;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter a element to be searched=");
    scanf("%d",&b);
    printf("enter elements of array:\n");
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++){
if(b==a[i]){
c++;
}
    }
    if(c>=1)
    printf("The element is found");
else
   printf("The element is not found");
return 0;
}
