#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n;
int sum=0;
int i;
clrscr();
printf("Enter the Binary number: ");
scanf("%d",&n);
for(i=0;n!=0;i++)
{
sum=(n%10)*pow(2,i);
n=n/10;
}
printf("The Decimal Value of Binary Number is %d",sum);
getch();
}