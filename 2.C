#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,m,c;
clrscr();
printf("Enter the value of x");
scanf("%d",&x);
printf("Enter the value of m");
scanf("%d",&m);
printf("Enter the value of c");
scanf("%d",&c);
y=m*x+c;
printf("Value of y is %d",y);
getch();
}