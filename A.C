#include<stdio.h>
#include<conio.h>
void main()
{
float n;
clrscr();
printf("Enter the value");
scanf("%f",&n);
if(n<0)
{
n=(-1)*n;
}
printf("Absolute Value: %f",n);
getch();
}