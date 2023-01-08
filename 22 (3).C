#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,max;
clrscr();
printf("\nEnter 3 Numbers");
scanf("%d%d%d",&a,&b,&c);
max=a;
if(b>max)
max=b;
if(c>max)
max=c;
printf("Largest Number is %d",max);
getch();
}