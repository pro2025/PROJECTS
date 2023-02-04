#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*p1,*p2,t;
clrscr();
//scan two numbers by user
printf("Enter the number 1:");
scanf("%d",&a);
printf("Enter the number 2:");
scanf("%d",&b);
//value point to number1 and number2
*p1=a;
*p2=b;
//swap of two numbers
t=*p1;
*p1=*p2;
*p2=t;
//After swapping two numbers
printf("After swap number 1:%d\n",*p1);
printf("After swap number 2:%d",*p2);
getch();
}

