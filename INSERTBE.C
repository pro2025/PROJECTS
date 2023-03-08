#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head,*temp,*newnode;
void insertbeg()
{
int data;
newnode=(struct node *)malloc(sizeof (struct node));
printf("Enter data at beginning:");
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
temp=head;
printf("\nLinked List\n");
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
void main()
{
int choice;
head=NULL;
printf("Enter 1 choice to insert :");
scanf("%d",&choice);
while(choice==1)
{
newnode=(struct node *)malloc(sizeof (struct node));
printf("Enter the node:");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
{
head=temp=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
printf("Enter your choice again to insert:");
scanf("%d",&choice);
}
printf("\n no element can be inserted\n");
insertbeg();
getch();
}