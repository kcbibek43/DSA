# include<stdio.h>
# define MAX 5
int a[MAX];
int f = -1;
int r = -1;
void insert_right()
{
	int b;
	if((r == 0 && f == MAX-1) || (f == r+1))
	{	printf("Queue Overflow\n");
	}
	if (f == -1)
	{	f = 0;
		r = 0;}
	else
	if(r == MAX-1)
		r = 0;
	else
		r =r+1;
	printf("Input the element in queue :");
	scanf("%d", &b);
	a[r] = b ;
}
void insert_left()
{	int b;
	if((f == 0 && r == MAX-1) || (f==r+1))
	{	printf("Queue Overflow \n");
		return;	 }
	if (f == -1)
	{	f = 0;
		r = 0;	 }
	else
	if(f== 0)
		f=MAX-1;
	else
		f=f-1;
	printf("Input the element for adding in queue : ");
	scanf("%d", &b);
	a[f] = b;	 }
void delete_right()
{if (f == -1)
	{printf("Queue Underflow\n");
    }
	printf("Element deleted from queue is : %d\n",a[r]);
	if(f == r)
	{	f = -1;
		r=-1;	 }
	else
		if(r == 0)
			r=MAX-1;
		else
			r=r-1;	}
void display_queue()
{	int front_pos = f,rear_pos = r;
	if(f == -1)
	{	printf("Queue is empty\n");
	}
	printf("Queue elements :\n");
	if( front_pos <= rear_pos )
	{	while(front_pos <= rear_pos)
		{	printf("%d ",a[front_pos]);
			front_pos++;	}	}
	else
	{	while(front_pos <= MAX-1)
		{	printf("%d ",a[front_pos]);
			front_pos++;	}
		front_pos = 0;
		while(front_pos <= rear_pos)
		{	printf("%d ",a[front_pos]);
			front_pos++;
		}
	}
	printf("\n");
}
int main()
{	int choice;
		printf("1.Insert at rear\n");
		printf("2.Insert at front\n");
		printf("3.Delete from front\n");
		printf("4.Display\n");
		printf("5.Quit\n");
		do
	{	printf("Enter your choice : ");
	scanf("%d",&choice);
		switch(choice)
		{
		 case 1:
			insert_right();
			break;
		 case 2:
			insert_left();
			break;
		 case 3:
			delete_right();
			break;
		 case 4:
			display_queue();
			break;
		 case 5:
			break;
		 default:
			printf("Wrong choice\n");
		}
	}while(choice!=5);
}
