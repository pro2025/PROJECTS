#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,a,n,c,b,sum=0;
clrscr();
printf("Enter the value of n:");
scanf("%d",&n);
printf("Enter the number of digits in the number:");
scanf("%d",&b);
for(i=n;i>0;i=i/10)
{
a=i%10;
c=pow(a,b);
sum=sum+c;
}
if(sum==n)
{
printf("The number is armstrong number");
}
else
{
printf("The number is not armstrong number");
}
getch();
}