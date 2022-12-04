#include<stdio.h>
#include<conio.h>
void main()
{
int x,i,factorial=1;
clrscr();
printf("Enter the value of x:");
scanf("%d",&x);
for(i=x;i>=1;i--)
{
factorial=factorial*i;
}
printf("factorial is %d",factorial);
getch();
}