#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev=0,ori,a;
clrscr();
printf("Enter the  number:");
scanf("%d",&n);
ori=n;
while(n>0)
{
a=n%10;
rev=(rev*10)+a;
n=n/10;
}
printf("Reverse number of %d is %d",ori,rev);
if(ori==rev)
{
printf("\nBoth numbers are equal");
}
else
{
printf("\nBoth numbers are not equal");
}
getch();
}

