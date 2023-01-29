#include<stdio.h>
#include<stdlib.h>
struct node{
    int d;
struct node *next,*prev;
};
struct node *head=NULL,*tail;
void create(){
    int n;
    printf("Enter total numbers of node ");
    scanf("%d",&n);
struct node *newnode;
head=0;
while(n!=0){
newnode=(struct node* )malloc(sizeof(struct node ));
printf("Ente data ");
scanf("%d",&newnode->d);
if(head==0){
    head=newnode;
    tail=newnode;
    head->next=newnode;
    head->prev=newnode;
}
else{
tail->next=newnode;
newnode->prev=tail;
newnode->next=head;
tail=newnode;
}
n--;
}
tail->next=head;
head->prev=tail;
}
void display(){
struct node *temp=head;
printf("The data of nodes is \n");
do{
    printf("%d\n",temp->d);
    temp=temp->next;
}while(temp!=tail->next);
}
void swap(){
struct node *p,*c,*n;
p=tail->prev;
n=head->next;
c=head;
head=tail;
tail=c;
p->next=tail;
n->prev=head;
head->next=n;
tail->prev=p;
head->prev=tail;
tail->next=head;
}
int main(){
        printf("1.create\n");
		printf("2.Display\n");
		printf("3.Swap 1st and last node \n");
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
    swap();
    break;
     }
}
}