#include<stdio.h>
#include<conio.h>
void main()
{
float cp,sp,profit,loss;
clrscr();
printf("Enter the cost price of item");
scanf("%f",&cp);
printf("Enter the selling price of item");
scanf("%f",&sp);
profit=sp-cp;
loss=cp-sp;
if(profit>0)
{
printf("profit=%f",profit);
}
if(loss>0)
{
printf("loss=%f",loss);
}
getch();
}
