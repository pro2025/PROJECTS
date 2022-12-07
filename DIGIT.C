#include<stdio.h>
#include<conio.h>
void main()
{
int A,i,B;
clrscr();
printf("Enter a 4 digit number:");
scanf("%d",&A);
for (i=A;i>0;i=i/10)
{
B=i%10;
printf("%d",B);
}
getch();
}
