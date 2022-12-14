#include<stdio.h>
#include<conio.h>
int main()
{
int n;
clrscr();
printf("Enter an integer");
scanf("%d",&n);
while(n!=0)
{
printf("Enter an integer");
scanf("%d",&n);
}
getch();
return 0;
}
