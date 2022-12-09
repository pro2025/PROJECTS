#include<stdio.h>
#include<conio.h>
void main()
{
int i,a;
clrscr();
printf("Enter any number:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(i%2==0)
printf("%d",i);
}
getch();
}