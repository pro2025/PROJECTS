#include<stdio.h>
#include<conio.h>
void main()
{
int n,m=0,a=1,b=0,i;
clrscr();
printf("Enter the decimal:");
scanf("%d",&n);
for(i=n;i>0;i=i/2)
{
m=i%2;
b=b+(a*m);
a=a*10;
}
printf("Binary: %d",b);
getch();
}
