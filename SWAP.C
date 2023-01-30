#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
void main()
{
int a,b;
clrscr();
printf("Enter the number:");
scanf("%d",&a);
printf("Enter the number:");
scanf("%d",&b);
printf("Before Swapping:number1= %d\n                 number2=%d\n",a,b);
swap(&a,&b);
printf("After Swapping:number1= %d\n                  number2=%d",a,b);
getch();
}

