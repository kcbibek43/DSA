#include<stdio.h>
#include<conio.h>
main(){
     int n,a[100],i;//n=3{0,1,2}
    printf("enter size of array:");
    scanf("%d",&n);

       printf("enter elements of array:\n");
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    printf("elements of array are:\n");
   for(i=0;i<n;i++){
      printf("%d\t",a[i]);
    }
 printf("\nReverse of array is\n");
for(i=n-1;i>=0;i--){//n-1=2{2,1,0}
printf("%d\t",a[i]);
}
return 0;
}
