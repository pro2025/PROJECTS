//c program to add two numbers using pointers
//header file for input and output functions
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*p1,*p2,sum;
clrscr();
//input of number 1 and number 2
printf("Enter the number 1:");
scanf("%d",&a);
printf("Enter the number 2:");
scanf("%d",&b);
//using pointer to point value of two given numbers
*p1=a;
*p2=b;
//sum of number 1 and number 2
sum=*p1+*p2;
//print sum of two given numbers
printf("Sum of two numbers:%d",sum);
getch();
}


