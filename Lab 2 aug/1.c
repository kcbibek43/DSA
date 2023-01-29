#include <stdio.h>
int main()
{
    int n,s,i,a[100],b;
    printf("Enter the size of an array=\t");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
b=a[0];
for(i=1;i<n;i++){
    if(a[i]>b)
b=a[i];
}
printf("\n\nThe largest of array is = %d",b);
s=a[0];
   for(i=1;i<n-1;i++){
    if(a[i]<s)
   s=a[i];}
   printf("\nThe smallest element of array is = %d",s);
return 0;
}
