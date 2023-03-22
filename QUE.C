#include<stdio.h>
#include<conio.h>
#define max 15
void insert(int val,int que[max],int *rer)
{
if(*rer<max-1)
{
*rer=*rer+1;
que[*rer]=val;
}
else
{
printf("Queue is full.New values cannot be inserted\n");
exit(0);
}
}
void delete(int * val,int que[max],int *fnt,int rer)
{
if(*fnt==rer)
{
printf("Empty queue.No values to delete\n");
exit(0);
}
*fnt=*fnt+1;
*val=que[*fnt];
}
void main()
{
int n,val;
int que[max];
int fnt,rer;
clrscr();
fnt=rer=(-1);
do
{
do
{
printf("List the elements to be entered.\n");
scanf("%d",&val);
insert(val,que,&rer);
printf("To continue enter 1\n");
scanf("%d",&n);
}while(n==1);
{
printf("To delete an element enter 1\n");
scanf("%d",&n);
while(n==1)
{
delete(&val,que,&fnt,rer);
printf("The value that has been deleted is %d\n",val);
printf("To delete an element enter 1\n");
scanf("%d",&n);
}
printf("To continue enter 1\n");
scanf("%d",&n);
}
}while(n==1);
getch();
}
