#include<stdio.h>
#include<conio.h>
struct student
{
   char name[50];
   int class;
   float marks;
   int roll;
};
int main()
{
    int n;
    printf("Enter no. of students : ");
    scanf("%d",&n);
    struct student s[n],*ptr;
    ptr = s;
    int i;
    for(i=0;i<n;i++){
        printf("enter details of %d student \n",i+1);
        fflush(stdin);
        printf("enter name : ");
        scanf("%s",s[i].name);
        printf("Enter class : ");
        scanf("%d",&s[i].class);
        printf("enter marks obtained : ");
        scanf("%f",&s[i].marks);
        printf("Enter roll no. : ");
        scanf("%d",&s[i].roll);
        printf("\n");
    }

    printf("The enter details are  \n");
    for(i=0;i<n;i++){
        printf("name : ");
        puts(s[i].name);
        printf("\nclass : ");
        printf("%d",s[i].class);
        printf("\nmarks obtained : ");
        printf("%f",s[i].marks);
        printf("\nroll no. : ");
        printf("%d",s[i].roll);
        printf("\n");
    }
    return 0;
}
