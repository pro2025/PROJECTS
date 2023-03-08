#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head,*newnode,*temp;
void main()
{
int choice;
head=NULL;
printf("Enter choice 1 to insert data in node:");
scanf("%d",&choice);
while(choice==1)
{
newnode=(struct node *)malloc(sizeof (struct node));
printf("Enter the data:");
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
printf("To enter choice again:");
scanf("%d",&choice);
}
printf("\nNo more element can be inserted\n");
temp=head;
printf("\nlist\n");
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
getch();
}
