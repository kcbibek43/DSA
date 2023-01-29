#include<stdio.h>
int main()
{
    int a,b=1;
    printf("Enter a number = ");
    scanf("%d",&a);
    while(a!=0){
        b*=a;
        a--;
    }
printf("The factorial of given number is %d",b);
}
