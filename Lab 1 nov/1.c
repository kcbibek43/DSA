#include<stdio.h>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define MAX 100 
int top=-1,stack[MAX];
void push();
void pop();
void transverse();
void findlargest_ele();
void findsmallest_ele();
void main()
{
int ch;
while(1) 
{
printf("\nStack Menu");
printf("\n\n1.Push\n2.Pop\n3.Display\n4.Find largest element\n5.Find smallest element \n6.Exit");
printf("\n\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: transverse();
break;
case 4: findlargest_ele();
break;
case 5: findsmallest_ele();
break;
case 6:
exit(0);
default: printf("\nWrong Choice!!");
}
}
} 
void push()
{
int val;
if(top==MAX-1)
{
printf("\nStack is full!!");
}
else
{
printf("\nEnter element to push:");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}
void pop()
{
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nDeleted element is %d",stack[top]);
top=top-1;
}
}
void transverse()
{
int i;
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nStack is...\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}
void findlargest_ele(){
    int max=0;
if(top==-1)
{
printf("\nStack is empty!!");
}
else if(top==0){
    max = stack[top];
}
else
{
    max=stack[top];
for(int i=top-1;i>=0;--i){
if (max<stack[i])
max=stack[i];
}
}
printf("The largest element of the stack is %d\n",max);
};
void findsmallest_ele(){
    int min=0;
if(top==-1)
{
printf("\nStack is empty!!");
}
else if (top==0){
    min = stack[top];
}
else
{   
min =stack[top];
for(int i=top-1;i>=0;--i){
if (min>stack[i])
min=stack[i];
}
}
printf("The smallest element of the stack is %d\n",min);
};