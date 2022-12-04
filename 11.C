#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
if (a>b)
{
printf("a is greatest and b is smallest");
}
else if(b>a)
{
printf("b is greatest and a is smallest");
}
else
{
printf("Invalid number");
}
getch();
}