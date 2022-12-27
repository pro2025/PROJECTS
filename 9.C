#include<stdio.h>
#include<conio.h>
void main()
{
int amount,a;
clrscr();
printf("Enter the amount:");
scanf("%d",&amount);
a=amount/100;
amount=amount-(a*100);
printf("%d x100=%d\n",a,(a*100));
a=amount/50;
amount=amount-(a*50);
printf("%d x50=%d\n",a,(a*50));
a=amount/10;
amount=amount-(a*10);
printf("%d x10=%d\n",a,(a*10));
a=amount/5;
amount=amount-(a*5);
printf("%d x5=%d\n",a,(a*5));
a=amount/2;
amount=amount-(a*2);
printf("%d x2=%d\n",a,(a*2));
a=amount/1;
printf("%d x1=%d\n",a,(a*1));
getch();
}