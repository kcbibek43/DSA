#include <stdio.h>
#include <stdlib.h>

struct node
{
  int info;
  struct node *link;
};
struct node *start = NULL;
void createList ()
{
  int n;

  printf ("\nEnter the total number of nodes: ");
  scanf ("%d", &n);
  struct node *newNode, *t;
  int data, info, i;

  start = (struct node *) malloc (sizeof (struct node));

  if (start == NULL)
    {
      printf ("Unable to allocate memory.");
      exit (0);
    }

  printf ("Enter the data of node 1: ");
  scanf ("%d", &start->info);
  start->link = NULL;

  t = start;
  for (i = 2; i <= n; i++)
    {
      newNode = (struct node *) malloc (sizeof (struct node));

      if (newNode == NULL)
	{
	  printf ("Unable to allocate memory.");
	  break;
	}

      printf ("Enter the data of node %d: ", i);
      scanf ("%d", &info);

      newNode->info = info;
      newNode->link = NULL;

      t->link = newNode;
      t = t->link;
    }
}

void traverse ()
{


    if (start == NULL)
    {
      printf ("\nList is empty\n");
    }
      struct node *temp=start;
      while (temp->link != NULL)
	{
	  printf("%d ", temp->info);
	  temp = temp->link;
	}
	printf("%d",temp->info);
}

void
insertAtFront ()
{
  int data;
  struct node *temp;
  temp = malloc (sizeof (struct node));
  printf ("\nEnter number to" " be inserted : ");
  scanf ("%d", &data);
  temp->info = data;

  temp->link = start;
  start = temp;
}


void insertAtEnd ()
{
  int data;
  struct node *temp, *head;
  temp = malloc (sizeof (struct node));

  printf ("\nEnter number to" " be inserted : ");
  scanf ("%d", &data);

  // Changes links
  temp->link = 0;
  temp->info = data;
  head = start;
  while (head->link != NULL)
    {
      head = head->link;
    }
  head->link = temp;
}

void
insertAtPosition ()
{
  struct node *temp, *newnode;
  int pos, data, i = 1;
  newnode = malloc (sizeof (struct node));

  // Enter the position and data
  printf ("\nEnter position and data :");
  scanf ("%d %d", &pos, &data);

  temp = start;
  newnode->info = data;
  newnode->link = 0;
  while (i < pos - 1)
    {
      temp = temp->link;
      i++;
    }
  newnode->link = temp->link;
  temp->link = newnode;
}
void
deleteFirst ()
{
  struct node *temp;
  if (start == NULL)
    printf ("\nList is empty\n");
  else
    {
      temp = start;
      start = start->link;
      free (temp);
    }
}

void
deleteEnd ()
{
  struct node *temp, *prevnode;
  if (start == NULL)
    printf ("\nList is Empty\n");
  else
    {
      temp = start;
      while (temp->link != 0)
	{
	  prevnode = temp;
	  temp = temp->link;
	}
      free (temp);
      prevnode->link = 0;
    }
}

int main ()
{
  int choice;
  while (1)
    {
      printf ("\n\t1  To CREATE LIST\n");
      printf ("\t2  To TRAVERSE\n");
      printf ("\t3  For INSERTION at starting\n");
      printf ("\t4  For INSERTION at end\n");
      printf ("\t5  For INSERTION at Kth position\n");
      printf ("\t6  For DELETION of first element\n");
      printf ("\t7  For DELETION of last element\n");
          printf ("\t8 To exit\n");
      printf ("\nEnter Choice : ");
      scanf ("%d", &choice);
      printf("\n");

    switch (choice)
	{
	case 1:
	  createList ();
	  break;
	case 2:
	  traverse ();
	  break;
	case 3:
	  insertAtFront ();
	  break;
	case 4:
	  insertAtEnd ();
	  break;
	case 5:
	  insertAtPosition ();
	  break;
	case 6:
	  deleteFirst ();
	  break;
	case 7:
	  deleteEnd ();
	  break;
	case 8:
	  exit (1);
	  break;
	default:
	  printf ("Incorrect Choice\n");
	}
   }
  return 0;
}
