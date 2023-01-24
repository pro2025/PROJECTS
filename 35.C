#include<stdio.h>
#include<conio.h>
int stack[100],n,top,item,i=0;
int push(void);
int main()
{
clrscr();
top=-1;
printf("Enter the size of stack:");
scanf("%d",&n);
{
if(top>=n-1)
{
printf("Stack is full");
}
else
{
for(i=0;i<n;i++)
{
printf("Element at %d:",i);
scanf("%d",&stack[i]);
}
printf("Enter a value to be pushed:");
scanf("%d",&item);
top=top+1;
stack[top]=item;
}
}
getch();
return 0;
}





