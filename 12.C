#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("Enter the year:");
scanf("%d",&year);
if(year%400==0)
{
printf("Leap century year");
}
else if(year%4==0)
{
printf("leap year");
}
else if(year%100==0)
{
printf("Not a Leap year");
}
else
{
printf("Not a leap year");
}
getch();
}
