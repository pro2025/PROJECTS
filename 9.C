#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the value of side AB:");
scanf("%d",&a);
printf("Enter the value of side BC:");
scanf("%d",&b);
printf("Enter the value of side CA:");
scanf("%d",&c);
if (a==b && b==c)
{
printf("Triangle is Equilateral");
}
else if(a==b||b==c||c==a)
{
printf("Triangle is Isosceles");
}
else
{
printf("Triangle is scalene");
}
getch();
}
