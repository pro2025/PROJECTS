#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
if (a==0)
{
printf("a is neutral number");
}
else if(a%2==0)
{
printf("Number is Even");
}
else
{
printf("Number is Odd");
}
getch();
}