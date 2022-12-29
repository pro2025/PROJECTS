#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,sum;
clrscr();
printf("Enter the angle A of triangle");
scanf("%d",&a);
printf("Enter the angle B of triangle");
scanf("%d",&b);
printf("Enter the angle C of triangle");
scanf("%d",&c);
sum=a+b+c;
if(sum==180 && a>0 && b>0 && c>0)
printf("Triangle is valid");
else
printf("Triangle is not valid");
getch();
}
