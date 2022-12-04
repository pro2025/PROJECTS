#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,s,area;
clrscr();
printf("Enter the value of AB:");
scanf("%d",&a);
printf("Enter the value of BC:");
scanf("%d",&b);
printf("Enter the value of CA:");
scanf("%d",&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area of Triangle is:%f",area);
getch();
}