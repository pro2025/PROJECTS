#include<stdio.h>
#include<conio.h>
int fact(int n);
int main()
{
int n;
clrscr();
printf("Number to find Factorial:");
scanf("%d",&n);
printf("factorial is: %d",fact(n));
getch();
return 0;
}
int fact(int n)
{
int factNm1,factN;
if(n==0)
{
return 1;
}
factNm1=fact(n-1);
factN=factNm1*n;
return factN;
}
