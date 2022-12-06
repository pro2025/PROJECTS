#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,h,perimeter,area;
clrscr();
printf("enter length of rectangle:");
scanf("%d",&l);
printf("enter breadth of rectangle:");
scanf("%d",&b);
printf("enter height of rectangle:");
scanf("%d",&h);
perimeter=2*(l+b);
area=l*b;
printf("perimeter of rectangle: %d\n",perimeter);
printf("area of rectangle: %d",area);
getch();
}