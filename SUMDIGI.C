#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum=0;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
while(a>0)
{
b=a%10;
sum=sum+b;
a=a/10;
}
printf("Sum of digits:%d",sum);
getch();
}

