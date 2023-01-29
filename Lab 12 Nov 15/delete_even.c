#include<stdio.h>
#include<stdlib.h>
struct node{
    int d;
struct node *next;
};
struct node *head=NULL;
void create(){
    int n;
    printf("Enter total numbers of node ");
    scanf("%d",&n);
struct node *newn,*temp;
head=0;
while(n!=0){
newn=(struct node* )malloc(sizeof(struct node ));
printf("Ente data ");
scanf("%d",&newn->d);
newn->next=0;
if(head==0){
    head=newn;
    temp=newn;
}
else{
    temp->next=newn;
    temp=newn;
}
n--;
}
}
void delete_even(){
struct node *t=head,*p=head;
    while(t->next!=0){
if (t==p&&t->d%2==0){
    t=t->next;
    head=t;
}
else if(t->d%2==0){
      p->next=t->next;
      t=t->next;
}
else{
    p=t;
t=t->next;
}
}
if(t->next==0&&t->d%2==0){
    p->next=0;
    free(t);
}
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
		printf("3.Delete even\n");
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
    delete_even();
    break;
     }
}
}