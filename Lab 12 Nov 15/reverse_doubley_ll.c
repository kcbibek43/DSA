#include<stdio.h>
#include<stdlib.h>
struct node{
    int d;
struct node *next,*prev;
};
struct node *head=NULL;
void create(){
    int n;
    printf("Enter total numbers of node ");
    scanf("%d",&n);
struct node *newnode,*temp;
head=0;
while(n!=0){
newnode=(struct node* )malloc(sizeof(struct node ));
printf("Ente data ");
scanf("%d",&newnode->d);
newnode->prev=0;
newnode->next=0;
if(head==0){
    head=newnode;
    temp=newnode;
}
else{
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
}
n--;
}
}
void reverse(){
struct node *temp=head,*n,*tail;
while (temp!=0)
{   
    n=temp->next;
    temp->next=temp->prev;
    temp->prev=n;
    tail=temp;
    temp=n;
}
head=tail;
}
void display(){
struct node *temp=head;
printf("The data of nodes is \n");
while(temp->next!=NULL){
    printf("%d\n",temp->d);
    temp=temp->next;
}
printf("%d",temp->d);
}
int main(){
        		printf("1.create\n");
		printf("2.Display\n");
		printf("3.Reverse \n");
        while(1){
           int n;
           printf("\nyour choice ");
    scanf("%d",&n);
    switch(n){
    case 1:
    create();
    break;
    case 2:
    display();
    break;
    case 3:
    reverse();
    break;
     }
}

}