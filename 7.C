#include<stdio.h>
#include<conio.h>
void main()
{
float f,c;
clrscr();
printf("Enter the temperature in fahrenheit:");
scanf("%f",&f);
c=(f-32)*5/9;
printf("Temperature in centigrade:%f",c);
getch();
}