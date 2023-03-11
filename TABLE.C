#include<stdio.h>
#include<conio.h>
void main()
{
int n;
int i;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
printf("Table of %d:\n",n);
for(i=1;i<=10;i++)
{
printf("%d\n",n*i);
}
getch();
}