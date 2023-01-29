#include<stdio.h>
#include<stdlib.h>
struct emp
{
  int a;
  float b;
  char c[56];
};
void main()
          {
           struct emp* ptr;
           ptr=(struct emp*)malloc(sizeof(struct emp));
           if (ptr==NULL){
            printf("Out of memory");
           }
           else
           {
               printf("enter employee details;\n");
               scanf("%d%f%s",ptr->a,ptr->b,ptr->c);
           }
          }
