#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
int d;
clrscr();
printf("Enter the two numbers:\n");
scanf("%f%f",&a,&b);
printf("Enter 1 to add %f and %f\n",a,b);
printf("Enter 2 to subtract %f and %f\n",a,b);
printf("Enter 3 to multiply %f and %f\n",a,b);
printf("Enter 4 to divide %f and %f",a,b);
printf("\nEnter Your Choice:");
scanf("%d",&d);
switch(d)
{
case 1:c=a+b;
printf("Sum:%f",c);
break;
case 2:c=a-b;
printf("Substract:%f",c);
break;
case 3:c=a*b;
printf("Multiply:%f",c);
break;
case 4:
if (b==0)
printf("Division by zero is not defined");
else
{
c=a/b;
printf("Division:%f",c);
break;
}
default:
printf("Incorrect choice Error");
}
getch();
}
