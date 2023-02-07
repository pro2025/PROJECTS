#include<stdio.h>
#include<conio.h>
int fact(int n)
{
if(n==0)
return 1;
else
return n*fact(n-1);
}
int main()
{
int n;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
printf("factorial of %d=%d",n,fact(n));
getch();
return 0;
}