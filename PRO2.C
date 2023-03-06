#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head;
void insert( )
{
int item;
struct node *p=(struct node *)malloc(sizeof (struct node *));
if(p==NULL)
{
printf("\nOverflow\n");
}
else
{
p->data=item;
p->next=head;
head=p;
printf("\nNode inserted\n");
}
}
void traverse(struct node *p)
{
printf("List after insertion:\n");
while(p!=NULL)
{
printf("%d\n",p->data);
p=p->next;
}
}
void main()
{
int choice,item,data,m,n,s;
struct node *head;
struct node *one;
struct node *two;
struct node *three;
one=(struct node *)malloc(sizeof (struct node));
two=(struct node *)malloc(sizeof (struct node));
three=(struct node *)malloc(sizeof (struct node));
printf("Enter element at node1:\n");
scanf("%d",&m);
printf("Enter element at node2:\n");
scanf("%d",&n);
printf("Enter element at node3:\n");
scanf("%d",&s);
one->data=m;
two->data=n;
three->data=s;
one->next=two;
two->next=three;
three->next=NULL;
head=one;
traverse(head);
printf("enter the element to insert:\n");
scanf("%d",&item);
insert( );
printf("Enter 1 to insert element in linked list: ");
scanf("%d",&choice);
while(choice==1)
{
printf("Enter the item to insert:\n");
scanf("%d",&item);
insert( );
printf("enter again choice 1 to insert:\n");
scanf("%d",&choice);
}
printf("No element can be inserted");
getch();
}