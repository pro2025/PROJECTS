#include<stdio.h>
#include<conio.h>
void main()
{
int r,perimeter,area;
clrscr();
printf("Enter the radius of circle:");
scanf("%d",&r);
perimeter=2*3.14*r;
area=3.14*r*r;
printf("Perimeter of circle: %d\",perimeter);
printf("area of circle: %d",area);
getch();
}