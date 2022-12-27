#include<stdio.h>
#include<conio.h>
void main()
{
int c,d,h;
clrscr();
printf("Enter the number:\n");
scanf("%d",&c);
printf("Enter the number:\n");
scanf("%d",&d);
h=c;
c=d;
d=h;
printf("After swapping the number:%d\n",c);
printf("After swapping the number:%d\n",d);
getch();
}