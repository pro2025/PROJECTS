#include<stdio.h>
#include<conio.h>
int sum(int n);
int main()
{
int n;
clrscr();
printf("enter till when sum needed:");
scanf("%d",&n);
printf("sum is: %d\n",sum(n));
getch();
return 0;
}
//recursive function
int sum(int n)
{
int sumn1;
int sumN;
if(n==1)
{
return 1;
}
sumn1=sum(n-1);//sum of 1 to n
sumN=sumn1+n;
return sumN;
}
