#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("Enter the value of n:");
scanf("%d",&n);
i=1;
while (i<=n)
{
sum=sum+i;
i++;
}
printf("Sum of n numbers %d",sum);
getch();
}