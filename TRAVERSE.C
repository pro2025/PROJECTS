#include<stdio.h>
#include<conio.h>
struct node
{
int value;
struct node *next;
};
void traversell(struct node *ptr)
{
while(ptr!=NULL)
{
printf("%d\t",ptr->value);
ptr=ptr->next;
}
printf("\n");
}
int main()
{
int value;
int p,q,r;
struct node *head;
struct node *one;
struct node *two;
struct node *three;
one=(struct node *)malloc(sizeof (struct node));
two=(struct node *)malloc(sizeof (struct node));
three=(struct node *)malloc(sizeof (struct node));
printf("Enter the value in node 1:");
scanf("%d",&p);
printf("Enter the value in node 2:");
scanf("%d",&q);
printf("Enter the value in node 3:");
scanf("%d",&r);
one->value=p;
two->value=q;
three->value=r;
one->next=two;
two->next=three;
three->next=NULL;
head=one;
printf("Linked List\n");
traversell(head);
getch();
return 0;
}
