#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b,sum=0;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
for (i=a;i>0;i=i/10)
{
b=i%10;
sum=sum+b;
}
printf("Sum of digits:%d",sum);
getch();
}