#include<stdio.h>
#include<conio.h>
void main()
{
float da,bs,hr,gs;
clrscr();
printf("Enter the basic salary");
scanf("%f",&bs);
da=0.4*bs;
hr=0.2*bs;
gs=da+hr+bs;
printf("gross salary of employee:%f",gs);
getch();
}
